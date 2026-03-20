#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/prose_subscription_data.h"


// retrieve a UE's ProSe Subscription Data
//
prose_subscription_data_t*
ProseSubscriptionDataRetrievalAPI_getProseData(apiClient_t *apiClient, char * supi , char * supported_features , char * If_None_Match , char * If_Modified_Since );


