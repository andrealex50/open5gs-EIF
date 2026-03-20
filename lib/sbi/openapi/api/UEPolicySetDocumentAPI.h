#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/ue_policy_set.h"
#include "../model/ue_policy_set_patch.h"


// Create or modify the UE policy set data for a subscriber
//
ue_policy_set_t*
UEPolicySetDocumentAPI_createOrReplaceUEPolicySet(apiClient_t *apiClient, char * ueId , ue_policy_set_t * ue_policy_set );


// Retrieves the UE policy set data for a subscriber
//
ue_policy_set_t*
UEPolicySetDocumentAPI_readUEPolicySet(apiClient_t *apiClient, char * ueId , char * supp_feat );


// Modify the UE policy set data for a subscriber
//
void
UEPolicySetDocumentAPI_updateUEPolicySet(apiClient_t *apiClient, char * ueId , ue_policy_set_patch_t * ue_policy_set_patch );


