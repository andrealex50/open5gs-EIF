#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf3_gpp_access_registration_modification.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"


// Update a parameter in the AMF registration for 3GPP access
//
patch_result_t*
ParameterUpdateInTheAMFRegistrationFor3GPPAccessAPI_update3GppRegistration(apiClient_t *apiClient, char * ueId , amf3_gpp_access_registration_modification_t * amf3_gpp_access_registration_modification , char * supported_features );


