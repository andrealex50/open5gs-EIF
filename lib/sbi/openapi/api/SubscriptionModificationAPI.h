#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/modify_200_response.h"
#include "../model/problem_details.h"
#include "../model/sdm_subs_modification.h"


// modify the subscription
//
modify_200_response_t*
SubscriptionModificationAPI_modify(apiClient_t *apiClient, char * ueId , char * subscriptionId , sdm_subs_modification_t * sdm_subs_modification , char * supported_features );


// modify the subscription
//
modify_200_response_t*
SubscriptionModificationAPI_modifySharedDataSubs(apiClient_t *apiClient, char * subscriptionId , sdm_subs_modification_t * sdm_subs_modification , char * supported_features );


