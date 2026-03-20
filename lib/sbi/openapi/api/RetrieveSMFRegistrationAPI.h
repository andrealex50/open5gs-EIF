#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/smf_registration.h"


// get an SMF registration
//
smf_registration_t*
RetrieveSMFRegistrationAPI_retrieveSmfRegistration(apiClient_t *apiClient, char * ueId , int pduSessionId );


