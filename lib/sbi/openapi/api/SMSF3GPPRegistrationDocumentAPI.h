#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/smsf_registration.h"


// Create the SMSF context data of a UE via 3GPP access
//
smsf_registration_t*
SMSF3GPPRegistrationDocumentAPI_createSmsfContext3gpp(apiClient_t *apiClient, char * ueId , smsf_registration_t * smsf_registration );


// To remove the SMSF context data of a UE via 3GPP access
//
void
SMSF3GPPRegistrationDocumentAPI_deleteSmsfContext3gpp(apiClient_t *apiClient, char * ueId );


// Retrieves the SMSF context data of a UE using 3gpp access
//
smsf_registration_t*
SMSF3GPPRegistrationDocumentAPI_querySmsfContext3gpp(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features );


