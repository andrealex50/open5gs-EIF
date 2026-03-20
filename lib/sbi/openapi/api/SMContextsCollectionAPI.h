#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ext_problem_details.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"
#include "../model/sm_context_create_data.h"
#include "../model/sm_context_create_error.h"
#include "../model/sm_context_created_data.h"


// Create SM Context
//
sm_context_created_data_t*
SMContextsCollectionAPI_postSmContexts(apiClient_t *apiClient, sm_context_create_data_t * jsonData , binary_t* binaryDataN1SmMessage , binary_t* binaryDataN2SmInformation , binary_t* binaryDataN2SmInformationExt1 );


