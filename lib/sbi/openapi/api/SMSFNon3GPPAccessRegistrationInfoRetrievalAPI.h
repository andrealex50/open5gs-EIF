#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/smsf_registration.h"


// retrieve the SMSF registration for non-3GPP access information
//
smsf_registration_t*
SMSFNon3GPPAccessRegistrationInfoRetrievalAPI_getNon3GppSmsfRegistration(apiClient_t *apiClient, char * ueId , char * supported_features );


