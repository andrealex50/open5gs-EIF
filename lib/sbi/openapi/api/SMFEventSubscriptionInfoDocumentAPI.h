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
#include "../model/smf_subscription_info.h"


// Create SMF Subscription Info
//
smf_subscription_info_t*
SMFEventSubscriptionInfoDocumentAPI_createSMFSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , smf_subscription_info_t * smf_subscription_info );


// Retrieve SMF Subscription Info for a group of UEs or any UE
//
smf_subscription_info_t*
SMFEventSubscriptionInfoDocumentAPI_getSmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId );


// Retrieve SMF Subscription Info
//
smf_subscription_info_t*
SMFEventSubscriptionInfoDocumentAPI_getSmfSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId );


// Modify SMF Subscription Info for a group of UEs or any UE
//
patch_result_t*
SMFEventSubscriptionInfoDocumentAPI_modifySmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId , list_t * patch_item , char * supported_features );


// Modify SMF Subscription Info
//
patch_result_t*
SMFEventSubscriptionInfoDocumentAPI_modifySmfSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId , list_t * patch_item , char * supported_features );


// Delete SMF Subscription Info for a group of UEs or any UE
//
void
SMFEventSubscriptionInfoDocumentAPI_removeSmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId );


// Delete SMF Subscription Info
//
void
SMFEventSubscriptionInfoDocumentAPI_removeSmfSubscriptionsInfo(apiClient_t *apiClient, char * ueId , char * subsId );


