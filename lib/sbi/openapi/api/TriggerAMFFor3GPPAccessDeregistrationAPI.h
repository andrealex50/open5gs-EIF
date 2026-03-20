#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf_dereg_info.h"
#include "../model/problem_details.h"


// trigger AMF for 3GPP access deregistration
//
void
TriggerAMFFor3GPPAccessDeregistrationAPI_deregAMF(apiClient_t *apiClient, char * ueId , amf_dereg_info_t * amf_dereg_info );


