#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/set.h"
#include "../model/shared_data.h"


// retrieve the individual shared data
//
shared_data_t*
RetrievalOfTheIndividualSharedDataAPI_getIndividualSharedData(apiClient_t *apiClient, set_t * sharedDataId , char * supported_features , char * If_None_Match , char * If_Modified_Since );


