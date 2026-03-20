#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/snssai.h"
#include "../model/traffic_influ_sub.h"


// Create a new Individual Influence Data Subscription resource
//
traffic_influ_sub_t*
InfluenceDataSubscriptionsCollectionAPI_createIndividualInfluenceDataSubscription(apiClient_t *apiClient, traffic_influ_sub_t * traffic_influ_sub );


// Read Influence Data Subscriptions
//
list_t*
InfluenceDataSubscriptionsCollectionAPI_readInfluenceDataSubscriptions(apiClient_t *apiClient, char * dnn , snssai_t * snssai , char * internal_Group_Id , char * supi );


