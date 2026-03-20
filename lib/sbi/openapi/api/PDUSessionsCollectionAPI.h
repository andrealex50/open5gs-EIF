#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ext_problem_details.h"
#include "../model/pdu_session_create_data.h"
#include "../model/pdu_session_create_error.h"
#include "../model/pdu_session_created_data.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Create
//
pdu_session_created_data_t*
PDUSessionsCollectionAPI_postPduSessions(apiClient_t *apiClient, pdu_session_create_data_t * pdu_session_create_data );


