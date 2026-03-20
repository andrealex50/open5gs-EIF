#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/auth_event.h"
#include "../model/problem_details.h"


// Deletes the authentication result in the UDM
//
void
DeleteAuthAPI_deleteAuth(apiClient_t *apiClient, char * supi , char * authEventId , auth_event_t * auth_event );


