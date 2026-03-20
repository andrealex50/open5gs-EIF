#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/nwdaf_registration_modification.h"
#include "../model/problem_details.h"
#include "../model/update_nwdaf_registration_200_response.h"


// Update a parameter in the NWDAF registration
//
update_nwdaf_registration_200_response_t*
ParameterUpdateInTheNWDAFRegistrationAPI_updateNwdafRegistration(apiClient_t *apiClient, char * ueId , char * nwdafRegistrationId , nwdaf_registration_modification_t * nwdaf_registration_modification , char * supported_features );


