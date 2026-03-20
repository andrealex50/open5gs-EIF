#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/lcs_broadcast_assistance_types_data.h"
#include "../model/problem_details.h"


// Retrieves the LCS Broadcast Assistance subscription data of a UE
//
lcs_broadcast_assistance_types_data_t*
LCSBroadcastAssistanceSubscriptionDataAPI_queryLcsBcaData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


