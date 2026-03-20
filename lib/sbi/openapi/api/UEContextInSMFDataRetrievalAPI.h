#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/ue_context_in_smf_data.h"


// retrieve a UE's UE Context In SMF Data
//
ue_context_in_smf_data_t*
UEContextInSMFDataRetrievalAPI_getUeCtxInSmfData(apiClient_t *apiClient, char * supi , char * supported_features );


