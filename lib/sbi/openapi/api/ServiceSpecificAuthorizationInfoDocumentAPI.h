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
#include "../model/service_specific_authorization_info.h"
#include "../model/service_type.h"


// Create Service Specific Authorization Info
//
service_specific_authorization_info_t*
ServiceSpecificAuthorizationInfoDocumentAPI_createServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId , service_type_t * serviceType , service_specific_authorization_info_t * service_specific_authorization_info );


// Retrieve Service Specific Authorization Info
//
service_specific_authorization_info_t*
ServiceSpecificAuthorizationInfoDocumentAPI_getServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId , service_type_t * serviceType );


// Modify Service Specific Authorization Info
//
patch_result_t*
ServiceSpecificAuthorizationInfoDocumentAPI_modifyServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId , service_type_t * serviceType , list_t * patch_item , char * supported_features );


// Delete Service Specific Authorization Info
//
void
ServiceSpecificAuthorizationInfoDocumentAPI_removeServiceSpecificAuthorizationInfo(apiClient_t *apiClient, char * ueId , service_type_t * serviceType );


