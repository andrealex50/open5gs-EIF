/*
 * energy_ee_event_any_of.h
 *
 * 
 */

#ifndef _OpenAPI_energy_ee_event_any_of_H_
#define _OpenAPI_energy_ee_event_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_energy_ee_event_any_of_NULL = 0, OpenAPI_energy_ee_event_any_of_UE_ENERGY, OpenAPI_energy_ee_event_any_of_PDU_SESSION_ENERGY, OpenAPI_energy_ee_event_any_of_SERVICE_FLOW_ENERGY, OpenAPI_energy_ee_event_any_of_UE_SNSSAI_ENERGY } OpenAPI_energy_ee_event_any_of_e;

char* OpenAPI_energy_ee_event_any_of_ToString(OpenAPI_energy_ee_event_any_of_e energy_ee_event_any_of);

OpenAPI_energy_ee_event_any_of_e OpenAPI_energy_ee_event_any_of_FromString(char* energy_ee_event_any_of);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_ee_event_any_of_H_ */

