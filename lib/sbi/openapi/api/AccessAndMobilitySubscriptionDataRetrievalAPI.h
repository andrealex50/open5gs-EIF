#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/access_and_mobility_subscription_data.h"
#include "../model/plmn_id.h"
#include "../model/plmn_id_nid.h"
#include "../model/problem_details.h"


// retrieve a UE's Access and Mobility Subscription Data
//
access_and_mobility_subscription_data_t*
AccessAndMobilitySubscriptionDataRetrievalAPI_getAmData(apiClient_t *apiClient, char * supi , char * supported_features , plmn_id_nid_t * plmn_id , list_t * adjacent_plmns , int disaster_roaming_ind , char * If_None_Match , char * If_Modified_Since );


