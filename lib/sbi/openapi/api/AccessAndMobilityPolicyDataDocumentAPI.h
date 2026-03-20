#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/am_policy_data.h"
#include "../model/problem_details.h"


// Retrieves the access and mobility policy data for a subscriber
//
am_policy_data_t*
AccessAndMobilityPolicyDataDocumentAPI_readAccessAndMobilityPolicyData(apiClient_t *apiClient, char * ueId );


