#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authorization_data.h"
#include "../model/problem_details.h"
#include "../model/snssai.h"


// Retrieve NIDD Authorization Data GPSI or External Group identifier
//
authorization_data_t*
QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentAPI_getNiddAuData(apiClient_t *apiClient, char * ueId , snssai_t * single_nssai , char * dnn , char * mtc_provider_information , char * af_id , char * If_None_Match , char * If_Modified_Since );


