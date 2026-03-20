#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/auth_event.h"


// To remove the Individual Authentication Status of a UE
//
void
IndividualAuthEventDocumentAPI_deleteIndividualAuthenticationStatus(apiClient_t *apiClient, char * ueId , char * servingNetworkName );


// Retrieves the Individual Authentication Status of a UE
//
auth_event_t*
IndividualAuthEventDocumentAPI_queryIndividualAuthenticationStatus(apiClient_t *apiClient, char * ueId , char * servingNetworkName , list_t * fields , char * supported_features );


