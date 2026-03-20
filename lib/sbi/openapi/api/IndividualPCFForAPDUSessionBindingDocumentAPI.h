#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pcf_binding.h"
#include "../model/pcf_binding_patch.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Update an existing Individual PCF for a PDU Session Binding information
//
pcf_binding_t*
IndividualPCFForAPDUSessionBindingDocumentAPI_updateIndPCFBinding(apiClient_t *apiClient, char * bindingId , pcf_binding_patch_t * pcf_binding_patch );


