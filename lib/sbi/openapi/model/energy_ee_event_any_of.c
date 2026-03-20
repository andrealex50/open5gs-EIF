
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "energy_ee_event_any_of.h"

char* OpenAPI_energy_ee_event_any_of_ToString(OpenAPI_energy_ee_event_any_of_e energy_ee_event_any_of)
{
    const char *energy_ee_event_any_ofArray[] =  { "NULL", "UE_ENERGY", "PDU_SESSION_ENERGY", "SERVICE_FLOW_ENERGY", "UE_SNSSAI_ENERGY" };
    size_t sizeofArray = sizeof(energy_ee_event_any_ofArray) / sizeof(energy_ee_event_any_ofArray[0]);
    if (energy_ee_event_any_of < sizeofArray)
        return (char *)energy_ee_event_any_ofArray[energy_ee_event_any_of];
    else
        return (char *)"Unknown";
}

OpenAPI_energy_ee_event_any_of_e OpenAPI_energy_ee_event_any_of_FromString(char* energy_ee_event_any_of)
{
    int stringToReturn = 0;
    const char *energy_ee_event_any_ofArray[] =  { "NULL", "UE_ENERGY", "PDU_SESSION_ENERGY", "SERVICE_FLOW_ENERGY", "UE_SNSSAI_ENERGY" };
    size_t sizeofArray = sizeof(energy_ee_event_any_ofArray) / sizeof(energy_ee_event_any_ofArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(energy_ee_event_any_of, energy_ee_event_any_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

