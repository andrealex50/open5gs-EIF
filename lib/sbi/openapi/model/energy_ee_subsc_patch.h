/*
 * energy_ee_subsc_patch.h
 *
 * Represents the requested modifications to an Energy Event Exposure Subscription. 
 */

#ifndef _OpenAPI_energy_ee_subsc_patch_H_
#define _OpenAPI_energy_ee_subsc_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "energy_ee_subsc_set.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_ee_subsc_patch_s OpenAPI_energy_ee_subsc_patch_t;
typedef struct OpenAPI_energy_ee_subsc_patch_s {
    char *notif_uri;
    OpenAPI_list_t* events_subsc_sets;
} OpenAPI_energy_ee_subsc_patch_t;

OpenAPI_energy_ee_subsc_patch_t *OpenAPI_energy_ee_subsc_patch_create(
    char *notif_uri,
    OpenAPI_list_t* events_subsc_sets
);
void OpenAPI_energy_ee_subsc_patch_free(OpenAPI_energy_ee_subsc_patch_t *energy_ee_subsc_patch);
OpenAPI_energy_ee_subsc_patch_t *OpenAPI_energy_ee_subsc_patch_parseFromJSON(cJSON *energy_ee_subsc_patchJSON);
cJSON *OpenAPI_energy_ee_subsc_patch_convertToJSON(OpenAPI_energy_ee_subsc_patch_t *energy_ee_subsc_patch);
OpenAPI_energy_ee_subsc_patch_t *OpenAPI_energy_ee_subsc_patch_copy(OpenAPI_energy_ee_subsc_patch_t *dst, OpenAPI_energy_ee_subsc_patch_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_ee_subsc_patch_H_ */

