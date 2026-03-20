#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/amf_subscription_info.h"


// Create AmfSubscriptions for an individual ee subscriptions of a UE
//
list_t*
AMFSubscriptionInfoDocumentAPI_createAMFSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , list_t * amf_subscription_info );


