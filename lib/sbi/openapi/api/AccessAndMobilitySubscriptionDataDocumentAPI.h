#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/access_and_mobility_subscription_data.h"


// Retrieves the access and mobility subscription data of a UE
//
access_and_mobility_subscription_data_t*
AccessAndMobilitySubscriptionDataDocumentAPI_queryAmData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , list_t * fields , char * supported_features , char * If_None_Match , char * If_Modified_Since );


