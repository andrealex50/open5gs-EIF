#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bdt_data.h"
#include "../model/problem_details.h"


// Retrieves the BDT data collection
//
list_t*
BdtDataStoreAPI_readBdtData(apiClient_t *apiClient, list_t * bdt_ref_ids , char * supp_feat );


