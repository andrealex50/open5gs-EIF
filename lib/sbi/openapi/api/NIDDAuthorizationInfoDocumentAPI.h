#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/nidd_authorization_info.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"


// Create NIDD Authorization Info
//
nidd_authorization_info_t*
NIDDAuthorizationInfoDocumentAPI_createNIDDAuthorizationInfo(apiClient_t *apiClient, char * ueId , nidd_authorization_info_t * nidd_authorization_info );


// Retrieve NIDD Authorization Info
//
nidd_authorization_info_t*
NIDDAuthorizationInfoDocumentAPI_getNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId );


// Modify NIDD Authorization Info
//
patch_result_t*
NIDDAuthorizationInfoDocumentAPI_modifyNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features );


// Delete NIDD Authorization Info
//
void
NIDDAuthorizationInfoDocumentAPI_removeNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId );


