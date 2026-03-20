#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/subscription_data_subscriptions.h"


// Retrieves the list of subscriptions
//
list_t*
SubsToNotifyCollectionAPI_querySubsToNotify(apiClient_t *apiClient, char * ue_id , char * supported_features );


// Deletes subscriptions identified by a given ue-id parameter
//
void
SubsToNotifyCollectionAPI_removeMultipleSubscriptionDataSubscriptions(apiClient_t *apiClient, char * ue_id , char * nf_instance_id , int delete_all_nfs , int implicit_unsubscribe_indication );


// Subscription data subscriptions
//
subscription_data_subscriptions_t*
SubsToNotifyCollectionAPI_subscriptionDataSubscriptions(apiClient_t *apiClient, subscription_data_subscriptions_t * subscription_data_subscriptions );


