
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "energy_info.h"

OpenAPI_energy_info_t *OpenAPI_energy_info_create(
    double energy_consumption,
    char *energy_report_time_stamp
)
{
    OpenAPI_energy_info_t *energy_info_local_var = ogs_malloc(sizeof(OpenAPI_energy_info_t));
    ogs_assert(energy_info_local_var);

    energy_info_local_var->energy_consumption = energy_consumption;
    energy_info_local_var->energy_report_time_stamp = energy_report_time_stamp;

    return energy_info_local_var;
}

void OpenAPI_energy_info_free(OpenAPI_energy_info_t *energy_info)
{
    OpenAPI_lnode_t *node = NULL;

    if (NULL == energy_info) {
        return;
    }
    if (energy_info->energy_report_time_stamp) {
        ogs_free(energy_info->energy_report_time_stamp);
        energy_info->energy_report_time_stamp = NULL;
    }
    ogs_free(energy_info);
}

cJSON *OpenAPI_energy_info_convertToJSON(OpenAPI_energy_info_t *energy_info)
{
    cJSON *item = NULL;
    OpenAPI_lnode_t *node = NULL;

    if (energy_info == NULL) {
        ogs_error("OpenAPI_energy_info_convertToJSON() failed [EnergyInfo]");
        return NULL;
    }

    item = cJSON_CreateObject();
    if (!item) {
        ogs_error("OpenAPI_energy_info_convertToJSON() failed [item]");
        return NULL;
    }

    if (cJSON_AddNumberToObject(item, "energy", energy_info->energy_consumption) == NULL) {
        ogs_error("OpenAPI_energy_info_convertToJSON() failed [energy_consumption]");
        goto end;
    }

    if (energy_info->energy_report_time_stamp) {
    if (cJSON_AddStringToObject(item, "energyReportTimeStamp", energy_info->energy_report_time_stamp) == NULL) {
        ogs_error("OpenAPI_energy_info_convertToJSON() failed [energy_report_time_stamp]");
        goto end;
    }
    }

end:
    return item;
}

OpenAPI_energy_info_t *OpenAPI_energy_info_parseFromJSON(cJSON *energy_infoJSON)
{
    OpenAPI_energy_info_t *energy_info_local_var = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *energy_consumption = NULL;
    cJSON *energy_report_time_stamp = NULL;
    if (!energy_infoJSON) {
        ogs_error("OpenAPI_energy_info_parseFromJSON() failed [EnergyInfo]");
        goto end;
    }

    energy_consumption = cJSON_GetObjectItemCaseSensitive(energy_infoJSON, "energy");
    if (!energy_consumption)
        energy_consumption = cJSON_GetObjectItemCaseSensitive(energy_infoJSON, "energyConsumption");
    if (!energy_consumption) {
        ogs_error("OpenAPI_energy_info_parseFromJSON() failed [energy_consumption]");
        goto end;
    }
    if (!cJSON_IsNumber(energy_consumption)) {
        ogs_error("OpenAPI_energy_info_parseFromJSON() failed [energy_consumption]");
        goto end;
    }
    if (energy_consumption->valuedouble < 0) {
        ogs_error("OpenAPI_energy_info_parseFromJSON() failed [energy_consumption]");
        goto end;
    }

    energy_report_time_stamp = cJSON_GetObjectItemCaseSensitive(energy_infoJSON, "energyReportTimeStamp");
    if (energy_report_time_stamp) {
    if (!cJSON_IsString(energy_report_time_stamp) && !cJSON_IsNull(energy_report_time_stamp)) {
        ogs_error("OpenAPI_energy_info_parseFromJSON() failed [energy_report_time_stamp]");
        goto end;
    }
    }

    energy_info_local_var = OpenAPI_energy_info_create (
        
        energy_consumption->valuedouble,
        energy_report_time_stamp && !cJSON_IsNull(energy_report_time_stamp) ? ogs_strdup(energy_report_time_stamp->valuestring) : NULL
    );

    return energy_info_local_var;
end:
    return NULL;
}

OpenAPI_energy_info_t *OpenAPI_energy_info_copy(OpenAPI_energy_info_t *dst, OpenAPI_energy_info_t *src)
{
    cJSON *item = NULL;
    char *content = NULL;

    ogs_assert(src);
    item = OpenAPI_energy_info_convertToJSON(src);
    if (!item) {
        ogs_error("OpenAPI_energy_info_convertToJSON() failed");
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

    OpenAPI_energy_info_free(dst);
    dst = OpenAPI_energy_info_parseFromJSON(item);
    cJSON_Delete(item);

    return dst;
}
