#include "energy_category.h"

OpenAPI_energy_category_t *OpenAPI_energy_category_create(char *en_cat)
{
    OpenAPI_energy_category_t *value = ogs_calloc(1, sizeof(*value));
    ogs_assert(value);
    value->en_cat = en_cat;
    return value;
}

void OpenAPI_energy_category_free(OpenAPI_energy_category_t *value)
{
    if (!value)
        return;
    ogs_free(value->en_cat);
    ogs_free(value);
}

OpenAPI_energy_category_t *OpenAPI_energy_category_parseFromJSON(cJSON *json)
{
    cJSON *field = cJSON_GetObjectItemCaseSensitive(json, "enCat");
    if (!cJSON_IsString(field))
        return NULL;
    return OpenAPI_energy_category_create(ogs_strdup(field->valuestring));
}

cJSON *OpenAPI_energy_category_convertToJSON(OpenAPI_energy_category_t *value)
{
    cJSON *json = NULL;
    if (!value || !value->en_cat)
        return NULL;
    json = cJSON_CreateObject();
    cJSON_AddStringToObject(json, "enCat", value->en_cat);
    return json;
}

OpenAPI_energy_category_t *OpenAPI_energy_category_copy(
        OpenAPI_energy_category_t *dst, OpenAPI_energy_category_t *src)
{
    cJSON *json = OpenAPI_energy_category_convertToJSON(src);
    OpenAPI_energy_category_t *copy = NULL;

    if (!json)
        return NULL;
    copy = OpenAPI_energy_category_parseFromJSON(json);
    cJSON_Delete(json);
    if (copy)
        OpenAPI_energy_category_free(dst);
    return copy;
}
