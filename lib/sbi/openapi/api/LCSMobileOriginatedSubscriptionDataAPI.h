#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/lcs_mo_data.h"


// Retrieves the LCS Mobile Originated subscription data of a UE
//
lcs_mo_data_t*
LCSMobileOriginatedSubscriptionDataAPI_queryLcsMoData(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features , char * If_None_Match , char * If_Modified_Since );


