#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/exposure_data_subscription.h"
#include "../model/problem_details.h"


// Create a subscription to receive notification of exposure data changes
//
exposure_data_subscription_t*
ExposureDataSubscriptionsCollectionAPI_createIndividualExposureDataSubscription(apiClient_t *apiClient, exposure_data_subscription_t * exposure_data_subscription );


