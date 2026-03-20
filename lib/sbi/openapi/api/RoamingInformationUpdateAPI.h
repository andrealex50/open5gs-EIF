#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/roaming_info_update.h"


// Update the Roaming Information
//
roaming_info_update_t*
RoamingInformationUpdateAPI_updateRoamingInformation(apiClient_t *apiClient, char * ueId , roaming_info_update_t * roaming_info_update );


