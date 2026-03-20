#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ext_problem_details.h"
#include "../model/pcf_binding.h"
#include "../model/problem_details.h"
#include "../model/snssai.h"


// Create a new Individual PCF for a PDU Session binding information
//
pcf_binding_t*
PCFBindingsCollectionAPI_createPCFBinding(apiClient_t *apiClient, pcf_binding_t * pcf_binding );


// Read PCF for a PDU Session Bindings information
//
pcf_binding_t*
PCFBindingsCollectionAPI_getPCFBindings(apiClient_t *apiClient, char * ipv4Addr , char * ipv6Prefix , char * macAddr48 , char * dnn , char * supi , char * gpsi , snssai_t * snssai , char * ipDomain , char * supp_feat );


