#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/smsf_registration.h"


// Create the SMSF context data of a UE via non-3GPP access
//
smsf_registration_t*
SMSFNon3GPPRegistrationDocumentAPI_createSmsfContextNon3gpp(apiClient_t *apiClient, char * ueId , smsf_registration_t * smsf_registration );


// To remove the SMSF context data of a UE via non-3GPP access
//
void
SMSFNon3GPPRegistrationDocumentAPI_deleteSmsfContextNon3gpp(apiClient_t *apiClient, char * ueId );


// Retrieves the SMSF context data of a UE using non-3gpp access
//
smsf_registration_t*
SMSFNon3GPPRegistrationDocumentAPI_querySmsfContextNon3gpp(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features );


