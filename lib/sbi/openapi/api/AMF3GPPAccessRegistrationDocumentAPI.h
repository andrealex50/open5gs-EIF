#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf3_gpp_access_registration.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"


// To modify the AMF context data of a UE using 3gpp access in the UDR
//
patch_result_t*
AMF3GPPAccessRegistrationDocumentAPI_amfContext3gpp(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features );


// To store the AMF context data of a UE using 3gpp access in the UDR
//
amf3_gpp_access_registration_t*
AMF3GPPAccessRegistrationDocumentAPI_createAmfContext3gpp(apiClient_t *apiClient, char * ueId , amf3_gpp_access_registration_t * amf3_gpp_access_registration );


// Retrieves the AMF context data of a UE using 3gpp access
//
amf3_gpp_access_registration_t*
AMF3GPPAccessRegistrationDocumentAPI_queryAmfContext3gpp(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features );


