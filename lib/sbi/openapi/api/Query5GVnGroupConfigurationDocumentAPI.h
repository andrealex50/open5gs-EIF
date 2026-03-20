#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/model_5_gvn_group_configuration.h"


// Retrieve a 5GVnGroup configuration
//
model_5_gvn_group_configuration_t*
Query5GVnGroupConfigurationDocumentAPI_get5GVnGroupConfiguration(apiClient_t *apiClient, char * externalGroupId );


