#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/plmn_id.h"
#include "../model/problem_details.h"
#include "../model/sm_subs_data.h"
#include "../model/snssai.h"


// retrieve a UE's Session Management Subscription Data
//
sm_subs_data_t*
SessionManagementSubscriptionDataRetrievalAPI_getSmData(apiClient_t *apiClient, char * supi , char * supported_features , snssai_t * single_nssai , char * dnn , plmn_id_t * plmn_id , char * If_None_Match , char * If_Modified_Since );


