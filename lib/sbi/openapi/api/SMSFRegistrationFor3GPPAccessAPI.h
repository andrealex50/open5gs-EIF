#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/smsf_registration.h"


// register as SMSF for 3GPP access
//
smsf_registration_t*
SMSFRegistrationFor3GPPAccessAPI_call3GppSmsfRegistration(apiClient_t *apiClient, char * ueId , smsf_registration_t * smsf_registration );


