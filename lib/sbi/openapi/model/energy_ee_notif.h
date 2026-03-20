/*
 * energy_ee_notif.h
 *
 * Represents the Energy Event Exposure Notification. 
 */

#ifndef _OpenAPI_energy_ee_notif_H_
#define _OpenAPI_energy_ee_notif_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "energy_ee_report.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_ee_notif_s OpenAPI_energy_ee_notif_t;
typedef struct OpenAPI_energy_ee_notif_s {
    char *sub_id;
    OpenAPI_list_t *reports;
} OpenAPI_energy_ee_notif_t;

OpenAPI_energy_ee_notif_t *OpenAPI_energy_ee_notif_create(
    char *sub_id,
    OpenAPI_list_t *reports
);
void OpenAPI_energy_ee_notif_free(OpenAPI_energy_ee_notif_t *energy_ee_notif);
OpenAPI_energy_ee_notif_t *OpenAPI_energy_ee_notif_parseFromJSON(cJSON *energy_ee_notifJSON);
cJSON *OpenAPI_energy_ee_notif_convertToJSON(OpenAPI_energy_ee_notif_t *energy_ee_notif);
OpenAPI_energy_ee_notif_t *OpenAPI_energy_ee_notif_copy(OpenAPI_energy_ee_notif_t *dst, OpenAPI_energy_ee_notif_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_ee_notif_H_ */

