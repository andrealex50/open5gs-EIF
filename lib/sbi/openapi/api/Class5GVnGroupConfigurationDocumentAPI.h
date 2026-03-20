#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/model_5_gvn_group_configuration.h"
#include "../model/problem_details.h"


// Create an individual 5G VN Grouop
//
model_5_gvn_group_configuration_t*
Class5GVnGroupConfigurationDocumentAPI_create5GVnGroup(apiClient_t *apiClient, char * externalGroupId , model_5_gvn_group_configuration_t * model_5_gvn_group_configuration );


