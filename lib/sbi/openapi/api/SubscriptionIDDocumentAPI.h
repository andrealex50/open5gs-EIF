#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/patch_item.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/subscription_data.h"


// Deletes a subscription
//
void
SubscriptionIDDocumentAPI_removeSubscription(apiClient_t *apiClient, char * subscriptionID );


// Updates a subscription
//
subscription_data_t*
SubscriptionIDDocumentAPI_updateSubscription(apiClient_t *apiClient, char * subscriptionID , list_t * patch_item , char * Content_Encoding , char * Accept_Encoding );


