#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/v2x_subscription_data.h"


// Retrieves the subscribed V2X Data of a UE
//
v2x_subscription_data_t*
V2XSubscriptionDataAPI_queryV2xData(apiClient_t *apiClient, char * ueId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


