#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/plmn_id.h"
#include "../model/problem_details.h"
#include "../model/trace_data_response.h"


// retrieve a UE's Trace Configuration Data
//
trace_data_response_t*
TraceConfigurationDataRetrievalAPI_getTraceConfigData(apiClient_t *apiClient, char * supi , char * supported_features , plmn_id_t * plmn_id , char * If_None_Match , char * If_Modified_Since );


