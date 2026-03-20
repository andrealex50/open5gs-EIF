#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/policy_data_for_individual_ue.h"
#include "../model/policy_data_subset.h"
#include "../model/problem_details.h"


// Retrieve the policy data for a subscriber
//
policy_data_for_individual_ue_t*
PolicyDataForIndividualUeDocumentAPI_readPolicyData(apiClient_t *apiClient, char * ueId , char * supp_feat , list_t * data_subset_names );


