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

bool eif_neif_ee_handle_subscriptions(
        eif_sess_t *sess, ogs_sbi_stream_t *stream, ogs_sbi_message_t *recvmsg)
{
    int status = 0;
    char *strerror = NULL;
    ogs_sbi_server_t *server = NULL;

    ogs_sbi_message_t sendmsg;
    ogs_sbi_header_t header;
    ogs_sbi_response_t *response = NULL;

    cJSON *item = NULL;

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

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

            memset(&sendmsg, 0, sizeof(sendmsg));
            sendmsg.EnergyEeSubsc = sess->energy_ee_subsc;

            response = ogs_sbi_build_response(&sendmsg, OGS_SBI_HTTP_STATUS_OK);
            ogs_assert(response);
            ogs_assert(true == ogs_sbi_server_send_response(stream, response));
            break;

        CASE(OGS_SBI_HTTP_METHOD_PUT)
            if (!recvmsg->EnergyEeSubsc) {
                strerror = ogs_msprintf("No EnergyEeSubsc provided in Request Body");
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

            if (sess->energy_ee_subsc) {
                OpenAPI_energy_ee_subsc_free(sess->energy_ee_subsc);
                sess->energy_ee_subsc = NULL;
            }

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

            item = OpenAPI_energy_ee_subsc_convertToJSON(recvmsg->EnergyEeSubsc);
            ogs_assert(item);
            sess->energy_ee_subsc = OpenAPI_energy_ee_subsc_parseFromJSON(item);
            ogs_assert(sess->energy_ee_subsc);
            cJSON_Delete(item);

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

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));
            if (!sess->energy_ee_subsc) {
                strerror = ogs_msprintf("Subscription data not found");
                status = OGS_SBI_HTTP_STATUS_NOT_FOUND;
                goto cleanup;
            }

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

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

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));
                child = child->next;
            }

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

            OpenAPI_energy_ee_subsc_free(sess->energy_ee_subsc);
            sess->energy_ee_subsc = OpenAPI_energy_ee_subsc_parseFromJSON(orig_json);
            ogs_assert(sess->energy_ee_subsc);

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
            if (!recvmsg->EnergyEeSubsc) {
                strerror = ogs_msprintf("No EnergyEeSubsc provided in Request Body");
                status = OGS_SBI_HTTP_STATUS_BAD_REQUEST;
                goto cleanup;
            }

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

            item = OpenAPI_energy_ee_subsc_convertToJSON(recvmsg->EnergyEeSubsc);
            ogs_assert(item);
            sess->energy_ee_subsc = OpenAPI_energy_ee_subsc_parseFromJSON(item);
            ogs_assert(sess->energy_ee_subsc);
            cJSON_Delete(item);

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

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

    return true;

cleanup:
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

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));
    }

    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));

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
    if (status != OGS_SBI_HTTP_STATUS_NO_CONTENT && status != OGS_SBI_HTTP_STATUS_OK) {
        ogs_warn("Notification failed with status: %d", status);
    } else {
        ogs_debug("Notification succeeded with status: %d", status);
    }
    return OGS_OK;
}

void eif_timer_notify_handler(eif_event_t *e)
{
    eif_sess_t *sess = NULL;
    bool rc;
    OpenAPI_uri_scheme_e scheme = OpenAPI_uri_scheme_NULL;
    char *fqdn = NULL;
    uint16_t fqdn_port = 0;
    ogs_sockaddr_t *addr = NULL, *addr6 = NULL;
    ogs_debug("Timer Notification Handler executed");

    ogs_list_for_each(&eif_self()->sess_list, sess) {
        if (!sess->energy_ee_subsc || !sess->energy_ee_subsc->notif_uri) continue;

        ogs_sbi_message_t message;
        ogs_sbi_request_t *request = NULL;
        ogs_sbi_client_t *client = NULL;

        memset(&message, 0, sizeof(message));
        message.h.method = (char *)OGS_SBI_HTTP_METHOD_POST;
        message.h.uri = sess->energy_ee_subsc->notif_uri;

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

                OpenAPI_energy_ee_report_t *report = ogs_calloc(1, sizeof(*report));
                report->subsc_set_id = ogs_strdup(map->key);
                report->event = subsc_set->event;
                report->time_stamp = ogs_sbi_localtime_string(ogs_time_now());

                OpenAPI_energy_info_t *energy_info = ogs_calloc(1, sizeof(*energy_info));
                energy_info->energy_consumption = (int)(ogs_time_now() % 1000) + 100; /* Simulated */
                report->energy_info = energy_info;

                OpenAPI_list_add(list, report);
            }
        }

        request = ogs_sbi_build_request(&message);
        if (request) {
            rc = ogs_sbi_getaddr_from_uri(&scheme, &fqdn, &fqdn_port, &addr, &addr6, sess->energy_ee_subsc->notif_uri);
            if (rc == true && scheme != OpenAPI_uri_scheme_NULL) {
                client = ogs_sbi_client_find(scheme, fqdn, fqdn_port, addr, addr6);
                if (!client) {
                    client = ogs_sbi_client_add(scheme, fqdn, fqdn_port, addr, addr6);
                }
            }
            ogs_free(fqdn);
            ogs_freeaddrinfo(addr);
            ogs_freeaddrinfo(addr6);

            if (client) {
                ogs_sbi_send_request_to_client(client, notif_client_cb, request, NULL);
                ogs_debug("Notification sent to %s", sess->energy_ee_subsc->notif_uri);
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
                if (report) {
                    if (report->subsc_set_id) ogs_free(report->subsc_set_id);
                    if (report->time_stamp) ogs_free(report->time_stamp);
                    if (report->energy_info) ogs_free(report->energy_info);
                    ogs_free(report);
                }
            }
            OpenAPI_list_free(list);
        }
    }
    ogs_timer_start(eif_self()->notify_timer, ogs_time_from_sec(5));
}

