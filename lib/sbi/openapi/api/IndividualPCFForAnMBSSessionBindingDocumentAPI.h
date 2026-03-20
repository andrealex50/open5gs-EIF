#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pcf_mbs_binding.h"
#include "../model/pcf_mbs_binding_patch.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Request the deletion of an existing Individual PCF for an MBS Session Binding.
//
void
IndividualPCFForAnMBSSessionBindingDocumentAPI_deleteIndPCFMbsBinding(apiClient_t *apiClient, char * bindingId );


// Request the modification of an existing Individual PCF for an MBS Session Binding resource.
//
pcf_mbs_binding_t*
IndividualPCFForAnMBSSessionBindingDocumentAPI_modifyIndPCFMbsBinding(apiClient_t *apiClient, char * bindingId , pcf_mbs_binding_patch_t * pcf_mbs_binding_patch );


