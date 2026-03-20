#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/prose_subscription_data.h"


// Retrieves the subscribed ProSe service Data of a UE
//
prose_subscription_data_t*
ProSeServiceSubscriptionDataAPI_queryPorseData(apiClient_t *apiClient, char * ueId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


