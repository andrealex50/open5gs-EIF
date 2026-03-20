#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ext_problem_details.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/release_sm_context_request.h"
#include "../model/send_mo_data_req_data.h"
#include "../model/sm_context_release_data.h"
#include "../model/sm_context_released_data.h"
#include "../model/sm_context_retrieve_data.h"
#include "../model/sm_context_retrieved_data.h"
#include "../model/sm_context_update_data.h"
#include "../model/sm_context_update_error.h"
#include "../model/sm_context_updated_data.h"
#include "../model/update_sm_context_200_response.h"
#include "../model/update_sm_context_400_response.h"
#include "../model/update_sm_context_request.h"


// Release SM Context
//
sm_context_released_data_t*
IndividualSMContextAPI_releaseSmContext(apiClient_t *apiClient, char * smContextRef , sm_context_release_data_t * sm_context_release_data );


// Retrieve SM Context
//
sm_context_retrieved_data_t*
IndividualSMContextAPI_retrieveSmContext(apiClient_t *apiClient, char * smContextRef , sm_context_retrieve_data_t * sm_context_retrieve_data );


// Send MO Data
//
void
IndividualSMContextAPI_sendMoData(apiClient_t *apiClient, char * smContextRef , send_mo_data_req_data_t * jsonData , binary_t* binaryMoData );


// Update SM Context
//
sm_context_updated_data_t*
IndividualSMContextAPI_updateSmContext(apiClient_t *apiClient, char * smContextRef , sm_context_update_data_t * sm_context_update_data );


