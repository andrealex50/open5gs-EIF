#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/mbs_subscription_data_1.h"


// Retrieves the 5mbs subscription data of a UE
//
mbs_subscription_data_1_t*
Class5MBSSubscriptionDataDocumentAPI_query5mbsData(apiClient_t *apiClient, char * ueId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


