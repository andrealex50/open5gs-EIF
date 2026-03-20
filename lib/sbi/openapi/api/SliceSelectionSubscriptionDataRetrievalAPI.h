#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/nssai.h"
#include "../model/plmn_id.h"
#include "../model/problem_details.h"


// retrieve a UE's subscribed NSSAI
//
nssai_t*
SliceSelectionSubscriptionDataRetrievalAPI_getNSSAI(apiClient_t *apiClient, char * supi , char * supported_features , plmn_id_t * plmn_id , int disaster_roaming_ind , char * If_None_Match , char * If_Modified_Since );


