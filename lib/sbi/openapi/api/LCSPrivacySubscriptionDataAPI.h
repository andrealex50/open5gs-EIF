#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/lcs_privacy_data.h"


// Retrieves the LCS Privacy subscription data of a UE
//
lcs_privacy_data_t*
LCSPrivacySubscriptionDataAPI_queryLcsPrivacyData(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features , char * If_None_Match , char * If_Modified_Since );


