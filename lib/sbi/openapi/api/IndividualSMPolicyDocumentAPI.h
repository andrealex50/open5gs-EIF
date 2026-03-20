#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/sm_policy_control.h"
#include "../model/sm_policy_decision.h"
#include "../model/sm_policy_delete_data.h"
#include "../model/sm_policy_update_context_data.h"


// Delete an existing Individual SM Policy
//
void
IndividualSMPolicyDocumentAPI_deleteSMPolicy(apiClient_t *apiClient, char * smPolicyId , sm_policy_delete_data_t * sm_policy_delete_data );


// Read an Individual SM Policy
//
sm_policy_control_t*
IndividualSMPolicyDocumentAPI_getSMPolicy(apiClient_t *apiClient, char * smPolicyId );


// Update an existing Individual SM Policy
//
sm_policy_decision_t*
IndividualSMPolicyDocumentAPI_updateSMPolicy(apiClient_t *apiClient, char * smPolicyId , sm_policy_update_context_data_t * sm_policy_update_context_data );


