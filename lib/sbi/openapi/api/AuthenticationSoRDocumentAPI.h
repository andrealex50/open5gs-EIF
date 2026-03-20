#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"
#include "../model/sor_data.h"


// To store the SoR acknowledgement information of a UE and ME support of SOR CMCI
//
void
AuthenticationSoRDocumentAPI_createAuthenticationSoR(apiClient_t *apiClient, char * ueId , sor_data_t * sor_data , char * supported_features );


// Retrieves the SoR acknowledgement information of a UE and ME support of SOR CMCI
//
sor_data_t*
AuthenticationSoRDocumentAPI_queryAuthSoR(apiClient_t *apiClient, char * ueId , char * supported_features );


// Updates the ME support of SOR CMCI information of a UE
//
patch_result_t*
AuthenticationSoRDocumentAPI_updateAuthenticationSoR(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features );


