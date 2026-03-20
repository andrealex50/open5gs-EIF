#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authorization_data.h"
#include "../model/problem_details.h"
#include "../model/service_type.h"
#include "../model/snssai.h"


// Retrieve ServiceSpecific Authorization Data
//
authorization_data_t*
QueryServiceSpecificAuthorizationDataDocumentAPI_getSSAuData(apiClient_t *apiClient, char * ueId , service_type_t * serviceType , snssai_t * single_nssai , char * dnn , char * mtc_provider_information , char * af_id , char * If_None_Match , char * If_Modified_Since );


