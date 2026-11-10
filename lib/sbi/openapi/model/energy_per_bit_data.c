#include "energy_per_bit_data.h"
#include <math.h>

OpenAPI_energy_per_bit_data_t *OpenAPI_energy_per_bit_data_create(double ene_per_bit)
{
    OpenAPI_energy_per_bit_data_t *value = ogs_calloc(1, sizeof(*value));
    ogs_assert(value);
    value->ene_per_bit = ene_per_bit;
    return value;
}

void OpenAPI_energy_per_bit_data_free(OpenAPI_energy_per_bit_data_t *value)
{
    if (!value)
        return;
    ogs_free(value);
}

OpenAPI_energy_per_bit_data_t *OpenAPI_energy_per_bit_data_parseFromJSON(cJSON *json)
{
    cJSON *field = cJSON_GetObjectItemCaseSensitive(json, "enePerBit");
    if (!cJSON_IsNumber(field) || !isfinite(field->valuedouble) ||
            field->valuedouble < 0)
        return NULL;
    return OpenAPI_energy_per_bit_data_create(field->valuedouble);
}

cJSON *OpenAPI_energy_per_bit_data_convertToJSON(OpenAPI_energy_per_bit_data_t *value)
{
    cJSON *json = NULL;
    if (!value || !isfinite(value->ene_per_bit) || value->ene_per_bit < 0)
        return NULL;
    json = cJSON_CreateObject();
    cJSON_AddNumberToObject(json, "enePerBit", value->ene_per_bit);
    return json;
}

OpenAPI_energy_per_bit_data_t *OpenAPI_energy_per_bit_data_copy(
        OpenAPI_energy_per_bit_data_t *dst, OpenAPI_energy_per_bit_data_t *src)
{
    cJSON *json = OpenAPI_energy_per_bit_data_convertToJSON(src);
    OpenAPI_energy_per_bit_data_t *copy = NULL;

    if (!json)
        return NULL;
    copy = OpenAPI_energy_per_bit_data_parseFromJSON(json);
    cJSON_Delete(json);
    if (copy)
        OpenAPI_energy_per_bit_data_free(dst);
    return copy;
}
