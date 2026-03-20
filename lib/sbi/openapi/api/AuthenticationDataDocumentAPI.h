#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authentication_subscription.h"


// Retrieves the authentication subscription data of a UE
//
authentication_subscription_t*
AuthenticationDataDocumentAPI_queryAuthSubsData(apiClient_t *apiClient, char * ueId , char * supported_features );


