#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ee_group_profile_data.h"


// Retrieves the ee profile data profile data of a group or anyUE
//
ee_group_profile_data_t*
EventExposureDataForAGroupDocumentAPI_queryGroupEEData(apiClient_t *apiClient, char * ueGroupId , char * supported_features );


