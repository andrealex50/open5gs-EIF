#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pcf_for_ue_binding.h"
#include "../model/problem_details.h"


// Create a new Individual PCF for a UE binding information
//
pcf_for_ue_binding_t*
PCFForAUEBindingsCollectionAPI_createPCFforUEBinding(apiClient_t *apiClient, pcf_for_ue_binding_t * pcf_for_ue_binding );


// Read PCF for a UE Bindings information
//
list_t*
PCFForAUEBindingsCollectionAPI_getPCFForUeBindings(apiClient_t *apiClient, char * supi , char * gpsi , char * supp_feat );


