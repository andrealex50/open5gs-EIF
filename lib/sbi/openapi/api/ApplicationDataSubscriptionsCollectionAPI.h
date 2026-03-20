#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/application_data_subs.h"
#include "../model/data_filter.h"
#include "../model/problem_details.h"


// Create a subscription to receive notification of application data changes
//
application_data_subs_t*
ApplicationDataSubscriptionsCollectionAPI_createIndividualApplicationDataSubscription(apiClient_t *apiClient, application_data_subs_t * application_data_subs );


// Read Application Data change Subscriptions
//
list_t*
ApplicationDataSubscriptionsCollectionAPI_readApplicationDataChangeSubscriptions(apiClient_t *apiClient, data_filter_t * data_filter );


