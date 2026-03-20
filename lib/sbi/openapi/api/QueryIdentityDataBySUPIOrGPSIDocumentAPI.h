#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/app_port_id.h"
#include "../model/identity_data.h"
#include "../model/problem_details.h"


// Retrieve identity data by SUPI or GPSI
//
identity_data_t*
QueryIdentityDataBySUPIOrGPSIDocumentAPI_getIdentityData(apiClient_t *apiClient, char * ueId , app_port_id_t * app_port_id , char * If_None_Match , char * If_Modified_Since );


