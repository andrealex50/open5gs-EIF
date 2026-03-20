#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/ue_context_in_smsf_data.h"


// retrieve a UE's UE Context In SMSF Data
//
ue_context_in_smsf_data_t*
UEContextInSMSFDataRetrievalAPI_getUeCtxInSmsfData(apiClient_t *apiClient, char * supi , char * supported_features );


