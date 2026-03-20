#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf_subscription_info.h"


// Create AmfSubscriptions for a group of UEs or any UE
//
list_t*
AMFGroupSubscriptionInfoDocumentAPI_createAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId , list_t * amf_subscription_info );


