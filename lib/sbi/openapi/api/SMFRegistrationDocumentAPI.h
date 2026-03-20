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
#include "../model/smf_registration.h"


// To create an individual SMF context data of a UE in the UDR
//
smf_registration_t*
SMFRegistrationDocumentAPI_createOrUpdateSmfRegistration(apiClient_t *apiClient, char * ueId , int pduSessionId , smf_registration_t * smf_registration );


// To remove an individual SMF context data of a UE the UDR
//
void
SMFRegistrationDocumentAPI_deleteSmfRegistration(apiClient_t *apiClient, char * ueId , int pduSessionId );


// Retrieves the individual SMF registration of a UE
//
smf_registration_t*
SMFRegistrationDocumentAPI_querySmfRegistration(apiClient_t *apiClient, char * ueId , int pduSessionId , list_t * fields , char * supported_features );


// To modify the SMF context data of a UE in the UDR
//
patch_result_t*
SMFRegistrationDocumentAPI_updateSmfContext(apiClient_t *apiClient, char * ueId , int pduSessionId , list_t * patch_item , char * supported_features );


