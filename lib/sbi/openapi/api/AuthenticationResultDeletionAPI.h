#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Deletes the authentication result in the UDM
//
void
AuthenticationResultDeletionAPI_delete5gAkaAuthenticationResult(apiClient_t *apiClient, char * authCtxId );


// Deletes the authentication result in the UDM
//
void
AuthenticationResultDeletionAPI_deleteEapAuthenticationResult(apiClient_t *apiClient, char * authCtxId );


// Deletes the authentication result in the UDM
//
void
AuthenticationResultDeletionAPI_deleteProSeAuthenticationResult(apiClient_t *apiClient, char * authCtxId );


