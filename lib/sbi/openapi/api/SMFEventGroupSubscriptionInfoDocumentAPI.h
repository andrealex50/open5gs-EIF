#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/smf_subscription_info.h"


// Create SMF Subscription Info for a group of UEs or any YE
//
smf_subscription_info_t*
SMFEventGroupSubscriptionInfoDocumentAPI_createSmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId , smf_subscription_info_t * smf_subscription_info );


