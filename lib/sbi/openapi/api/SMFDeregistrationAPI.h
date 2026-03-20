#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"


// delete an SMF registration
//
void
SMFDeregistrationAPI_smfDeregistration(apiClient_t *apiClient, char * ueId , int pduSessionId , char * smf_set_id , char * smf_instance_id );


