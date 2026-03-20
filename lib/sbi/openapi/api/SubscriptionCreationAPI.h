#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sdm_subscription.h"


// subscribe to notifications
//
sdm_subscription_t*
SubscriptionCreationAPI_subscribe(apiClient_t *apiClient, char * ueId , sdm_subscription_t * sdm_subscription );


