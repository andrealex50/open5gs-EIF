#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ip_sm_gw_registration.h"
#include "../model/problem_details.h"


// Register an IP-SM-GW
//
ip_sm_gw_registration_t*
IPSMGWRegistrationAPI_ipSmGwRegistration(apiClient_t *apiClient, char * ueId , ip_sm_gw_registration_t * ip_sm_gw_registration );


