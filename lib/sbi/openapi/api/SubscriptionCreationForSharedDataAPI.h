#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sdm_subscription.h"


// subscribe to notifications for shared data
//
sdm_subscription_t*
SubscriptionCreationForSharedDataAPI_subscribeToSharedData(apiClient_t *apiClient, sdm_subscription_t * sdm_subscription );


