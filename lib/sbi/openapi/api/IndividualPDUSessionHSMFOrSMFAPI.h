#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ext_problem_details.h"
#include "../model/hsmf_update_data.h"
#include "../model/hsmf_update_error.h"
#include "../model/hsmf_updated_data.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/release_data.h"
#include "../model/release_pdu_session_200_response.h"
#include "../model/release_pdu_session_request.h"
#include "../model/released_data.h"
#include "../model/retrieve_data.h"
#include "../model/retrieved_data.h"
#include "../model/transfer_mo_data_req_data.h"
#include "../model/update_pdu_session_200_response.h"
#include "../model/update_pdu_session_400_response.h"
#include "../model/update_pdu_session_request.h"


// Release
//
released_data_t*
IndividualPDUSessionHSMFOrSMFAPI_releasePduSession(apiClient_t *apiClient, char * pduSessionRef , release_data_t * release_data );


// Retrieve
//
retrieved_data_t*
IndividualPDUSessionHSMFOrSMFAPI_retrievePduSession(apiClient_t *apiClient, char * pduSessionRef , retrieve_data_t * retrieve_data );


// Transfer MO Data
//
void
IndividualPDUSessionHSMFOrSMFAPI_transferMoData(apiClient_t *apiClient, char * pduSessionRef , transfer_mo_data_req_data_t * jsonData , binary_t* binaryMoData );


// Update (initiated by V-SMF or I-SMF)
//
hsmf_updated_data_t*
IndividualPDUSessionHSMFOrSMFAPI_updatePduSession(apiClient_t *apiClient, char * pduSessionRef , hsmf_update_data_t * hsmf_update_data );


