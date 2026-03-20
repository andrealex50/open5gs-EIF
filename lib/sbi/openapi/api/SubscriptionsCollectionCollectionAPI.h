#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/namf_subscription_data.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Namf_Communication AMF Status Change Subscribe service Operation
//
namf_subscription_data_t*
SubscriptionsCollectionCollectionAPI_aMFStatusChangeSubscribe(apiClient_t *apiClient, namf_subscription_data_t * namf_subscription_data );


