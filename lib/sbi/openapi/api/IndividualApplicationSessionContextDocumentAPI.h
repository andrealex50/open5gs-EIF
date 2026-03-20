#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/any_ofintegerstring.h"
#include "../model/app_session_context.h"
#include "../model/app_session_context_update_data_patch.h"
#include "../model/events_subsc_req_data.h"
#include "../model/extended_problem_details.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Deletes an existing Individual Application Session Context
//
app_session_context_t*
IndividualApplicationSessionContextDocumentAPI_deleteAppSession(apiClient_t *apiClient, char * appSessionId , events_subsc_req_data_t * events_subsc_req_data );


// Reads an existing Individual Application Session Context
//
app_session_context_t*
IndividualApplicationSessionContextDocumentAPI_getAppSession(apiClient_t *apiClient, char * appSessionId );


// Modifies an existing Individual Application Session Context
//
app_session_context_t*
IndividualApplicationSessionContextDocumentAPI_modAppSession(apiClient_t *apiClient, char * appSessionId , app_session_context_update_data_patch_t * app_session_context_update_data_patch );


