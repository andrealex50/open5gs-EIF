#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/lcs_broadcast_assistance_types_data.h"
#include "../model/plmn_id.h"
#include "../model/problem_details.h"


// retrieve a UE's LCS Broadcast Assistance Data Types Subscription Data
//
lcs_broadcast_assistance_types_data_t*
LCSBroadcastAssistanceDataTypesRetrievalAPI_getLcsBcaData(apiClient_t *apiClient, char * supi , char * supported_features , plmn_id_t * plmn_id , char * If_None_Match , char * If_Modified_Since );


