#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"


// delete SMSF registration for non 3GPP access
//
void
SMSFDeregistrationForNon3GPPAccessAPI_non3GppSmsfDeregistration(apiClient_t *apiClient, char * ueId , char * smsf_set_id , char * If_Match );


