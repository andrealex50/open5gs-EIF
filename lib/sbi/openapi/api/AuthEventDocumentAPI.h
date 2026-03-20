#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/auth_event.h"


// To remove the Authentication Status of a UE
//
void
AuthEventDocumentAPI_deleteAuthenticationStatus(apiClient_t *apiClient, char * ueId );


// Retrieves the Authentication Status of a UE
//
auth_event_t*
AuthEventDocumentAPI_queryAuthenticationStatus(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features );


