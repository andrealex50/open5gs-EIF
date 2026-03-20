#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/traffic_influ_sub.h"


// Delete an individual Influence Data Subscription resource
//
void
IndividualInfluenceDataSubscriptionDocumentAPI_deleteIndividualInfluenceDataSubscription(apiClient_t *apiClient, char * subscriptionId );


// Get an existing individual Influence Data Subscription resource
//
traffic_influ_sub_t*
IndividualInfluenceDataSubscriptionDocumentAPI_readIndividualInfluenceDataSubscription(apiClient_t *apiClient, char * subscriptionId );


// Modify an existing individual Influence Data Subscription resource
//
traffic_influ_sub_t*
IndividualInfluenceDataSubscriptionDocumentAPI_replaceIndividualInfluenceDataSubscription(apiClient_t *apiClient, char * subscriptionId , traffic_influ_sub_t * traffic_influ_sub );


