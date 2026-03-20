#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/mbs_ext_problem_details.h"
#include "../model/mbs_session_id.h"
#include "../model/pcf_mbs_binding.h"
#include "../model/problem_details.h"


// Create a new Individual PCF for an MBS Session binding.
//
pcf_mbs_binding_t*
PCFForAnMBSSessionBindingsCollectionAPI_createPCFMbsBinding(apiClient_t *apiClient, pcf_mbs_binding_t * pcf_mbs_binding );


// Retrieve an existing PCF for an MBS Session binding.
//
list_t*
PCFForAnMBSSessionBindingsCollectionAPI_getPCFMbsBinding(apiClient_t *apiClient, mbs_session_id_t * mbs_session_id , char * supp_feat );


