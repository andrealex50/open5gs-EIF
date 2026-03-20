#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/smf_registration.h"
#include "../model/smf_registration_info.h"
#include "../model/snssai.h"


// retrieve the SMF registration information
//
smf_registration_info_t*
SMFSmfRegistrationAPI_getSmfRegistration(apiClient_t *apiClient, char * ueId , snssai_t * single_nssai , char * dnn , char * supported_features );


// register as SMF
//
smf_registration_t*
SMFSmfRegistrationAPI_registration(apiClient_t *apiClient, char * ueId , int pduSessionId , smf_registration_t * smf_registration );


