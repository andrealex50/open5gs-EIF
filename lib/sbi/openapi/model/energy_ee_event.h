/*
 * energy_ee_event.h
 *
 * Represents the Energy Exposure event.   Possible values are: - UE_ENERGY: Indicates that the Energy Exposure event is the energy consumed by a UE. - PDU_SESSION_ENERGY: Indicates that the Energy Exposure event is the energy consumed   by a PDU session of a UE. - SERVICE_FLOW_ENERGY: Indicates that the Energy Exposure event is the energy consumed   by an application or service data flow of an application traffic of a UE. - UE_SNSSAI_ENERGY: Indicates that the Energy Exposure event is the energy consumed by   a UE in an S-NSSAI. 
 */

#ifndef _OpenAPI_energy_ee_event_H_
#define _OpenAPI_energy_ee_event_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum { OpenAPI_energy_ee_event_NULL = 0, OpenAPI_energy_ee_event_UE_ENERGY, OpenAPI_energy_ee_event_PDU_SESSION_ENERGY, OpenAPI_energy_ee_event_SERVICE_FLOW_ENERGY, OpenAPI_energy_ee_event_UE_SNSSAI_ENERGY } OpenAPI_energy_ee_event_e;

char* OpenAPI_energy_ee_event_ToString(OpenAPI_energy_ee_event_e energy_ee_event);

OpenAPI_energy_ee_event_e OpenAPI_energy_ee_event_FromString(char* energy_ee_event);

#ifdef __cplusplus
}
#endif

#endif /* _OpenAPI_energy_ee_event_H_ */

