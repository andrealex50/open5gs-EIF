#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf_non3_gpp_access_registration.h"
#include "../model/problem_details.h"


// retrieve the AMF registration for non-3GPP access information
//
amf_non3_gpp_access_registration_t*
AMFNon3GPPAccessRegistrationInfoRetrievalAPI_getNon3GppRegistration(apiClient_t *apiClient, char * ueId , char * supported_features );


