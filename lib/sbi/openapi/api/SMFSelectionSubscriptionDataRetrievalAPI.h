#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/plmn_id.h"
#include "../model/problem_details.h"
#include "../model/smf_selection_subscription_data.h"


// retrieve a UE's SMF Selection Subscription Data
//
smf_selection_subscription_data_t*
SMFSelectionSubscriptionDataRetrievalAPI_getSmfSelData(apiClient_t *apiClient, char * supi , char * supported_features , plmn_id_t * plmn_id , int disaster_roaming_ind , char * If_None_Match , char * If_Modified_Since );


