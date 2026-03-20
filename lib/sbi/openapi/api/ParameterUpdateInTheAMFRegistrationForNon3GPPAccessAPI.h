#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf_non3_gpp_access_registration_modification.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"


// update a parameter in the AMF registration for non-3GPP access
//
patch_result_t*
ParameterUpdateInTheAMFRegistrationForNon3GPPAccessAPI_updateNon3GppRegistration(apiClient_t *apiClient, char * ueId , amf_non3_gpp_access_registration_modification_t * amf_non3_gpp_access_registration_modification , char * supported_features );


