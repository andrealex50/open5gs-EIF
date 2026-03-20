#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/exposure_data_subscription.h"
#include "../model/problem_details.h"


// Deletes the individual Exposure Data subscription
//
void
IndividualExposureDataSubscriptionDocumentAPI_deleteIndividualExposureDataSubscription(apiClient_t *apiClient, char * subId );


// updates a subscription to receive notifications of exposure data changes
//
exposure_data_subscription_t*
IndividualExposureDataSubscriptionDocumentAPI_replaceIndividualExposureDataSubscription(apiClient_t *apiClient, char * subId , exposure_data_subscription_t * exposure_data_subscription );


