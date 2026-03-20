#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/ue_policy_set.h"


// Retrieve the UE policy set data for an H-PLMN
//
ue_policy_set_t*
PlmnUePolicySetDocumentAPI_readPlmnUePolicySet(apiClient_t *apiClient, char * plmnId );


