/* TS 29.566 Release 20. */
#ifndef _OpenAPI_energy_per_bit_data_H_
#define _OpenAPI_energy_per_bit_data_H_

#include "../include/list.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_per_bit_data_s {
    double ene_per_bit;
} OpenAPI_energy_per_bit_data_t;

OpenAPI_energy_per_bit_data_t *OpenAPI_energy_per_bit_data_create(double ene_per_bit);
void OpenAPI_energy_per_bit_data_free(OpenAPI_energy_per_bit_data_t *value);
OpenAPI_energy_per_bit_data_t *OpenAPI_energy_per_bit_data_parseFromJSON(cJSON *json);
cJSON *OpenAPI_energy_per_bit_data_convertToJSON(OpenAPI_energy_per_bit_data_t *value);
OpenAPI_energy_per_bit_data_t *OpenAPI_energy_per_bit_data_copy(
        OpenAPI_energy_per_bit_data_t *dst, OpenAPI_energy_per_bit_data_t *src);

#ifdef __cplusplus
}
#endif

#endif
