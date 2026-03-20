
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "energy_ee_subsc_set.h"

OpenAPI_energy_ee_subsc_set_t *OpenAPI_energy_ee_subsc_set_create(
    OpenAPI_energy_ee_event_e event,
    char *subsc_set_id,
    char *supi,
    char *gpsi,
    char *dnn,
    OpenAPI_snssai_t *snssai,
    char *app_id,
    OpenAPI_list_t *flow_descs,
    bool is_rep_period,
    int rep_period,
    OpenAPI_time_window_t *rep_time_win,
    OpenAPI_energy_info_t *enrg_rep_thres,
    bool is_rep_period_thres,
    int rep_period_thres,
    bool is_max_report_nbr,
    int max_report_nbr
)
{
    OpenAPI_energy_ee_subsc_set_t *energy_ee_subsc_set_local_var = ogs_malloc(sizeof(OpenAPI_energy_ee_subsc_set_t));
    ogs_assert(energy_ee_subsc_set_local_var);

    energy_ee_subsc_set_local_var->event = event;
    energy_ee_subsc_set_local_var->subsc_set_id = subsc_set_id;
    energy_ee_subsc_set_local_var->supi = supi;
    energy_ee_subsc_set_local_var->gpsi = gpsi;
    energy_ee_subsc_set_local_var->dnn = dnn;
    energy_ee_subsc_set_local_var->snssai = snssai;
    energy_ee_subsc_set_local_var->app_id = app_id;
    energy_ee_subsc_set_local_var->flow_descs = flow_descs;
    energy_ee_subsc_set_local_var->is_rep_period = is_rep_period;
    energy_ee_subsc_set_local_var->rep_period = rep_period;
    energy_ee_subsc_set_local_var->rep_time_win = rep_time_win;
    energy_ee_subsc_set_local_var->enrg_rep_thres = enrg_rep_thres;
    energy_ee_subsc_set_local_var->is_rep_period_thres = is_rep_period_thres;
    energy_ee_subsc_set_local_var->rep_period_thres = rep_period_thres;
    energy_ee_subsc_set_local_var->is_max_report_nbr = is_max_report_nbr;
    energy_ee_subsc_set_local_var->max_report_nbr = max_report_nbr;

    return energy_ee_subsc_set_local_var;
}

void OpenAPI_energy_ee_subsc_set_free(OpenAPI_energy_ee_subsc_set_t *energy_ee_subsc_set)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == energy_ee_subsc_set) {
        return;
    }
    if (energy_ee_subsc_set->subsc_set_id) {
        ogs_free(energy_ee_subsc_set->subsc_set_id);
        energy_ee_subsc_set->subsc_set_id = NULL;
    }
    if (energy_ee_subsc_set->supi) {
        ogs_free(energy_ee_subsc_set->supi);
        energy_ee_subsc_set->supi = NULL;
    }
    if (energy_ee_subsc_set->gpsi) {
        ogs_free(energy_ee_subsc_set->gpsi);
        energy_ee_subsc_set->gpsi = NULL;
    }
    if (energy_ee_subsc_set->dnn) {
        ogs_free(energy_ee_subsc_set->dnn);
        energy_ee_subsc_set->dnn = NULL;
    }
    if (energy_ee_subsc_set->snssai) {
        OpenAPI_snssai_free(energy_ee_subsc_set->snssai);
        energy_ee_subsc_set->snssai = NULL;
    }
    if (energy_ee_subsc_set->app_id) {
        ogs_free(energy_ee_subsc_set->app_id);
        energy_ee_subsc_set->app_id = NULL;
    }
    if (energy_ee_subsc_set->flow_descs) {
        OpenAPI_list_for_each(energy_ee_subsc_set->flow_descs, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(energy_ee_subsc_set->flow_descs);
        energy_ee_subsc_set->flow_descs = NULL;
    }
    if (energy_ee_subsc_set->rep_time_win) {
        OpenAPI_time_window_free(energy_ee_subsc_set->rep_time_win);
        energy_ee_subsc_set->rep_time_win = NULL;
    }
    if (energy_ee_subsc_set->enrg_rep_thres) {
        OpenAPI_energy_info_free(energy_ee_subsc_set->enrg_rep_thres);
        energy_ee_subsc_set->enrg_rep_thres = NULL;
    }
    ogs_free(energy_ee_subsc_set);
}

