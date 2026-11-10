#include "energy-report.h"

#include <ctype.h>
#include <math.h>

bool eif_energy_negotiate_features(
        OpenAPI_energy_ee_subsc_t *subscription, bool from_nef, char **error)
{
    OpenAPI_lnode_t *node = NULL;
    uint64_t features = 0;

    ogs_assert(subscription);
    ogs_assert(error);
    *error = NULL;

    if (subscription->supp_feat) {
        const char *digit = subscription->supp_feat;

        if (strlen(digit) > 16) {
            *error = ogs_strdup("suppFeat exceeds 64 bits");
            return false;
        }
        for (; *digit; digit++) {
            if (!isxdigit((unsigned char)*digit)) {
                *error = ogs_strdup("suppFeat must be hexadecimal");
                return false;
            }
        }
        features = ogs_uint64_from_string_hexadecimal(subscription->supp_feat);
    }
    features &= EIF_ENERGY_2_FEATURE;

    OpenAPI_list_for_each(subscription->events_subsc_sets, node) {
        OpenAPI_map_t *map = node->data;
        OpenAPI_energy_ee_subsc_set_t *set = map->value;

        if ((set->is_ene_per_bit_ind || set->is_energy_cat_ind ||
                    set->is_app_ranking_ind || set->app_ids) && !features) {
            *error = ogs_strdup("Release 20 attributes require suppFeat Energy_2");
            return false;
        }
        if (set->app_ids && !set->is_app_ranking_ind) {
            *error = ogs_strdup("appIds requires appRankingInd");
            return false;
        }
        if (set->is_app_ranking_ind &&
                (!from_nef ||
                 (set->event != OpenAPI_energy_ee_event_UE_ENERGY &&
                  set->event != OpenAPI_energy_ee_event_PDU_SESSION_ENERGY))) {
            *error = ogs_strdup(
                    "appRankingInd requires NEF over N111 and UE or PDU session energy");
            return false;
        }
    }

    if (subscription->supp_feat) {
        ogs_free(subscription->supp_feat);
        subscription->supp_feat = ogs_strdup(features ? "1" : "0");
    }
    return true;
}

OpenAPI_energy_ee_report_t *eif_energy_report_parse(
        const char *body, OpenAPI_energy_ee_subsc_set_t *set,
        const char *end_time)
{
    cJSON *root = cJSON_Parse(body);
    cJSON *json = NULL, *energy_info = NULL, *energy = NULL;
    OpenAPI_energy_ee_report_t *report = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (!cJSON_IsObject(root))
        goto cleanup;
    energy_info = cJSON_GetObjectItemCaseSensitive(root, "energyInfo");
    energy = cJSON_GetObjectItemCaseSensitive(energy_info, "energy");
    if (!cJSON_IsNumber(energy) || !isfinite(energy->valuedouble) ||
            energy->valuedouble < 0)
        goto cleanup;

    json = cJSON_CreateObject();
    cJSON_AddStringToObject(json, "event", OpenAPI_energy_ee_event_ToString(set->event));
    cJSON_AddStringToObject(json, "subscSetId", set->subsc_set_id);
    cJSON_AddStringToObject(json, "timeStamp", end_time);
    cJSON_AddItemToObject(json, "energyInfo", cJSON_Duplicate(energy_info, true));
    if (set->is_ene_per_bit_ind)
        cJSON_AddItemToObject(json, "enePerBitInfo",
                cJSON_Duplicate(cJSON_GetObjectItemCaseSensitive(
                    root, "enePerBitInfo"), true));
    if (set->is_energy_cat_ind)
        cJSON_AddItemToObject(json, "energyCat",
                cJSON_Duplicate(cJSON_GetObjectItemCaseSensitive(
                    root, "energyCat"), true));
    if (set->is_app_ranking_ind)
        cJSON_AddItemToObject(json, "appRankingInfo",
                cJSON_Duplicate(cJSON_GetObjectItemCaseSensitive(
                    root, "appRankingInfo"), true));

    report = OpenAPI_energy_ee_report_parseFromJSON(json);
    if (!report)
        goto cleanup;
    if ((set->is_ene_per_bit_ind && !report->ene_per_bit_info) ||
            (set->is_energy_cat_ind && !report->energy_cat) ||
            (set->is_app_ranking_ind && !report->app_ranking_info))
        goto invalid;

    if (report->app_ranking_info && set->app_ids) {
        OpenAPI_list_for_each(report->app_ranking_info->ranked_app_ids, node) {
            OpenAPI_lnode_t *allowed = NULL;
            bool found = false;

            OpenAPI_list_for_each(set->app_ids, allowed) {
                if (!strcmp(node->data, allowed->data)) {
                    found = true;
                    break;
                }
            }
            if (!found)
                goto invalid;
        }
    }
    /* Use the requested collection window, including with legacy collectors. */
    ogs_free(report->energy_info->energy_report_time_stamp);
    report->energy_info->energy_report_time_stamp = ogs_strdup(end_time);
    goto cleanup;

invalid:
    OpenAPI_energy_ee_report_free(report);
    report = NULL;
cleanup:
    cJSON_Delete(json);
    cJSON_Delete(root);
    return report;
}
