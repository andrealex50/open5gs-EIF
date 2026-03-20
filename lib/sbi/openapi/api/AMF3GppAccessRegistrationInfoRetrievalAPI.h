#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf3_gpp_access_registration.h"
#include "../model/problem_details.h"


// retrieve the AMF registration for 3GPP access information
//
amf3_gpp_access_registration_t*
AMF3GppAccessRegistrationInfoRetrievalAPI_get3GppRegistration(apiClient_t *apiClient, char * ueId , char * supported_features );


