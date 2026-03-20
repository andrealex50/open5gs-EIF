#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"


// delete the SMSF registration for 3GPP access
//
void
SMSFDeregistrationFor3GPPAccessAPI_call3GppSmsfDeregistration(apiClient_t *apiClient, char * ueId , char * smsf_set_id , char * If_Match );


