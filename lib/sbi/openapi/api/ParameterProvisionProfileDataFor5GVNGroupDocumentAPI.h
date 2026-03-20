#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pp5g_vn_group_profile_data.h"


// Retrieves the parameter provision profile data for 5G VN Group
//
pp5g_vn_group_profile_data_t*
ParameterProvisionProfileDataFor5GVNGroupDocumentAPI_query5GVNGroupPPData(apiClient_t *apiClient, list_t * ext_group_ids , char * supported_features );


