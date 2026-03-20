#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sm_policy_data.h"
#include "../model/sm_policy_data_patch.h"
#include "../model/snssai.h"


// Retrieves the session management policy data for a subscriber
//
sm_policy_data_t*
SessionManagementPolicyDataDocumentAPI_readSessionManagementPolicyData(apiClient_t *apiClient, char * ueId , snssai_t * snssai , char * dnn , list_t * fields , char * supp_feat );


// Modify the session management policy data for a subscriber
//
sm_policy_data_t*
SessionManagementPolicyDataDocumentAPI_updateSessionManagementPolicyData(apiClient_t *apiClient, char * ueId , sm_policy_data_patch_t * sm_policy_data_patch );


