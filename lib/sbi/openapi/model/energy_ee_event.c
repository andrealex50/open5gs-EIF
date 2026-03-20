
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "energy_ee_event.h"

char* OpenAPI_energy_ee_event_ToString(OpenAPI_energy_ee_event_e energy_ee_event)
{
    const char *energy_ee_eventArray[] =  { "NULL", "UE_ENERGY", "PDU_SESSION_ENERGY", "SERVICE_FLOW_ENERGY", "UE_SNSSAI_ENERGY" };
    size_t sizeofArray = sizeof(energy_ee_eventArray) / sizeof(energy_ee_eventArray[0]);
    if (energy_ee_event < sizeofArray)
        return (char *)energy_ee_eventArray[energy_ee_event];
    else
        return (char *)"Unknown";
}

OpenAPI_energy_ee_event_e OpenAPI_energy_ee_event_FromString(char* energy_ee_event)
{
    int stringToReturn = 0;
    const char *energy_ee_eventArray[] =  { "NULL", "UE_ENERGY", "PDU_SESSION_ENERGY", "SERVICE_FLOW_ENERGY", "UE_SNSSAI_ENERGY" };
    size_t sizeofArray = sizeof(energy_ee_eventArray) / sizeof(energy_ee_eventArray[0]);
    while (stringToReturn < sizeofArray) {
        if (strcmp(energy_ee_event, energy_ee_eventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

