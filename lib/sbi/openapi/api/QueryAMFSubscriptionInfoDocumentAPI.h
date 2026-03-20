#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf_subscription_info.h"


// Retrieve AMF subscription Info for a group of UEs or any UE
//
list_t*
QueryAMFSubscriptionInfoDocumentAPI_getAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId );


// Retrieve AMF subscription Info
//
list_t*
QueryAMFSubscriptionInfoDocumentAPI_getAmfSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId );


