
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "energy_ee_report.h"

OpenAPI_energy_ee_report_t *OpenAPI_energy_ee_report_create(
    OpenAPI_energy_ee_event_e event,
    char *subsc_set_id,
    char *time_stamp,
    OpenAPI_energy_info_t *energy_info
)
{
    OpenAPI_energy_ee_report_t *energy_ee_report_local_var = ogs_calloc(1, sizeof(OpenAPI_energy_ee_report_t));
    ogs_assert(energy_ee_report_local_var);

    energy_ee_report_local_var->event = event;
    energy_ee_report_local_var->subsc_set_id = subsc_set_id;
    energy_ee_report_local_var->time_stamp = time_stamp;
    energy_ee_report_local_var->energy_info = energy_info;

    return energy_ee_report_local_var;
}

void OpenAPI_energy_ee_report_free(OpenAPI_energy_ee_report_t *energy_ee_report)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == energy_ee_report) {
        return;
    }
    if (energy_ee_report->subsc_set_id) {
        ogs_free(energy_ee_report->subsc_set_id);
        energy_ee_report->subsc_set_id = NULL;
    }
    if (energy_ee_report->time_stamp) {
        ogs_free(energy_ee_report->time_stamp);
        energy_ee_report->time_stamp = NULL;
    }
    if (energy_ee_report->energy_info) {
        OpenAPI_energy_info_free(energy_ee_report->energy_info);
        energy_ee_report->energy_info = NULL;
    }
    OpenAPI_app_ranking_info_free(energy_ee_report->app_ranking_info);
    OpenAPI_energy_per_bit_data_free(energy_ee_report->ene_per_bit_info);
    OpenAPI_energy_category_free(energy_ee_report->energy_cat);
    ogs_free(energy_ee_report);
}

cJSON *OpenAPI_energy_ee_report_convertToJSON(OpenAPI_energy_ee_report_t *energy_ee_report)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (energy_ee_report == NULL) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [EnergyEeReport]");
        return NULL;
    }

    if (energy_ee_report->app_ranking_info &&
            energy_ee_report->event != OpenAPI_energy_ee_event_UE_ENERGY &&
            energy_ee_report->event != OpenAPI_energy_ee_event_PDU_SESSION_ENERGY)
        return NULL;
    item = cJSON_CreateObject();
    if (energy_ee_report->event == OpenAPI_energy_ee_event_NULL) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [event]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "event", OpenAPI_energy_ee_event_ToString(energy_ee_report->event)) == NULL) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [event]");
        goto end;
    }

    if (!energy_ee_report->subsc_set_id) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [subsc_set_id]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "subscSetId", energy_ee_report->subsc_set_id) == NULL) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [subsc_set_id]");
        goto end;
    }

    if (!energy_ee_report->time_stamp) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [time_stamp]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "timeStamp", energy_ee_report->time_stamp) == NULL) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [time_stamp]");
        goto end;
    }

    if (energy_ee_report->energy_info) {
    cJSON *energy_info_local_JSON = OpenAPI_energy_info_convertToJSON(energy_ee_report->energy_info);
    if (energy_info_local_JSON == NULL) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [energy_info]");
        goto end;
    }
    cJSON_AddItemToObject(item, "energyInfo", energy_info_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed [energy_info]");
        goto end;
    }
    }

    if (energy_ee_report->app_ranking_info) {
        cJSON *extra = OpenAPI_app_ranking_info_convertToJSON(energy_ee_report->app_ranking_info);
        if (!energy_ee_report->energy_info || !extra) {
            cJSON_Delete(extra);
            cJSON_Delete(item);
            return NULL;
        }
        cJSON_AddItemToObject(item, "appRankingInfo", extra);
    }
    if (energy_ee_report->ene_per_bit_info) {
        cJSON *extra = OpenAPI_energy_per_bit_data_convertToJSON(energy_ee_report->ene_per_bit_info);
        if (!energy_ee_report->energy_info || !extra) {
            cJSON_Delete(extra);
            cJSON_Delete(item);
            return NULL;
        }
        cJSON_AddItemToObject(item, "enePerBitInfo", extra);
    }
    if (energy_ee_report->energy_cat) {
        cJSON *extra = OpenAPI_energy_category_convertToJSON(energy_ee_report->energy_cat);
        if (!energy_ee_report->energy_info || !extra) {
            cJSON_Delete(extra);
            cJSON_Delete(item);
            return NULL;
        }
        cJSON_AddItemToObject(item, "energyCat", extra);
    }
end:
    return item;
}

