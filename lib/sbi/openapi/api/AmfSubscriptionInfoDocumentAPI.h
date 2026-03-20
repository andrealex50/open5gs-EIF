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


// modify the AMF Subscription Info
//
patch_result_t*
AmfSubscriptionInfoDocumentAPI_modifyAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId , list_t * patch_item , char * supported_features );


// modify the AMF Subscription Info
//
patch_result_t*
AmfSubscriptionInfoDocumentAPI_modifyAmfSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId , list_t * patch_item , char * supported_features );


