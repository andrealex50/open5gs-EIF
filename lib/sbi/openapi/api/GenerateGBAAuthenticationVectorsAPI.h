#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/gba_authentication_info_request.h"
#include "../model/gba_authentication_info_result.h"
#include "../model/problem_details.h"


// Generate authentication data for the UE in GBA domain
//
gba_authentication_info_result_t*
GenerateGBAAuthenticationVectorsAPI_generateGbaAv(apiClient_t *apiClient, char * supi , gba_authentication_info_request_t * gba_authentication_info_request );


