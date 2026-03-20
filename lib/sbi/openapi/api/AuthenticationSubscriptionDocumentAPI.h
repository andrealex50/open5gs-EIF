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


// modify the authentication subscription data of a UE
//
patch_result_t*
AuthenticationSubscriptionDocumentAPI_modifyAuthenticationSubscription(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features );


