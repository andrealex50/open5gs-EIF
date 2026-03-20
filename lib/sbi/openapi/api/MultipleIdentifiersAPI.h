#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/supi_info.h"


// Mapping of UE Identifiers
//
list_t*_t*
MultipleIdentifiersAPI_getMultipleIdentifiers(apiClient_t *apiClient, list_t * gpsi_list , char * supported_features );


