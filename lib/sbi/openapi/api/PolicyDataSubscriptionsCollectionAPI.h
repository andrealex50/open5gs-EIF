#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/policy_data_subscription.h"
#include "../model/problem_details.h"


// Create a subscription to receive notification of policy data changes
//
policy_data_subscription_t*
PolicyDataSubscriptionsCollectionAPI_createIndividualPolicyDataSubscription(apiClient_t *apiClient, policy_data_subscription_t * policy_data_subscription );