cJSON *OpenAPI_energy_ee_subsc_set_convertToJSON(OpenAPI_energy_ee_subsc_set_t *energy_ee_subsc_set)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (energy_ee_subsc_set == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [EnergyEeSubscSet]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (energy_ee_subsc_set->event == OpenAPI_energy_ee_event_NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [event]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "event", OpenAPI_energy_ee_event_ToString(energy_ee_subsc_set->event)) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [event]");
        goto end;
    }

    if (!energy_ee_subsc_set->subsc_set_id) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [subsc_set_id]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "subscSetId", energy_ee_subsc_set->subsc_set_id) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [subsc_set_id]");
        goto end;
    }

    if (energy_ee_subsc_set->supi) {
    if (cJSON_AddStringToObject(item, "supi", energy_ee_subsc_set->supi) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [supi]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->gpsi) {
    if (cJSON_AddStringToObject(item, "gpsi", energy_ee_subsc_set->gpsi) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [gpsi]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->dnn) {
    if (cJSON_AddStringToObject(item, "dnn", energy_ee_subsc_set->dnn) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [dnn]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->snssai) {
    cJSON *snssai_local_JSON = OpenAPI_snssai_convertToJSON(energy_ee_subsc_set->snssai);
    if (snssai_local_JSON == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [snssai]");
        goto end;
    }
    cJSON_AddItemToObject(item, "snssai", snssai_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [snssai]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->app_id) {
    if (cJSON_AddStringToObject(item, "appId", energy_ee_subsc_set->app_id) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [app_id]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->flow_descs) {
    cJSON *flow_descsList = cJSON_AddArrayToObject(item, "flowDescs");
    if (flow_descsList == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [flow_descs]");
        goto end;
    }
    OpenAPI_list_for_each(energy_ee_subsc_set->flow_descs, node) {
        if (cJSON_AddStringToObject(flow_descsList, "", (char*)node->data) == NULL) {
            ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [flow_descs]");
            goto end;
        }
    }
    }

    if (energy_ee_subsc_set->is_rep_period) {
    if (cJSON_AddNumberToObject(item, "repPeriod", energy_ee_subsc_set->rep_period) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [rep_period]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->rep_time_win) {
    cJSON *rep_time_win_local_JSON = OpenAPI_time_window_convertToJSON(energy_ee_subsc_set->rep_time_win);
    if (rep_time_win_local_JSON == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [rep_time_win]");
        goto end;
    }
    cJSON_AddItemToObject(item, "repTimeWin", rep_time_win_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [rep_time_win]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->enrg_rep_thres) {
    cJSON *enrg_rep_thres_local_JSON = OpenAPI_energy_info_convertToJSON(energy_ee_subsc_set->enrg_rep_thres);
    if (enrg_rep_thres_local_JSON == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [enrg_rep_thres]");
        goto end;
    }
    cJSON_AddItemToObject(item, "enrgRepThres", enrg_rep_thres_local_JSON);
    if (item->child == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [enrg_rep_thres]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->is_rep_period_thres) {
    if (cJSON_AddNumberToObject(item, "repPeriodThres", energy_ee_subsc_set->rep_period_thres) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [rep_period_thres]");
        goto end;
    }
    }

    if (energy_ee_subsc_set->is_max_report_nbr) {
    if (cJSON_AddNumberToObject(item, "maxReportNbr", energy_ee_subsc_set->max_report_nbr) == NULL) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed [max_report_nbr]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_energy_ee_subsc_set_t *OpenAPI_energy_ee_subsc_set_parseFromJSON(cJSON *energy_ee_subsc_setJSON)
{
    OpenAPI_energy_ee_subsc_set_t *energy_ee_subsc_set_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *event = NULL;
    OpenAPI_energy_ee_event_e eventVariable = 0;
    cJSON *subsc_set_id = NULL;
    cJSON *supi = NULL;
    cJSON *gpsi = NULL;
    cJSON *dnn = NULL;
    cJSON *snssai = NULL;
    OpenAPI_snssai_t *snssai_local_nonprim = NULL;
    cJSON *app_id = NULL;
    cJSON *flow_descs = NULL;
    OpenAPI_list_t *flow_descsList = NULL;
    cJSON *rep_period = NULL;
    cJSON *rep_time_win = NULL;
    OpenAPI_time_window_t *rep_time_win_local_nonprim = NULL;
    cJSON *enrg_rep_thres = NULL;
    OpenAPI_energy_info_t *enrg_rep_thres_local_nonprim = NULL;
    cJSON *rep_period_thres = NULL;
    cJSON *max_report_nbr = NULL;
    event = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "event");
    if (!event) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [event]");
        goto end;
    }
    if (!cJSON_IsString(event)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [event]");
        goto end;
    }
    eventVariable = OpenAPI_energy_ee_event_FromString(event->valuestring);

    subsc_set_id = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "subscSetId");
    if (!subsc_set_id) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [subsc_set_id]");
        goto end;
    }
    if (!cJSON_IsString(subsc_set_id)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [subsc_set_id]");
        goto end;
    }

    supi = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "supi");
    if (supi) {
    if (!cJSON_IsString(supi) && !cJSON_IsNull(supi)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [supi]");
        goto end;
    }
    }

    gpsi = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "gpsi");
    if (gpsi) {
    if (!cJSON_IsString(gpsi) && !cJSON_IsNull(gpsi)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [gpsi]");
        goto end;
    }
    }

    dnn = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "dnn");
    if (dnn) {
    if (!cJSON_IsString(dnn) && !cJSON_IsNull(dnn)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [dnn]");
        goto end;
    }
    }

    snssai = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "snssai");
    if (snssai) {
    snssai_local_nonprim = OpenAPI_snssai_parseFromJSON(snssai);
    if (!snssai_local_nonprim) {
        ogs_error("OpenAPI_snssai_parseFromJSON failed [snssai]");
        goto end;
    }
    }

    app_id = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "appId");
    if (app_id) {
    if (!cJSON_IsString(app_id) && !cJSON_IsNull(app_id)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [app_id]");
        goto end;
    }
    }

    flow_descs = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "flowDescs");
    if (flow_descs) {
        cJSON *flow_descs_local = NULL;
        if (!cJSON_IsArray(flow_descs)) {
            ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [flow_descs]");
            goto end;
        }

        flow_descsList = OpenAPI_list_create();

        cJSON_ArrayForEach(flow_descs_local, flow_descs) {
            double *localDouble = NULL;
            int *localInt = NULL;
            if (!cJSON_IsString(flow_descs_local)) {
                ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [flow_descs]");
                goto end;
            }
            OpenAPI_list_add(flow_descsList, ogs_strdup(flow_descs_local->valuestring));
        }
    }

    rep_period = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "repPeriod");
    if (rep_period) {
    if (!cJSON_IsNumber(rep_period)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [rep_period]");
        goto end;
    }
    }

    rep_time_win = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "repTimeWin");
    if (rep_time_win) {
    rep_time_win_local_nonprim = OpenAPI_time_window_parseFromJSON(rep_time_win);
    if (!rep_time_win_local_nonprim) {
        ogs_error("OpenAPI_time_window_parseFromJSON failed [rep_time_win]");
        goto end;
    }
    }

    enrg_rep_thres = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "enrgRepThres");
    if (enrg_rep_thres) {
    enrg_rep_thres_local_nonprim = OpenAPI_energy_info_parseFromJSON(enrg_rep_thres);
    if (!enrg_rep_thres_local_nonprim) {
        ogs_error("OpenAPI_energy_info_parseFromJSON failed [enrg_rep_thres]");
        goto end;
    }
    }

    rep_period_thres = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "repPeriodThres");
    if (rep_period_thres) {
    if (!cJSON_IsNumber(rep_period_thres)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [rep_period_thres]");
        goto end;
    }
    }

    max_report_nbr = cJSON_GetObjectItemCaseSensitive(energy_ee_subsc_setJSON, "maxReportNbr");
    if (max_report_nbr) {
    if (!cJSON_IsNumber(max_report_nbr)) {
        ogs_error("OpenAPI_energy_ee_subsc_set_parseFromJSON() failed [max_report_nbr]");
        goto end;
    }
    }

    energy_ee_subsc_set_local_var = OpenAPI_energy_ee_subsc_set_create (
        eventVariable,
        ogs_strdup(subsc_set_id->valuestring),
        supi && !cJSON_IsNull(supi) ? ogs_strdup(supi->valuestring) : NULL,
        gpsi && !cJSON_IsNull(gpsi) ? ogs_strdup(gpsi->valuestring) : NULL,
        dnn && !cJSON_IsNull(dnn) ? ogs_strdup(dnn->valuestring) : NULL,
        snssai ? snssai_local_nonprim : NULL,
        app_id && !cJSON_IsNull(app_id) ? ogs_strdup(app_id->valuestring) : NULL,
        flow_descs ? flow_descsList : NULL,
        rep_period ? true : false,
        rep_period ? rep_period->valuedouble : 0,
        rep_time_win ? rep_time_win_local_nonprim : NULL,
        enrg_rep_thres ? enrg_rep_thres_local_nonprim : NULL,
        rep_period_thres ? true : false,
        rep_period_thres ? rep_period_thres->valuedouble : 0,
        max_report_nbr ? true : false,
        max_report_nbr ? max_report_nbr->valuedouble : 0
    );

    return energy_ee_subsc_set_local_var;
end:
    if (snssai_local_nonprim) {
        OpenAPI_snssai_free(snssai_local_nonprim);
        snssai_local_nonprim = NULL;
    }
    if (flow_descsList) {
        OpenAPI_list_for_each(flow_descsList, node) {
            ogs_free(node->data);
        }
        OpenAPI_list_free(flow_descsList);
        flow_descsList = NULL;
    }
    if (rep_time_win_local_nonprim) {
        OpenAPI_time_window_free(rep_time_win_local_nonprim);
        rep_time_win_local_nonprim = NULL;
    }
    if (enrg_rep_thres_local_nonprim) {
        OpenAPI_energy_info_free(enrg_rep_thres_local_nonprim);
        enrg_rep_thres_local_nonprim = NULL;
    }
    return NULL;
}

OpenAPI_energy_ee_subsc_set_t *OpenAPI_energy_ee_subsc_set_copy(OpenAPI_energy_ee_subsc_set_t *dst, OpenAPI_energy_ee_subsc_set_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_energy_ee_subsc_set_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_energy_ee_subsc_set_convertToJSON() failed");
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

    OpenAPI_energy_ee_subsc_set_free(dst);
    dst = OpenAPI_energy_ee_subsc_set_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

