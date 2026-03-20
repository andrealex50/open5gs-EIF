#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/policy_data_subscription.h"
#include "../model/problem_details.h"


// Delete the individual Policy Data subscription
//
void
IndividualPolicyDataSubscriptionDocumentAPI_deleteIndividualPolicyDataSubscription(apiClient_t *apiClient, char * subsId );


// Modify a subscription to receive notification of policy data changes
//
policy_data_subscription_t*
IndividualPolicyDataSubscriptionDocumentAPI_replaceIndividualPolicyDataSubscription(apiClient_t *apiClient, char * subsId , policy_data_subscription_t * policy_data_subscription );


