#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf3_gpp_access_registration.h"
#include "../model/problem_details.h"


// register as AMF for 3GPP access
//
amf3_gpp_access_registration_t*
AMFRegistrationFor3GPPAccessAPI_call3GppRegistration(apiClient_t *apiClient, char * ueId , amf3_gpp_access_registration_t * amf3_gpp_access_registration );


