#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/shared_data.h"


// retrieve individual shared data
//
shared_data_t*
RetrievalOfIndividualSharedDataAPI_getIndividualSharedData(apiClient_t *apiClient, char * sharedDataId , char * If_None_Match , char * If_Modified_Since );


