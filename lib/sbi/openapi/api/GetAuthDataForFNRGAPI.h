#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/plmn_id.h"
#include "../model/problem_details.h"
#include "../model/rg_auth_ctx.h"


// Get authentication data for the FN-RG
//
rg_auth_ctx_t*
GetAuthDataForFNRGAPI_getRgAuthData(apiClient_t *apiClient, char * supiOrSuci , int authenticated_ind , char * supported_features , plmn_id_t * plmn_id , char * If_None_Match , char * If_Modified_Since );


