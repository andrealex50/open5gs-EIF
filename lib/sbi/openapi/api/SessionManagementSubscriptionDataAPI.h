#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/sm_subs_data.h"
#include "../model/snssai.h"


// Retrieves the Session Management subscription data of a UE
//
sm_subs_data_t*
SessionManagementSubscriptionDataAPI_querySmData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , snssai_t * single_nssai , char * dnn , list_t * fields , char * supported_features , char * If_None_Match , char * If_Modified_Since );


