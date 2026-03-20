#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf_non3_gpp_access_registration.h"
#include "../model/problem_details.h"


// register as AMF for non-3GPP access
//
amf_non3_gpp_access_registration_t*
AMFRegistrationForNon3GPPAccessAPI_non3GppRegistration(apiClient_t *apiClient, char * ueId , amf_non3_gpp_access_registration_t * amf_non3_gpp_access_registration );


