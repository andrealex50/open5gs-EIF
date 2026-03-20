#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pcscf_restoration_request_data.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Indicates P-CSCF restoration and does not create an Individual Application Session Context
//
void
PCSCFRestorationIndicationAPI_pcscfRestoration(apiClient_t *apiClient, pcscf_restoration_request_data_t * pcscf_restoration_request_data );


