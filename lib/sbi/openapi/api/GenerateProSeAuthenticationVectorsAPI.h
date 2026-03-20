#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pro_se_authentication_info_request.h"
#include "../model/pro_se_authentication_info_result.h"
#include "../model/problem_details.h"


// Generate authentication data for ProSe
//
pro_se_authentication_info_result_t*
GenerateProSeAuthenticationVectorsAPI_generateProseAV(apiClient_t *apiClient, char * supiOrSuci , pro_se_authentication_info_request_t * pro_se_authentication_info_request );


