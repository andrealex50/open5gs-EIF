#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/policy_association.h"
#include "../model/policy_association_update_request.h"
#include "../model/policy_update.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Delete individual AM policy association.
//
void
IndividualAMPolicyAssociationDocumentAPI_deleteIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId );


// Read individual AM policy association.
//
policy_association_t*
IndividualAMPolicyAssociationDocumentAPI_readIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId );


// Report observed event triggers and obtain updated policies for an individual AM policy association. 
//
policy_update_t*
IndividualAMPolicyAssociationDocumentAPI_reportObservedEventTriggersForIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId , policy_association_update_request_t * policy_association_update_request );


