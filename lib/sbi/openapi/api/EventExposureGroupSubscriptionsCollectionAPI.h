#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ee_subscription.h"


// Create individual EE subscription for a group of UEs or any UE
//
ee_subscription_t*
EventExposureGroupSubscriptionsCollectionAPI_createEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , ee_subscription_t * ee_subscription );


// Retrieves the ee subscriptions of a group of UEs or any UE
//
list_t*
EventExposureGroupSubscriptionsCollectionAPI_queryEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * supported_features );


