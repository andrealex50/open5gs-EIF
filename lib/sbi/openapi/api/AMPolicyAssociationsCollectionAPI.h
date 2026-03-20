#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/policy_association.h"
#include "../model/policy_association_request.h"
#include "../model/problem_details.h"


// Create individual AM policy association.
//
policy_association_t*
AMPolicyAssociationsCollectionAPI_createIndividualAMPolicyAssociation(apiClient_t *apiClient, policy_association_request_t * policy_association_request );


