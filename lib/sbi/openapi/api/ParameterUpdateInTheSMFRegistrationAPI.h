#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"
#include "../model/smf_registration_modification.h"


// update a parameter in the SMF registration
//
patch_result_t*
ParameterUpdateInTheSMFRegistrationAPI_updateSmfRegistration(apiClient_t *apiClient, char * ueId , int pduSessionId , smf_registration_modification_t * smf_registration_modification , char * supported_features );


