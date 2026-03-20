#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/nwdaf_registration.h"
#include "../model/problem_details.h"


// register as NWDAF
//
nwdaf_registration_t*
NWDAFRegistrationAPI_nwdafRegistration(apiClient_t *apiClient, char * ueId , char * nwdafRegistrationId , nwdaf_registration_t * nwdaf_registration );


