#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/hss_subscription_info.h"


// Create HSS Subscription Info for a group of UEs
//
hss_subscription_info_t*
HSSEventGroupSubscriptionInfoDocumentAPI_createHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId , char * subsId , hss_subscription_info_t * hss_subscription_info );


