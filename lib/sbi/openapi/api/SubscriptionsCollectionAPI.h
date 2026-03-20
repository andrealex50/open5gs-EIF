#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/subscription_data.h"


// Create a new subscription
//
subscription_data_t*
SubscriptionsCollectionAPI_createSubscription(apiClient_t *apiClient, subscription_data_t * subscription_data , char * Content_Encoding , char * Accept_Encoding );


