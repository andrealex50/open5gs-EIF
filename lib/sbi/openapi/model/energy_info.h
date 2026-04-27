/*
 * energy_info.h
 *
 * Represents energy information.
 */

#ifndef _OpenAPI_energy_info_H_
#define _OpenAPI_energy_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_info_s OpenAPI_energy_info_t;
typedef struct OpenAPI_energy_info_s {
    double energy_consumption;
    char *energy_report_time_stamp;
} OpenAPI_energy_info_t;

OpenAPI_energy_info_t *OpenAPI_energy_info_create(
    double energy_consumption,
    char *energy_report_time_stamp
);
void OpenAPI_energy_info_free(OpenAPI_energy_info_t *energy_info);
OpenAPI_energy_info_t *OpenAPI_energy_info_parseFromJSON(cJSON *energy_infoJSON);
cJSON *OpenAPI_energy_info_convertToJSON(OpenAPI_energy_info_t *energy_info);
OpenAPI_energy_info_t *OpenAPI_energy_info_copy(OpenAPI_energy_info_t *dst, OpenAPI_energy_info_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_info_H_ */
