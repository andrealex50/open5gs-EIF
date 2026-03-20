#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/any_ofintegerstring.h"
#include "../model/app_session_context.h"
#include "../model/extended_problem_details.h"
#include "../model/problem_details.h"


// Creates a new Individual Application Session Context resource
//
app_session_context_t*
ApplicationSessionsCollectionAPI_postAppSessions(apiClient_t *apiClient, app_session_context_t * app_session_context );


