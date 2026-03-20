#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/auth_event.h"
#include "../model/problem_details.h"


// Create a new confirmation event
//
auth_event_t*
ConfirmAuthAPI_confirmAuth(apiClient_t *apiClient, char * supi , auth_event_t * auth_event );


