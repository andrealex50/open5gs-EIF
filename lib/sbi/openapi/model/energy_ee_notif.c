
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "energy_ee_notif.h"

OpenAPI_energy_ee_notif_t *OpenAPI_energy_ee_notif_create(
    char *sub_id,
    OpenAPI_list_t *reports
)
{
    OpenAPI_energy_ee_notif_t *energy_ee_notif_local_var = ogs_malloc(sizeof(OpenAPI_energy_ee_notif_t));
    ogs_assert(energy_ee_notif_local_var);

    energy_ee_notif_local_var->sub_id = sub_id;
    energy_ee_notif_local_var->reports = reports;

    return energy_ee_notif_local_var;
}

void OpenAPI_energy_ee_notif_free(OpenAPI_energy_ee_notif_t *energy_ee_notif)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == energy_ee_notif) {
        return;
    }
    if (energy_ee_notif->sub_id) {
        ogs_free(energy_ee_notif->sub_id);
        energy_ee_notif->sub_id = NULL;
    }
    if (energy_ee_notif->reports) {
        OpenAPI_list_for_each(energy_ee_notif->reports, node) {
            OpenAPI_energy_ee_report_free(node->data);
        }
        OpenAPI_list_free(energy_ee_notif->reports);
        energy_ee_notif->reports = NULL;
    }
    ogs_free(energy_ee_notif);
}

cJSON *OpenAPI_energy_ee_notif_convertToJSON(OpenAPI_energy_ee_notif_t *energy_ee_notif)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (energy_ee_notif == NULL) {
        ogs_error("OpenAPI_energy_ee_notif_convertToJSON() failed [EnergyEeNotif]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (!energy_ee_notif->sub_id) {
        ogs_error("OpenAPI_energy_ee_notif_convertToJSON() failed [sub_id]");
        return NULL;
    }
    if (cJSON_AddStringToObject(item, "subId", energy_ee_notif->sub_id) == NULL) {
        ogs_error("OpenAPI_energy_ee_notif_convertToJSON() failed [sub_id]");
        goto end;
    }

    if (!energy_ee_notif->reports) {
        ogs_error("OpenAPI_energy_ee_notif_convertToJSON() failed [reports]");
        return NULL;
    }
    cJSON *reportsList = cJSON_AddArrayToObject(item, "reports");
    if (reportsList == NULL) {
        ogs_error("OpenAPI_energy_ee_notif_convertToJSON() failed [reports]");
        goto end;
    }
    OpenAPI_list_for_each(energy_ee_notif->reports, node) {
        cJSON *itemLocal = OpenAPI_energy_ee_report_convertToJSON(node->data);
        if (itemLocal == NULL) {
            ogs_error("OpenAPI_energy_ee_notif_convertToJSON() failed [reports]");
            goto end;
        }
        cJSON_AddItemToArray(reportsList, itemLocal);
    }

end:
    return item;
}

OpenAPI_energy_ee_notif_t *OpenAPI_energy_ee_notif_parseFromJSON(cJSON *energy_ee_notifJSON)
{
    OpenAPI_energy_ee_notif_t *energy_ee_notif_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *sub_id = NULL;
    cJSON *reports = NULL;
    OpenAPI_list_t *reportsList = NULL;
    sub_id = cJSON_GetObjectItemCaseSensitive(energy_ee_notifJSON, "subId");
    if (!sub_id) {
        ogs_error("OpenAPI_energy_ee_notif_parseFromJSON() failed [sub_id]");
        goto end;
    }
    if (!cJSON_IsString(sub_id)) {
        ogs_error("OpenAPI_energy_ee_notif_parseFromJSON() failed [sub_id]");
        goto end;
    }

    reports = cJSON_GetObjectItemCaseSensitive(energy_ee_notifJSON, "reports");
    if (!reports) {
        ogs_error("OpenAPI_energy_ee_notif_parseFromJSON() failed [reports]");
        goto end;
    }
        cJSON *reports_local = NULL;
        if (!cJSON_IsArray(reports)) {
            ogs_error("OpenAPI_energy_ee_notif_parseFromJSON() failed [reports]");
            goto end;
        }

        reportsList = OpenAPI_list_create();

        cJSON_ArrayForEach(reports_local, reports) {
            if (!cJSON_IsObject(reports_local)) {
                ogs_error("OpenAPI_energy_ee_notif_parseFromJSON() failed [reports]");
                goto end;
            }
            OpenAPI_energy_ee_report_t *reportsItem = OpenAPI_energy_ee_report_parseFromJSON(reports_local);
            if (!reportsItem) {
                ogs_error("No reportsItem");
                goto end;
            }
            OpenAPI_list_add(reportsList, reportsItem);
        }

    energy_ee_notif_local_var = OpenAPI_energy_ee_notif_create (
        ogs_strdup(sub_id->valuestring),
        reportsList
    );

    return energy_ee_notif_local_var;
end:
    if (reportsList) {
        OpenAPI_list_for_each(reportsList, node) {
            OpenAPI_energy_ee_report_free(node->data);
        }
        OpenAPI_list_free(reportsList);
        reportsList = NULL;
    }
    return NULL;
}

OpenAPI_energy_ee_notif_t *OpenAPI_energy_ee_notif_copy(OpenAPI_energy_ee_notif_t *dst, OpenAPI_energy_ee_notif_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_energy_ee_notif_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_energy_ee_notif_convertToJSON() failed");
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

    OpenAPI_energy_ee_notif_free(dst);
    dst = OpenAPI_energy_ee_notif_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}

