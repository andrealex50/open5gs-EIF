#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/lcs_mo_data.h"
#include "../model/problem_details.h"


// retrieve a UE's LCS Mobile Originated Subscription Data
//
lcs_mo_data_t*
LCSMobileOriginatedDataRetrievalAPI_getLcsMoData(apiClient_t *apiClient, char * supi , char * supported_features , char * If_None_Match , char * If_Modified_Since );


