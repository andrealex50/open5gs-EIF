#include "app_ranking_info.h"

OpenAPI_app_ranking_info_t *OpenAPI_app_ranking_info_create(OpenAPI_list_t *ranked_app_ids)
{
    OpenAPI_app_ranking_info_t *value = ogs_calloc(1, sizeof(*value));
    ogs_assert(value);
    value->ranked_app_ids = ranked_app_ids;
    return value;
}

void OpenAPI_app_ranking_info_free(OpenAPI_app_ranking_info_t *value)
{
    if (!value)
        return;
    OpenAPI_clear_and_free_string_list(value->ranked_app_ids);
    ogs_free(value);
}

OpenAPI_app_ranking_info_t *OpenAPI_app_ranking_info_parseFromJSON(cJSON *json)
{
    cJSON *field = cJSON_GetObjectItemCaseSensitive(json, "rankedAppIds");
    cJSON *entry = NULL;
    OpenAPI_list_t *values = NULL;

    if (!cJSON_IsArray(field) || cJSON_GetArraySize(field) == 0)
        return NULL;
    cJSON_ArrayForEach(entry, field) {
        if (!cJSON_IsString(entry) || !entry->valuestring[0])
            return NULL;
    }
    values = OpenAPI_list_create();
    cJSON_ArrayForEach(entry, field)
        OpenAPI_list_add(values, ogs_strdup(entry->valuestring));
    return OpenAPI_app_ranking_info_create(values);
}

cJSON *OpenAPI_app_ranking_info_convertToJSON(OpenAPI_app_ranking_info_t *value)
{
    cJSON *json = NULL;
    OpenAPI_lnode_t *node = NULL;
    cJSON *array = NULL;

    if (!value || !value->ranked_app_ids || value->ranked_app_ids->count == 0)
        return NULL;
    json = cJSON_CreateObject();
    array = cJSON_AddArrayToObject(json, "rankedAppIds");
    OpenAPI_list_for_each(value->ranked_app_ids, node)
        cJSON_AddItemToArray(array, cJSON_CreateString(node->data));
    return json;
}

OpenAPI_app_ranking_info_t *OpenAPI_app_ranking_info_copy(
        OpenAPI_app_ranking_info_t *dst, OpenAPI_app_ranking_info_t *src)
{
    cJSON *json = OpenAPI_app_ranking_info_convertToJSON(src);
    OpenAPI_app_ranking_info_t *copy = NULL;

    if (!json)
        return NULL;
    copy = OpenAPI_app_ranking_info_parseFromJSON(json);
    cJSON_Delete(json);
    if (copy)
        OpenAPI_app_ranking_info_free(dst);
    return copy;
}
