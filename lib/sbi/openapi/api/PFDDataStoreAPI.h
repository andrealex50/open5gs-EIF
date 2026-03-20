#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pfd_data_for_app_ext.h"
#include "../model/problem_details.h"


// Retrieve PFDs for application identifier(s)
//
list_t*
PFDDataStoreAPI_readPFDData(apiClient_t *apiClient, list_t * appId , char * supp_feat );


