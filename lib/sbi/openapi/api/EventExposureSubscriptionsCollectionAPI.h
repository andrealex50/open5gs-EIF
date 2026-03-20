#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ee_subscription.h"
#include "../model/ee_subscription_ext.h"
#include "../model/event_type.h"
#include "../model/nf_identifier.h"


// Create individual EE subscription
//
ee_subscription_t*
EventExposureSubscriptionsCollectionAPI_createEeSubscriptions(apiClient_t *apiClient, char * ueId , ee_subscription_t * ee_subscription );


// Retrieves the ee subscriptions of a UE
//
list_t*
EventExposureSubscriptionsCollectionAPI_queryeesubscriptions(apiClient_t *apiClient, char * ueId , char * supported_features , list_t * event_types , list_t * nf_identifiers );


