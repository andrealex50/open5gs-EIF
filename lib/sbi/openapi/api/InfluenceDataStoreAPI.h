#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/snssai.h"
#include "../model/traffic_influ_data.h"


// Retrieve Traffic Influence Data
//
list_t*
InfluenceDataStoreAPI_readInfluenceData(apiClient_t *apiClient, list_t * influence_Ids , list_t * dnns , list_t * snssais , list_t * internal_Group_Ids , list_t * supis , char * supp_feat );


