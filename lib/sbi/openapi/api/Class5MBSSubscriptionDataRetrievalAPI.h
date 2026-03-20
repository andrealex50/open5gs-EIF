#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/mbs_subscription_data.h"
#include "../model/problem_details.h"


// retrieve a UE's 5MBS Subscription Data
//
mbs_subscription_data_t*
Class5MBSSubscriptionDataRetrievalAPI_getMbsData(apiClient_t *apiClient, char * supi , char * supported_features , char * If_None_Match , char * If_Modified_Since );


