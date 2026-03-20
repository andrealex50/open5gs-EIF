#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"


// Deletes AMF Subscription Info for an eeSubscription for a group of UEs or any UE
//
void
EventAMFSubscriptionInfoDocumentAPI_removeAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId );


// Deletes AMF Subscription Info for an eeSubscription
//
void
EventAMFSubscriptionInfoDocumentAPI_removeAmfSubscriptionsInfo(apiClient_t *apiClient, char * ueId , char * subsId );


