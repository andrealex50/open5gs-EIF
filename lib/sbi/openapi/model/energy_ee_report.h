/*
 * energy_ee_report.h
 *
 * Represents the Energy Event Exposure report. 
 */

#ifndef _OpenAPI_energy_ee_report_H_
#define _OpenAPI_energy_ee_report_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "energy_ee_event.h"
#include "energy_info.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_ee_report_s OpenAPI_energy_ee_report_t;
typedef struct OpenAPI_energy_ee_report_s {
    OpenAPI_energy_ee_event_e event;
    char *subsc_set_id;
    char *time_stamp;
    struct OpenAPI_energy_info_s *energy_info;
} OpenAPI_energy_ee_report_t;

OpenAPI_energy_ee_report_t *OpenAPI_energy_ee_report_create(
    OpenAPI_energy_ee_event_e event,
    char *subsc_set_id,
    char *time_stamp,
    OpenAPI_energy_info_t *energy_info
);
void OpenAPI_energy_ee_report_free(OpenAPI_energy_ee_report_t *energy_ee_report);
OpenAPI_energy_ee_report_t *OpenAPI_energy_ee_report_parseFromJSON(cJSON *energy_ee_reportJSON);
cJSON *OpenAPI_energy_ee_report_convertToJSON(OpenAPI_energy_ee_report_t *energy_ee_report);
OpenAPI_energy_ee_report_t *OpenAPI_energy_ee_report_copy(OpenAPI_energy_ee_report_t *dst, OpenAPI_energy_ee_report_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_ee_report_H_ */

