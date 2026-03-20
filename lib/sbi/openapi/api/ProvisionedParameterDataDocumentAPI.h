#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"


// modify the provisioned parameter data
//
patch_result_t*
ProvisionedParameterDataDocumentAPI_modifyPpData(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features );


