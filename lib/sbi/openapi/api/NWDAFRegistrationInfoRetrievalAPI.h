#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/event_id.h"
#include "../model/nwdaf_registration.h"
#include "../model/problem_details.h"


// retrieve the NWDAF registration
//
list_t*
NWDAFRegistrationInfoRetrievalAPI_getNwdafRegistration(apiClient_t *apiClient, char * ueId , list_t * analytics_ids , char * supported_features );


