/*
 * Copyright (C) 2019-2023 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "sbi-path.h"
#include "neif-handler.h"

#include <arpa/inet.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <unistd.h>

#define EIF_ENERGY_COLLECTOR_DEFAULT_HOST "172.22.0.44"
#define EIF_ENERGY_COLLECTOR_DEFAULT_PORT 8088
#define EIF_ENERGY_COLLECTOR_DEFAULT_PATH "/energy/v1/report"
#define EIF_ENERGY_COLLECTOR_DEFAULT_TIMEOUT_SEC 2
#define EIF_ENERGY_COLLECTOR_BUFFER_SIZE 8192
#define EIF_DEFAULT_REPORT_PERIOD_SEC 5

typedef struct eif_notification_context_s {
    char *sub_id;
    uint64_t generation;
} eif_notification_context_t;

static const char *eif_env_string(const char *name, const char *fallback)
{
    const char *value = getenv(name);

    if (value && value[0])
        return value;

    return fallback;
}

static int eif_env_int(const char *name, int fallback, int min, int max)
{
    const char *value = getenv(name);
    char *end = NULL;
    long parsed = 0;

    if (!value || !value[0])
        return fallback;

    parsed = strtol(value, &end, 10);
    if (!end || *end || parsed < min || parsed > max) {
        ogs_warn("Invalid %s [%s], using default [%d]",
                name, value, fallback);
        return fallback;
    }

    return (int)parsed;
}

static const char *eif_energy_collector_host(void)
{
    return eif_env_string(
            "EIF_ENERGY_COLLECTOR_HOST",
            EIF_ENERGY_COLLECTOR_DEFAULT_HOST);
}

static int eif_energy_collector_port(void)
{
    return eif_env_int(
            "EIF_ENERGY_COLLECTOR_PORT",
            EIF_ENERGY_COLLECTOR_DEFAULT_PORT, 1, 65535);
}

static const char *eif_energy_collector_path_base(void)
{
    const char *path = eif_env_string(
            "EIF_ENERGY_COLLECTOR_PATH",
            EIF_ENERGY_COLLECTOR_DEFAULT_PATH);

    if (path[0] != '/') {
        ogs_warn("Invalid EIF_ENERGY_COLLECTOR_PATH [%s], using default [%s]",
                path, EIF_ENERGY_COLLECTOR_DEFAULT_PATH);
        return EIF_ENERGY_COLLECTOR_DEFAULT_PATH;
    }

    return path;
}

static int eif_energy_collector_timeout_sec(void)
{
    return eif_env_int(
            "EIF_ENERGY_COLLECTOR_TIMEOUT_SEC",
            EIF_ENERGY_COLLECTOR_DEFAULT_TIMEOUT_SEC, 1, 60);
}

static int eif_report_period(OpenAPI_energy_ee_subsc_set_t *subsc_set)
{
    ogs_assert(subsc_set);

    if (subsc_set->is_rep_period && subsc_set->rep_period > 0)
        return subsc_set->rep_period;
    if (subsc_set->is_rep_period_thres && subsc_set->rep_period_thres > 0)
        return subsc_set->rep_period_thres;

    return EIF_DEFAULT_REPORT_PERIOD_SEC;
}

static OpenAPI_energy_ee_subsc_t *eif_subscription_clone(
        OpenAPI_energy_ee_subsc_t *subscription)
{
    if (!subscription)
        return NULL;

    return OpenAPI_energy_ee_subsc_copy(NULL, subscription);
}

static bool eif_notif_uri_is_valid(const char *uri)
{
    bool valid = false;
    OpenAPI_uri_scheme_e scheme = OpenAPI_uri_scheme_NULL;
    char *fqdn = NULL;
    uint16_t port = 0;
    ogs_sockaddr_t *addr = NULL, *addr6 = NULL;

    if (!uri || !uri[0])
        return false;

    valid = ogs_sbi_getaddr_from_uri(
            &scheme, &fqdn, &port, &addr, &addr6, (char *)uri);
    valid = valid && (scheme == OpenAPI_uri_scheme_http ||
                      scheme == OpenAPI_uri_scheme_https);

    ogs_free(fqdn);
    ogs_freeaddrinfo(addr);
    ogs_freeaddrinfo(addr6);
    return valid;
}

static bool eif_validate_subscription(
        OpenAPI_energy_ee_subsc_t *subscription, char **error)
{
    OpenAPI_lnode_t *node = NULL;
    ogs_time_t now = ogs_time_now();

    ogs_assert(error);
    *error = NULL;

    if (!subscription) {
        *error = ogs_strdup("No EnergyEeSubsc provided in request body");
        return false;
    }
    if (!eif_notif_uri_is_valid(subscription->notif_uri)) {
        *error = ogs_strdup("notifUri must be a valid HTTP or HTTPS URI");
        return false;
    }
    if (!subscription->events_subsc_sets ||
            subscription->events_subsc_sets->count == 0) {
        *error = ogs_strdup("eventsSubscSets must contain at least one entry");
        return false;
    }

    OpenAPI_list_for_each(subscription->events_subsc_sets, node) {
        OpenAPI_map_t *map = node->data;
        OpenAPI_energy_ee_subsc_set_t *set = NULL;
        bool has_supi = false, has_gpsi = false;
        bool has_app_id = false, has_flow_descs = false;

        if (!map || !map->key || !map->key[0] || !map->value) {
            *error = ogs_strdup("eventsSubscSets contains an invalid entry");
            return false;
        }
        set = map->value;
        if (!set->subsc_set_id || !set->subsc_set_id[0] ||
                strcmp(map->key, set->subsc_set_id) != 0) {
            *error = ogs_msprintf(
                    "eventsSubscSets key [%s] must equal subscSetId",
                    map->key);
            return false;
        }
        if (set->event == OpenAPI_energy_ee_event_NULL) {
            *error = ogs_msprintf("Unsupported event in subscription set [%s]",
                    map->key);
            return false;
        }

        has_supi = set->supi && set->supi[0];
        has_gpsi = set->gpsi && set->gpsi[0];
        if (has_supi == has_gpsi) {
            *error = ogs_msprintf(
                    "Subscription set [%s] must contain exactly one of supi or gpsi",
                    map->key);
            return false;
        }

        has_app_id = set->app_id && set->app_id[0];
        has_flow_descs = set->flow_descs && set->flow_descs->count > 0;
        if (has_app_id && has_flow_descs) {
            *error = ogs_msprintf(
                    "Subscription set [%s] cannot contain both appId and flowDescs",
                    map->key);
            return false;
        }

        switch (set->event) {
        case OpenAPI_energy_ee_event_UE_ENERGY:
            if (set->dnn || set->snssai || has_app_id || has_flow_descs) {
                *error = ogs_msprintf(
                        "UE_ENERGY set [%s] cannot contain scoped energy attributes",
                        map->key);
                return false;
            }
            break;
        case OpenAPI_energy_ee_event_PDU_SESSION_ENERGY:
            if ((!set->dnn || !set->dnn[0]) && !set->snssai) {
                *error = ogs_msprintf(
                        "PDU_SESSION_ENERGY set [%s] requires dnn or snssai",
                        map->key);
                return false;
            }
            if (has_app_id || has_flow_descs) {
                *error = ogs_msprintf(
                        "PDU_SESSION_ENERGY set [%s] cannot contain appId or flowDescs",
                        map->key);
                return false;
            }
            break;
        case OpenAPI_energy_ee_event_SERVICE_FLOW_ENERGY:
            if ((!set->dnn || !set->dnn[0]) && !set->snssai) {
                *error = ogs_msprintf(
                        "SERVICE_FLOW_ENERGY set [%s] requires dnn or snssai",
                        map->key);
                return false;
            }
            if (has_app_id == has_flow_descs) {
                *error = ogs_msprintf(
                        "SERVICE_FLOW_ENERGY set [%s] requires exactly one of appId or flowDescs",
                        map->key);
                return false;
            }
            break;
        case OpenAPI_energy_ee_event_UE_SNSSAI_ENERGY:
            if (!set->snssai) {
                *error = ogs_msprintf(
                        "UE_SNSSAI_ENERGY set [%s] requires snssai", map->key);
                return false;
            }
            if (set->dnn || has_app_id || has_flow_descs) {
                *error = ogs_msprintf(
                        "UE_SNSSAI_ENERGY set [%s] contains invalid scope attributes",
                        map->key);
                return false;
            }
            break;
        default:
            *error = ogs_msprintf("Unsupported event in subscription set [%s]",
                    map->key);
            return false;
        }

        if (set->is_rep_period && set->rep_period <= 0) {
            *error = ogs_msprintf("repPeriod must be positive in set [%s]", map->key);
            return false;
        }
        if (set->is_rep_period_thres && set->rep_period_thres <= 0) {
            *error = ogs_msprintf(
                    "repPeriodThres must be positive in set [%s]", map->key);
            return false;
        }
        if (set->is_rep_period_thres && !set->enrg_rep_thres) {
            *error = ogs_msprintf(
                    "repPeriodThres requires enrgRepThres in set [%s]", map->key);
            return false;
        }
        if (set->is_max_report_nbr && set->max_report_nbr <= 0) {
            *error = ogs_msprintf(
                    "maxReportNbr must be positive in set [%s]", map->key);
            return false;
        }
        if (set->rep_time_win) {
            ogs_time_t start_time = 0, stop_time = 0;

            if (set->is_rep_period || set->enrg_rep_thres ||
                    set->is_rep_period_thres) {
                *error = ogs_msprintf(
                        "repTimeWin cannot be combined with periodic or threshold reporting in set [%s]",
                        map->key);
                return false;
            }
            if (!set->rep_time_win->start_time ||
                    !set->rep_time_win->stop_time ||
                    !ogs_sbi_time_from_string(
                        &start_time, set->rep_time_win->start_time) ||
                    !ogs_sbi_time_from_string(
                        &stop_time, set->rep_time_win->stop_time) ||
                    start_time <= now || stop_time <= start_time) {
                *error = ogs_msprintf(
                        "repTimeWin must contain a future startTime and a later stopTime in set [%s]",
                        map->key);
                return false;
            }
        }
    }

    return true;
}

static void eif_reset_report_states(eif_sess_t *sess)
{
    OpenAPI_lnode_t *node = NULL;
    ogs_time_t now = ogs_time_now();

    ogs_assert(sess);
    eif_report_state_remove_all(sess);

    if (!sess->energy_ee_subsc ||
            !sess->energy_ee_subsc->events_subsc_sets)
        return;

    OpenAPI_list_for_each(
            sess->energy_ee_subsc->events_subsc_sets, node) {
        OpenAPI_map_t *map = node->data;
        OpenAPI_energy_ee_subsc_set_t *set = NULL;
        ogs_time_t next_report_at = 0;

        if (!map || !map->key || !map->value)
            continue;
        set = map->value;
        if (set->rep_time_win) {
            if (!ogs_sbi_time_from_string(
                        &next_report_at, set->rep_time_win->stop_time))
                continue;
        } else {
            next_report_at = now +
                ogs_time_from_sec(eif_report_period(set));
        }
        eif_report_state_add(sess, map->key, next_report_at);
    }
}

static bool eif_url_is_unreserved(unsigned char c)
{
    return isalnum(c) || c == '-' || c == '.' || c == '_' || c == '~';
}

static char *eif_url_encode(const char *value)
{
    static const char hex[] = "0123456789ABCDEF";
    size_t len = 0;
    char *encoded = NULL, *p = NULL;

    if (!value)
        return ogs_strdup("");

    len = strlen(value);
    encoded = ogs_malloc((len * 3) + 1);
    ogs_assert(encoded);

    p = encoded;
    while (*value) {
        unsigned char c = (unsigned char)*value++;
        if (eif_url_is_unreserved(c)) {
            *p++ = (char)c;
        } else {
            *p++ = '%';
            *p++ = hex[c >> 4];
            *p++ = hex[c & 0x0f];
        }
    }
    *p = '\0';

    return encoded;
}

static void eif_append_query_param(char **path, const char *name, const char *value)
{
    char *encoded = NULL;
    char *next = NULL;

    ogs_assert(path);
    ogs_assert(*path);
    ogs_assert(name);

    if (!value)
        return;

    encoded = eif_url_encode(value);
    next = ogs_msprintf("%s&%s=%s", *path, name, encoded);
    ogs_assert(next);

    ogs_free(encoded);
    ogs_free(*path);
    *path = next;
}

static char *eif_snssai_string(OpenAPI_snssai_t *snssai)
{
    if (!snssai)
        return NULL;

    if (snssai->sd)
        return ogs_msprintf("%d-%s", snssai->sst, snssai->sd);

    return ogs_msprintf("%d", snssai->sst);
}

static char *eif_energy_collector_path(
        OpenAPI_energy_ee_subsc_set_t *subsc_set, char *start, char *end)
{
    OpenAPI_lnode_t *node = NULL;
    char *identifier = NULL, *event = NULL, *start_param = NULL, *end_param = NULL;
    const char *identifier_name = NULL, *identifier_value = NULL;
    char *path = NULL, *snssai = NULL;

    ogs_assert(subsc_set);
    ogs_assert(start);
    ogs_assert(end);

    if (subsc_set->event == OpenAPI_energy_ee_event_NULL)
        return NULL;

    if (subsc_set->supi) {
        identifier_name = "supi";
        identifier_value = subsc_set->supi;
    } else if (subsc_set->gpsi) {
        identifier_name = "gpsi";
        identifier_value = subsc_set->gpsi;
    } else {
        return NULL;
    }

    identifier = eif_url_encode(identifier_value);
    event = eif_url_encode(OpenAPI_energy_ee_event_ToString(subsc_set->event));
    start_param = eif_url_encode(start);
    end_param = eif_url_encode(end);

    path = ogs_msprintf("%s?%s=%s&event=%s&start=%s&end=%s",
            eif_energy_collector_path_base(),
            identifier_name, identifier, event, start_param, end_param);
    ogs_assert(path);

    eif_append_query_param(&path, "dnn", subsc_set->dnn);

    snssai = eif_snssai_string(subsc_set->snssai);
    eif_append_query_param(&path, "snssai", snssai);
    eif_append_query_param(&path, "appId", subsc_set->app_id);

    if (subsc_set->flow_descs) {
        OpenAPI_list_for_each(subsc_set->flow_descs, node) {
            eif_append_query_param(&path, "flowDescs", node->data);
        }
    }

    ogs_free(identifier);
    ogs_free(event);
    ogs_free(start_param);
    ogs_free(end_param);
    if (snssai)
        ogs_free(snssai);

    return path;
}

static bool eif_energy_collector_parse_body(const char *body, double *energy)
{
    cJSON *root = NULL;
    cJSON *energy_info = NULL;
    cJSON *energy_item = NULL;

    ogs_assert(body);
    ogs_assert(energy);

    root = cJSON_Parse(body);
    if (!root)
        return false;

    energy_info = cJSON_GetObjectItemCaseSensitive(root, "energyInfo");
    if (energy_info)
        energy_item = cJSON_GetObjectItemCaseSensitive(energy_info, "energy");

    if (!cJSON_IsNumber(energy_item) || energy_item->valuedouble < 0) {
        cJSON_Delete(root);
        return false;
    }

    *energy = energy_item->valuedouble;
    cJSON_Delete(root);
    return true;
}

static bool eif_energy_collector_connect(
        int fd, struct sockaddr_in *addr, socklen_t addrlen)
{
    int flags = 0, rc = 0, error = 0;
    socklen_t error_len = sizeof(error);
    fd_set write_fds;
    struct timeval timeout;

    flags = fcntl(fd, F_GETFL, 0);
    if (flags < 0)
        return false;

    if (fcntl(fd, F_SETFL, flags | O_NONBLOCK) < 0)
        return false;

    rc = connect(fd, (struct sockaddr *)addr, addrlen);
    if (rc < 0 && errno != EINPROGRESS)
        goto cleanup;

    if (rc < 0) {
        FD_ZERO(&write_fds);
        FD_SET(fd, &write_fds);

        memset(&timeout, 0, sizeof(timeout));
        timeout.tv_sec = eif_energy_collector_timeout_sec();

        rc = select(fd + 1, NULL, &write_fds, NULL, &timeout);
        if (rc <= 0)
            goto cleanup;

        if (getsockopt(fd, SOL_SOCKET, SO_ERROR, &error, &error_len) < 0)
            goto cleanup;

        if (error != 0) {
            errno = error;
            goto cleanup;
        }
    }

    if (fcntl(fd, F_SETFL, flags) < 0)
        return false;

    return true;

cleanup:
    fcntl(fd, F_SETFL, flags);
    return false;
}

static bool eif_energy_collector_fetch(char *path, double *energy)
{
    int fd = -1, status = 0;
    ssize_t sent = 0, n = 0;
    size_t total = 0, request_len = 0;
    const char *collector_host = NULL;
    int collector_port = 0, timeout_sec = 0;
    struct sockaddr_in addr;
    struct timeval timeout;
    char *request = NULL;
    char response[EIF_ENERGY_COLLECTOR_BUFFER_SIZE];
    char *body = NULL;

    ogs_assert(path);
    ogs_assert(energy);

    collector_host = eif_energy_collector_host();
    collector_port = eif_energy_collector_port();
    timeout_sec = eif_energy_collector_timeout_sec();

    fd = socket(AF_INET, SOCK_STREAM, 0);
    if (fd < 0) {
        ogs_warn("Energy Collector socket creation failed");
        return false;
    }

    memset(&timeout, 0, sizeof(timeout));
    timeout.tv_sec = timeout_sec;
    setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &timeout, sizeof(timeout));
    setsockopt(fd, SOL_SOCKET, SO_SNDTIMEO, &timeout, sizeof(timeout));

    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(collector_port);
    if (inet_pton(AF_INET, collector_host, &addr.sin_addr) != 1) {
        ogs_warn("Invalid Energy Collector address [%s]", collector_host);
        close(fd);
        return false;
    }

    if (!eif_energy_collector_connect(fd, &addr, sizeof(addr))) {
        ogs_warn("Cannot connect to Energy Collector [%s:%d]",
                collector_host, collector_port);
        close(fd);
        return false;
    }

    request = ogs_msprintf(
            "GET %s HTTP/1.1\r\n"
            "Host: %s:%d\r\n"
            "Accept: application/json\r\n"
            "Connection: close\r\n\r\n",
            path, collector_host, collector_port);
    ogs_assert(request);

    request_len = strlen(request);
    while (sent < (ssize_t)request_len) {
        n = send(fd, request + sent, request_len - sent, 0);
        if (n <= 0) {
            ogs_warn("Energy Collector request send failed");
            ogs_free(request);
            close(fd);
            return false;
        }
        sent += n;
    }
    ogs_free(request);

    while (total < sizeof(response) - 1) {
        n = recv(fd, response + total, sizeof(response) - 1 - total, 0);
        if (n <= 0)
            break;
        total += n;
    }
    close(fd);
    response[total] = '\0';

    if (total == 0) {
        ogs_warn("Energy Collector returned an empty response");
        return false;
    }

    if (sscanf(response, "HTTP/%*s %d", &status) != 1 ||
            status < OGS_SBI_HTTP_STATUS_OK ||
            status >= OGS_SBI_HTTP_STATUS_BAD_REQUEST) {
        ogs_warn("Energy Collector failed with HTTP status [%d]", status);
        return false;
    }

    body = strstr(response, "\r\n\r\n");
    if (!body) {
        ogs_warn("Energy Collector response has no HTTP body");
        return false;
    }
    body += 4;

    if (!eif_energy_collector_parse_body(body, energy)) {
        ogs_warn("Energy Collector response has no energyInfo.energy");
        return false;
    }

    return true;
}

static bool eif_energy_from_collector(
        OpenAPI_energy_ee_subsc_set_t *subsc_set, char *start, char *end,
        double *energy)
{
    char *path = NULL;

    ogs_assert(energy);

    path = eif_energy_collector_path(subsc_set, start, end);
    if (!path) {
        ogs_warn("Energy Collector query skipped: missing target identifier or event");
        return false;
    }

    if (eif_energy_collector_fetch(path, energy)) {
        ogs_debug("Energy Collector returned energy [%f] for target [%s]",
                *energy, subsc_set->supi ?
                    subsc_set->supi : subsc_set->gpsi);
        ogs_free(path);
        return true;
    }

    ogs_free(path);
    return false;
}

bool eif_neif_ee_handle_subscriptions(
        eif_sess_t *sess, ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg)
{
    int status = 0;
    char *strerror = NULL;
    ogs_sbi_server_t *server = NULL;

    ogs_sbi_message_t sendmsg;
    ogs_sbi_header_t header;
    ogs_sbi_response_t *response = NULL;

    OpenAPI_energy_ee_subsc_t *candidate = NULL;
    bool remove_sess_on_error = false;

    ogs_assert(stream);
    ogs_assert(recvmsg);
    server = ogs_sbi_server_from_stream(stream);
    ogs_assert(server);

    if (recvmsg->h.resource.component[1]) {
        SWITCH(recvmsg->h.method)
        CASE(OGS_SBI_HTTP_METHOD_GET)
            if (!sess->energy_ee_subsc) {
                strerror = ogs_msprintf("Subscription data not found [%s]", sess->sub_id);
                status = OGS_SBI_HTTP_STATUS_NOT_FOUND;
                goto cleanup;
            }

            memset(&sendmsg, 0, sizeof(sendmsg));
            sendmsg.EnergyEeSubsc = sess->energy_ee_subsc;

            response = ogs_sbi_build_response(&sendmsg, OGS_SBI_HTTP_STATUS_OK);
            ogs_assert(response);
            ogs_assert(true == ogs_sbi_server_send_response(stream, response));
            break;

        CASE(OGS_SBI_HTTP_METHOD_PUT)
            candidate = eif_subscription_clone(recvmsg->EnergyEeSubsc);
            if (!candidate) {
                strerror = ogs_strdup("No valid EnergyEeSubsc provided in request body");
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }
            if (!eif_validate_subscription(candidate, &strerror)) {
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }

            if (sess->energy_ee_subsc) {
                OpenAPI_energy_ee_subsc_free(sess->energy_ee_subsc);
                sess->energy_ee_subsc = NULL;
            }
            sess->energy_ee_subsc = candidate;
            candidate = NULL;
            eif_reset_report_states(sess);

            memset(&sendmsg, 0, sizeof(sendmsg));
            sendmsg.EnergyEeSubsc = sess->energy_ee_subsc;

            response = ogs_sbi_build_response(&sendmsg, OGS_SBI_HTTP_STATUS_OK);
            ogs_assert(response);
            ogs_assert(true == ogs_sbi_server_send_response(stream, response));
            break;

        CASE(OGS_SBI_HTTP_METHOD_PATCH)
            if (!recvmsg->EnergyEeSubscPatch) {
                strerror = ogs_msprintf("No EnergyEeSubscPatch provided");
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }

            if (!sess->energy_ee_subsc) {
                strerror = ogs_msprintf("Subscription data not found");
                status = OGS_SBI_HTTP_STATUS_NOT_FOUND;
                goto cleanup;
            }

            cJSON *orig_json = OpenAPI_energy_ee_subsc_convertToJSON(sess->energy_ee_subsc);
            ogs_assert(orig_json);

            cJSON *patch_json = OpenAPI_energy_ee_subsc_patch_convertToJSON(recvmsg->EnergyEeSubscPatch);
            ogs_assert(patch_json);

            cJSON *child = patch_json->child;
            while (child) {
                cJSON *existing = cJSON_GetObjectItemCaseSensitive(orig_json, child->string);
                if (existing) {
                    cJSON_ReplaceItemInObjectCaseSensitive(orig_json, child->string, cJSON_Duplicate(child, 1));
                } else {
                    cJSON_AddItemToObject(orig_json, child->string, cJSON_Duplicate(child, 1));
                }
                child = child->next;
            }

            candidate = OpenAPI_energy_ee_subsc_parseFromJSON(orig_json);
            if (!candidate) {
                cJSON_Delete(orig_json);
                cJSON_Delete(patch_json);
                strerror = ogs_strdup("Patched subscription is invalid");
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }
            if (!eif_validate_subscription(candidate, &strerror)) {
                cJSON_Delete(orig_json);
                cJSON_Delete(patch_json);
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }

            OpenAPI_energy_ee_subsc_free(sess->energy_ee_subsc);
            sess->energy_ee_subsc = candidate;
            candidate = NULL;
            eif_reset_report_states(sess);

            cJSON_Delete(orig_json);
            cJSON_Delete(patch_json);

            memset(&sendmsg, 0, sizeof(sendmsg));
            sendmsg.EnergyEeSubsc = sess->energy_ee_subsc;

            response = ogs_sbi_build_response(&sendmsg, OGS_SBI_HTTP_STATUS_OK);
            ogs_assert(response);
            ogs_assert(true == ogs_sbi_server_send_response(stream, response));
            break;

        CASE(OGS_SBI_HTTP_METHOD_DELETE)
            memset(&sendmsg, 0, sizeof(sendmsg));
            response = ogs_sbi_build_response(&sendmsg, OGS_SBI_HTTP_STATUS_NO_CONTENT);
            ogs_assert(response);
            ogs_assert(true == ogs_sbi_server_send_response(stream, response));

            eif_sess_remove(sess); 
            break;

        DEFAULT
            strerror = ogs_msprintf("Invalid HTTP method [%s]", recvmsg->h.method);
            status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
            goto cleanup;
        END
    } else {
        SWITCH(recvmsg->h.method)
        CASE(OGS_SBI_HTTP_METHOD_POST)
            remove_sess_on_error = true;
            candidate = eif_subscription_clone(recvmsg->EnergyEeSubsc);
            if (!candidate) {
                strerror = ogs_strdup("No valid EnergyEeSubsc provided in request body");
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }
            if (!eif_validate_subscription(candidate, &strerror)) {
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }

            sess->energy_ee_subsc = candidate;
            candidate = NULL;
            eif_reset_report_states(sess);

            memset(&header, 0, sizeof(header));
            header.service.name = (char *)OGS_SBI_SERVICE_NAME_NEIF_EVENTEXPOSURE;
            header.api.version = (char *)OGS_SBI_API_V1;
            header.resource.component[0] = (char *)OGS_SBI_RESOURCE_NAME_SUBSCRIPTIONS;
            header.resource.component[1] = sess->sub_id;

            memset(&sendmsg, 0, sizeof(sendmsg));
            sendmsg.EnergyEeSubsc = sess->energy_ee_subsc;
            sendmsg.http.location = ogs_sbi_server_uri(server, &header);

            response = ogs_sbi_build_response(&sendmsg, OGS_SBI_HTTP_STATUS_CREATED);
            ogs_assert(response);
            ogs_assert(true == ogs_sbi_server_send_response(stream, response));

            ogs_free(sendmsg.http.location);
            break;

        DEFAULT
            strerror = ogs_msprintf("Invalid HTTP method [%s]", recvmsg->h.method);
            status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
            goto cleanup;
        END
    }

    return true;

cleanup:
    if (candidate)
        OpenAPI_energy_ee_subsc_free(candidate);
    if (remove_sess_on_error)
        eif_sess_remove(sess);
    ogs_assert(strerror);
    ogs_assert(status);
    ogs_error("%s", strerror);
    ogs_assert(true ==
        ogs_sbi_server_send_error(stream, status, recvmsg, strerror, NULL, NULL));
    ogs_free(strerror);

    return false;
}

bool eif_neif_ee_handle_get_subscriptions(
        ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg)
{
    ogs_sbi_response_t *response = NULL;
    cJSON *array = NULL;
    char *content = NULL;
    eif_sess_t *sess = NULL;

    ogs_assert(stream);
    ogs_assert(recvmsg);

    array = cJSON_CreateArray();
    ogs_assert(array);

    ogs_list_for_each(&eif_self()->sess_list, sess) {
        if (sess->energy_ee_subsc) {
            cJSON *item = OpenAPI_energy_ee_subsc_convertToJSON(sess->energy_ee_subsc);
            if (item)
                cJSON_AddItemToArray(array, item);
        }
    }

    content = cJSON_Print(array);
    ogs_assert(content);
    cJSON_Delete(array);

    response = ogs_sbi_response_new();
    ogs_assert(response);
    response->status = OGS_SBI_HTTP_STATUS_OK;
    response->http.content = content;
    response->http.content_length = strlen(content);
    ogs_sbi_header_set(response->http.headers,
            OGS_SBI_CONTENT_TYPE, OGS_SBI_CONTENT_JSON_TYPE);

    ogs_assert(true == ogs_sbi_server_send_response(stream, response));

    return true;
}
static int notif_client_cb(int status, ogs_sbi_response_t *response, void *data)
{
    eif_notification_context_t *context = data;
    eif_sess_t *sess = NULL;
    int http_status = 0;
    int rv = OGS_OK;

    ogs_assert(context);
    sess = eif_sess_find_by_sub_id(context->sub_id);
    if (sess && sess->generation == context->generation)
        sess->notification_pending = false;

    if (status != OGS_OK) {
        ogs_log_message(
                status == OGS_DONE ? OGS_LOG_DEBUG : OGS_LOG_WARN, 0,
                "Notification client callback failed [%d]", status);
        if (response)
            ogs_sbi_response_free(response);
        rv = OGS_ERROR;
        goto cleanup;
    }

    ogs_assert(response);
    http_status = response->status;

    if (http_status < 200 || http_status >= 300) {
        ogs_warn("Notification failed with HTTP status: %d",
                http_status);
    } else {
        ogs_debug("Notification succeeded with HTTP status: %d",
                http_status);
    }

    ogs_sbi_response_free(response);

cleanup:
    ogs_free(context->sub_id);
    ogs_free(context);
    return rv;
}

void eif_timer_notify_handler(eif_event_t *e)
{
    eif_sess_t *sess = NULL;
    bool rc;
    OpenAPI_uri_scheme_e scheme = OpenAPI_uri_scheme_NULL;
    char *fqdn = NULL;
    uint16_t fqdn_port = 0;
    ogs_sockaddr_t *addr = NULL, *addr6 = NULL;
    ogs_time_t now = ogs_time_now();
    ogs_debug("Timer Notification Handler executed");

    ogs_list_for_each(&eif_self()->sess_list, sess) {
        bool report_due = false;

        if (!sess->energy_ee_subsc ||
                !sess->energy_ee_subsc->notif_uri ||
                sess->notification_pending)
            continue;

        ogs_sbi_message_t message;
        ogs_sbi_request_t *request = NULL;
        ogs_sbi_client_t *client = NULL;
        eif_notification_context_t *context = NULL;

        memset(&message, 0, sizeof(message));
        message.h.method = (char *)OGS_SBI_HTTP_METHOD_POST;
        message.h.uri = sess->energy_ee_subsc->notif_uri;
        message.h.service.name = (char *)OGS_SBI_SERVICE_NAME_NEIF_EVENTEXPOSURE;

        OpenAPI_energy_ee_notif_t notif;
        memset(&notif, 0, sizeof(notif));

        OpenAPI_list_t *list = OpenAPI_list_create();
        notif.reports = list;
        notif.sub_id = sess->sub_id;
        message.EnergyEeNotif = &notif;

        if (sess->energy_ee_subsc->events_subsc_sets) {
            OpenAPI_lnode_t *node;
            OpenAPI_list_for_each(sess->energy_ee_subsc->events_subsc_sets, node) {
                OpenAPI_map_t *map = (OpenAPI_map_t *)node->data;
                if (!map || !map->value) continue;

                OpenAPI_energy_ee_subsc_set_t *subsc_set =
                    (OpenAPI_energy_ee_subsc_set_t *)map->value;
                eif_report_state_t *state =
                    eif_report_state_find(sess, map->key);
                int report_period = eif_report_period(subsc_set);
                char *start = NULL, *end = NULL;
                OpenAPI_energy_ee_report_t *report = NULL;
                double collector_energy = 0;

                if (!state) {
                    state = eif_report_state_add(
                            sess, map->key,
                            now + ogs_time_from_sec(report_period));
                }
                if (state->time_window_complete || now < state->next_report_at)
                    continue;
                if (subsc_set->is_max_report_nbr &&
                        state->reports_sent >=
                            (uint64_t)subsc_set->max_report_nbr)
                    continue;

                report_due = true;
                if (subsc_set->rep_time_win) {
                    start = ogs_strdup(subsc_set->rep_time_win->start_time);
                    end = ogs_strdup(subsc_set->rep_time_win->stop_time);
                    state->next_report_at = now +
                        ogs_time_from_sec(EIF_DEFAULT_REPORT_PERIOD_SEC);
                } else {
                    start = ogs_sbi_gmtime_string(
                            now - ogs_time_from_sec(report_period));
                    end = ogs_sbi_gmtime_string(now);
                    state->next_report_at = now +
                        ogs_time_from_sec(report_period);
                }

                if (!eif_energy_from_collector(
                            subsc_set, start, end, &collector_energy)) {
                    ogs_warn("EIF notify report skipped: no valid energyInfo.energy for notifUri [%s] subId [%s] event [%s] supi [%s]",
                            sess->energy_ee_subsc->notif_uri,
                            sess->sub_id,
                            OpenAPI_energy_ee_event_ToString(subsc_set->event),
                            subsc_set->supi ? subsc_set->supi : "");
                    ogs_free(start);
                    ogs_free(end);
                    continue;
                }

                if (subsc_set->enrg_rep_thres &&
                        collector_energy <
                            subsc_set->enrg_rep_thres->energy_consumption) {
                    ogs_debug("EIF energy threshold not reached: subId [%s] set [%s] energy [%f] threshold [%f]",
                            sess->sub_id, map->key, collector_energy,
                            subsc_set->enrg_rep_thres->energy_consumption);
                    ogs_free(start);
                    ogs_free(end);
                    continue;
                }

                report = ogs_calloc(1, sizeof(*report));
                ogs_assert(report);
                report->subsc_set_id = ogs_strdup(map->key);
                report->event = subsc_set->event;
                report->time_stamp = ogs_strdup(end);
                report->energy_info = ogs_calloc(1, sizeof(*report->energy_info));
                ogs_assert(report->energy_info);
                report->energy_info->energy_consumption = collector_energy;
                report->energy_info->energy_report_time_stamp = ogs_strdup(end);

                state->reports_sent++;
                if (subsc_set->rep_time_win)
                    state->time_window_complete = true;

                ogs_info("EIF notify report: notifUri [%s] subId [%s] event [%s] supi [%s] energyInfo.energy [%f]",
                        sess->energy_ee_subsc->notif_uri,
                        sess->sub_id,
                        OpenAPI_energy_ee_event_ToString(subsc_set->event),
                        subsc_set->supi ? subsc_set->supi : "",
                        report->energy_info ?
                            report->energy_info->energy_consumption : 0);

                OpenAPI_list_add(list, report);

                ogs_free(start);
                ogs_free(end);
            }
        }

        if (!list || list->count == 0) {
            if (report_due) {
                ogs_warn("EIF notify skipped: no reports with valid energyInfo.energy for notifUri [%s] subId [%s]",
                        sess->energy_ee_subsc->notif_uri, sess->sub_id);
            }
        } else if ((request = ogs_sbi_build_request(&message))) {
            ogs_info("EIF notify target notifUri [%s] subId [%s]",
                    sess->energy_ee_subsc->notif_uri, sess->sub_id);
            if (request->http.content) {
                ogs_debug("EIF notify body JSON: %s", request->http.content);
                if (strstr(request->http.content, "energyConsumption"))
                    ogs_error("EIF notify body still contains energyConsumption");
            }

            scheme = OpenAPI_uri_scheme_NULL;
            fqdn = NULL;
            fqdn_port = 0;
            addr = NULL;
            addr6 = NULL;
            rc = ogs_sbi_getaddr_from_uri(&scheme, &fqdn, &fqdn_port, &addr, &addr6, sess->energy_ee_subsc->notif_uri);
            if (rc == true && scheme != OpenAPI_uri_scheme_NULL) {
                client = ogs_sbi_client_find(scheme, fqdn, fqdn_port, addr, addr6);
                if (!client) {
                    client = ogs_sbi_client_add(scheme, fqdn, fqdn_port, addr, addr6);
                }
            }
            ogs_free(fqdn);
            fqdn = NULL;
            ogs_freeaddrinfo(addr);
            addr = NULL;
            ogs_freeaddrinfo(addr6);
            addr6 = NULL;

            if (client) {
                context = ogs_calloc(1, sizeof(*context));
                ogs_assert(context);
                context->sub_id = ogs_strdup(sess->sub_id);
                context->generation = sess->generation;

                if (ogs_sbi_client_send_request(
                            client, notif_client_cb, request, context) == true) {
                    sess->notification_pending = true;
                    ogs_sbi_request_free(request);
                    request = NULL;
                    ogs_debug("Notification sent directly to %s", sess->energy_ee_subsc->notif_uri);
                } else {
                    ogs_error("Cannot send HTTP request directly to %s", sess->energy_ee_subsc->notif_uri);
                    ogs_sbi_request_free(request);
                    ogs_free(context->sub_id);
                    ogs_free(context);
                }
            } else {
                ogs_error("Cannot create HTTP client for %s", sess->energy_ee_subsc->notif_uri);
                ogs_sbi_request_free(request);
            }
        } else {
            ogs_error("Failed to build request for %s", sess->energy_ee_subsc->notif_uri);
        }
        if (list) {
            OpenAPI_lnode_t *free_node;
            OpenAPI_list_for_each(list, free_node) {
                OpenAPI_energy_ee_report_t *report = (OpenAPI_energy_ee_report_t *)free_node->data;
                OpenAPI_energy_ee_report_free(report);
            }
            OpenAPI_list_free(list);
        }
    }
    ogs_timer_start(eif_self()->notify_timer,
            ogs_time_from_sec(EIF_NOTIFY_TICK_SEC));
}
