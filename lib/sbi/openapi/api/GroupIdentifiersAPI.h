#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/group_identifiers.h"
#include "../model/problem_details.h"


// Mapping of Group Identifiers
//
group_identifiers_t*
GroupIdentifiersAPI_getGroupIdentifiers(apiClient_t *apiClient, char * ext_group_id , char * int_group_id , int ue_id_ind , char * supported_features , char * af_id , char * If_None_Match , char * If_Modified_Since );


