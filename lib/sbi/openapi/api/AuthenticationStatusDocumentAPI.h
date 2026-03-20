#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/auth_event.h"


// To store the Authentication Status data of a UE
//
void
AuthenticationStatusDocumentAPI_createAuthenticationStatus(apiClient_t *apiClient, char * ueId , auth_event_t * auth_event );


