#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bdt_policy_data.h"
#include "../model/problem_details.h"


// Retrieve applied BDT Policy Data
//
list_t*
BdtPolicyDataStoreAPI_readBdtPolicyData(apiClient_t *apiClient, list_t * bdt_policy_ids , list_t * internal_group_ids , list_t * supis );


