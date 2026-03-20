#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ip_sm_gw_registration.h"
#include "../model/problem_details.h"


// Retrieve the IP-SM-GW registration information
//
ip_sm_gw_registration_t*
IPSMGWRegistrationInfoRetrievalAPI_getIpSmGwRegistration(apiClient_t *apiClient, char * ueId );


