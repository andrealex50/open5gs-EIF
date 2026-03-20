#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bdt_policy_data.h"
#include "../model/bdt_policy_data_patch.h"
#include "../model/problem_details.h"


// Create an individual applied BDT Policy Data resource
//
bdt_policy_data_t*
IndividualAppliedBDTPolicyDataDocumentAPI_createIndividualAppliedBdtPolicyData(apiClient_t *apiClient, char * bdtPolicyId , bdt_policy_data_t * bdt_policy_data );


// Delete an individual Applied BDT Policy Data resource
//
void
IndividualAppliedBDTPolicyDataDocumentAPI_deleteIndividualAppliedBdtPolicyData(apiClient_t *apiClient, char * bdtPolicyId );


// Modify part of the properties of an individual Applied BDT Policy Data resource
//
bdt_policy_data_t*
IndividualAppliedBDTPolicyDataDocumentAPI_updateIndividualAppliedBdtPolicyData(apiClient_t *apiClient, char * bdtPolicyId , bdt_policy_data_patch_t * bdt_policy_data_patch );


