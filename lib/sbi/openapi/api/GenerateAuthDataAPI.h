#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authentication_info_request.h"
#include "../model/authentication_info_result.h"
#include "../model/problem_details.h"


// Generate authentication data for the UE
//
authentication_info_result_t*
GenerateAuthDataAPI_generateAuthData(apiClient_t *apiClient, char * supiOrSuci , authentication_info_request_t * authentication_info_request );


