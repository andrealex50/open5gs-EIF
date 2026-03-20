#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pp_profile_data.h"


// Retrieves the parameter provision profile data of a UE
//
pp_profile_data_t*
ParameterProvisionProfileDataDocumentAPI_queryPPData(apiClient_t *apiClient, char * ueId , char * supported_features );


