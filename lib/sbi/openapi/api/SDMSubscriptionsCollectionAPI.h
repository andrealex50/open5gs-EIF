#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/sdm_subscription.h"


// Create individual sdm subscription
//
sdm_subscription_t*
SDMSubscriptionsCollectionAPI_createSdmSubscriptions(apiClient_t *apiClient, char * ueId , sdm_subscription_t * sdm_subscription );


// Retrieves the sdm subscriptions of a UE
//
list_t*
SDMSubscriptionsCollectionAPI_querysdmsubscriptions(apiClient_t *apiClient, char * ueId , char * supported_features );


