#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pcf_for_ue_binding.h"
#include "../model/pcf_for_ue_binding_patch.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Delete an existing Individual PCF for a UE Binding information
//
void
IndividualPCFForAUEBindingDocumentAPI_deleteIndPCFforUEBinding(apiClient_t *apiClient, char * bindingId );


// Update an existing Individual PCF for a UE Binding information
//
pcf_for_ue_binding_t*
IndividualPCFForAUEBindingDocumentAPI_updateIndPCFforUEBinding(apiClient_t *apiClient, char * bindingId , pcf_for_ue_binding_patch_t * pcf_for_ue_binding_patch );


