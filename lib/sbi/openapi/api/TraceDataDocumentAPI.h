#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/trace_data.h"


// Retrieves the trace configuration data of a UE
//
trace_data_t*
TraceDataDocumentAPI_queryTraceData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , char * If_None_Match , char * If_Modified_Since );


