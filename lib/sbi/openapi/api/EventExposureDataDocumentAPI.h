#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ee_profile_data.h"


// Retrieves the ee profile data of a UE
//
ee_profile_data_t*
EventExposureDataDocumentAPI_queryEEData(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features );


