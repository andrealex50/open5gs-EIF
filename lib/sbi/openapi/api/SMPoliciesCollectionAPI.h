#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sm_policy_context_data.h"
#include "../model/sm_policy_decision.h"


// Create a new Individual SM Policy
//
sm_policy_decision_t*
SMPoliciesCollectionAPI_createSMPolicy(apiClient_t *apiClient, sm_policy_context_data_t * sm_policy_context_data );


