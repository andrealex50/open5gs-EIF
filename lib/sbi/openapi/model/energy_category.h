/* TS 29.566 Release 20. */
#ifndef _OpenAPI_energy_category_H_
#define _OpenAPI_energy_category_H_

#include "../include/list.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_category_s {
    char *en_cat;
} OpenAPI_energy_category_t;

OpenAPI_energy_category_t *OpenAPI_energy_category_create(char *en_cat);
void OpenAPI_energy_category_free(OpenAPI_energy_category_t *value);
OpenAPI_energy_category_t *OpenAPI_energy_category_parseFromJSON(cJSON *json);
cJSON *OpenAPI_energy_category_convertToJSON(OpenAPI_energy_category_t *value);
OpenAPI_energy_category_t *OpenAPI_energy_category_copy(
        OpenAPI_energy_category_t *dst, OpenAPI_energy_category_t *src);

#ifdef __cplusplus
}
#endif

#endif
