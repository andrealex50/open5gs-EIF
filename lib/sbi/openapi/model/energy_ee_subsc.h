/*
 * energy_ee_subsc.h
 *
 * Represents the Energy Event Exposure Subscription. 
 */

#ifndef _OpenAPI_energy_ee_subsc_H_
#define _OpenAPI_energy_ee_subsc_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "energy_ee_subsc_set.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenAPI_energy_ee_subsc_s OpenAPI_energy_ee_subsc_t;
typedef struct OpenAPI_energy_ee_subsc_s {
    char *notif_uri;
    OpenAPI_list_t* events_subsc_sets;
    char *supp_feat;
} OpenAPI_energy_ee_subsc_t;

OpenAPI_energy_ee_subsc_t *OpenAPI_energy_ee_subsc_create(
    char *notif_uri,
    OpenAPI_list_t* events_subsc_sets,
    char *supp_feat
);
void OpenAPI_energy_ee_subsc_free(OpenAPI_energy_ee_subsc_t *energy_ee_subsc);
OpenAPI_energy_ee_subsc_t *OpenAPI_energy_ee_subsc_parseFromJSON(cJSON *energy_ee_subscJSON);
cJSON *OpenAPI_energy_ee_subsc_convertToJSON(OpenAPI_energy_ee_subsc_t *energy_ee_subsc);
OpenAPI_energy_ee_subsc_t *OpenAPI_energy_ee_subsc_copy(OpenAPI_energy_ee_subsc_t *dst, OpenAPI_energy_ee_subsc_t *src);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_ee_subsc_H_ */

