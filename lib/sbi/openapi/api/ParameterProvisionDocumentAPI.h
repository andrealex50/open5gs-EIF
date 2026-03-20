#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pp_data.h"
#include "../model/problem_details.h"


// Read the profile of a given UE
//
pp_data_t*
ParameterProvisionDocumentAPI_getppData(apiClient_t *apiClient, char * ueId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