OpenAPI_energy_ee_report_t *OpenAPI_energy_ee_report_parseFromJSON(cJSON *energy_ee_reportJSON)
{
    OpenAPI_energy_ee_report_t *energy_ee_report_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *event = NULL;
    OpenAPI_energy_ee_event_e eventVariable = 0;
    cJSON *subsc_set_id = NULL;
    cJSON *time_stamp = NULL;
    cJSON *energy_info = NULL;
    OpenAPI_energy_info_t *energy_info_local_nonprim = NULL;
    cJSON *app_ranking_info_json = NULL;
    OpenAPI_app_ranking_info_t *app_ranking_info = NULL;
    cJSON *ene_per_bit_info_json = NULL;
    OpenAPI_energy_per_bit_data_t *ene_per_bit_info = NULL;
    cJSON *energy_cat_json = NULL;
    OpenAPI_energy_category_t *energy_cat = NULL;
    event = cJSON_GetObjectItemCaseSensitive(energy_ee_reportJSON, "event");
    if (!event) {
        ogs_error("OpenAPI_energy_ee_report_parseFromJSON() failed [event]");
        goto end;
    }
    if (!cJSON_IsString(event)) {
        ogs_error("OpenAPI_energy_ee_report_parseFromJSON() failed [event]");
        goto end;
    }
    eventVariable = OpenAPI_energy_ee_event_FromString(event->valuestring);

    subsc_set_id = cJSON_GetObjectItemCaseSensitive(energy_ee_reportJSON, "subscSetId");
    if (!subsc_set_id) {
        ogs_error("OpenAPI_energy_ee_report_parseFromJSON() failed [subsc_set_id]");
        goto end;
    }
    if (!cJSON_IsString(subsc_set_id)) {
        ogs_error("OpenAPI_energy_ee_report_parseFromJSON() failed [subsc_set_id]");
        goto end;
    }

    time_stamp = cJSON_GetObjectItemCaseSensitive(energy_ee_reportJSON, "timeStamp");
    if (!time_stamp) {
        ogs_error("OpenAPI_energy_ee_report_parseFromJSON() failed [time_stamp]");
        goto end;
    }
    if (!cJSON_IsString(time_stamp)) {
        ogs_error("OpenAPI_energy_ee_report_parseFromJSON() failed [time_stamp]");
        goto end;
    }

    energy_info = cJSON_GetObjectItemCaseSensitive(energy_ee_reportJSON, "energyInfo");
    if (energy_info) {
    energy_info_local_nonprim = OpenAPI_energy_info_parseFromJSON(energy_info);
    if (!energy_info_local_nonprim) {
        ogs_error("OpenAPI_energy_info_parseFromJSON failed [energy_info]");
        goto end;
    }
    }

    app_ranking_info_json = cJSON_GetObjectItemCaseSensitive(energy_ee_reportJSON, "appRankingInfo");
    if (app_ranking_info_json) {
        app_ranking_info = OpenAPI_app_ranking_info_parseFromJSON(app_ranking_info_json);
        if (!energy_info_local_nonprim || !app_ranking_info)
            goto end;
    }
    ene_per_bit_info_json = cJSON_GetObjectItemCaseSensitive(energy_ee_reportJSON, "enePerBitInfo");
    if (ene_per_bit_info_json) {
        ene_per_bit_info = OpenAPI_energy_per_bit_data_parseFromJSON(ene_per_bit_info_json);
        if (!energy_info_local_nonprim || !ene_per_bit_info)
            goto end;
    }
    energy_cat_json = cJSON_GetObjectItemCaseSensitive(energy_ee_reportJSON, "energyCat");
    if (energy_cat_json) {
        energy_cat = OpenAPI_energy_category_parseFromJSON(energy_cat_json);
        if (!energy_info_local_nonprim || !energy_cat)
            goto end;
    }
    if (app_ranking_info &&
            eventVariable != OpenAPI_energy_ee_event_UE_ENERGY &&
            eventVariable != OpenAPI_energy_ee_event_PDU_SESSION_ENERGY)
        goto end;

    energy_ee_report_local_var = OpenAPI_energy_ee_report_create (
        eventVariable,
        ogs_strdup(subsc_set_id->valuestring),
        ogs_strdup(time_stamp->valuestring),
        energy_info ? energy_info_local_nonprim : NULL
    );

    energy_ee_report_local_var->app_ranking_info = app_ranking_info;
    energy_ee_report_local_var->ene_per_bit_info = ene_per_bit_info;
    energy_ee_report_local_var->energy_cat = energy_cat;
    return energy_ee_report_local_var;
end:
    OpenAPI_app_ranking_info_free(app_ranking_info);
    OpenAPI_energy_per_bit_data_free(ene_per_bit_info);
    OpenAPI_energy_category_free(energy_cat);
    if (energy_info_local_nonprim) {
        OpenAPI_energy_info_free(energy_info_local_nonprim);
        energy_info_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_energy_ee_report_t *OpenAPI_energy_ee_report_copy(OpenAPI_energy_ee_report_t *dst, OpenAPI_energy_ee_report_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_energy_ee_report_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_energy_ee_report_convertToJSON() failed");
        return NULL;
    }

    content = cJSON_Print(item);
    cJSON_Delete(item);

    if (!content) {
        ogs_error("cJSON_Print() failed");
        return NULL;
    }

    item = cJSON_Parse(content);
    ogs_free(content);
    if (!item) {
        ogs_error("cJSON_Parse() failed");
        return NULL;
    }

    OpenAPI_energy_ee_report_free(dst);
    dst = OpenAPI_energy_ee_report_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

