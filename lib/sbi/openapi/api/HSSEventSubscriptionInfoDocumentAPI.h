#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/hss_subscription_info.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"
#include "../model/smf_subscription_info.h"


// Create HSS Subscription Info
//
hss_subscription_info_t*
HSSEventSubscriptionInfoDocumentAPI_createHSSSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , hss_subscription_info_t * hss_subscription_info );


// Retrieve HSS Subscription Info
//
hss_subscription_info_t*
HSSEventSubscriptionInfoDocumentAPI_getHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId , char * subsId );


// Retrieve HSS Subscription Info
//
smf_subscription_info_t*
HSSEventSubscriptionInfoDocumentAPI_getHssSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId );


// Modify HSS Subscription Info
//
patch_result_t*
HSSEventSubscriptionInfoDocumentAPI_modifyHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId , char * subsId , list_t * patch_item , char * supported_features );


// Modify HSS Subscription Info
//
patch_result_t*
HSSEventSubscriptionInfoDocumentAPI_modifyHssSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId , list_t * patch_item , char * supported_features );


// Delete HSS Subscription Info
//
void
HSSEventSubscriptionInfoDocumentAPI_removeHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId , char * subsId );


// Delete HSS Subscription Info
//
void
HSSEventSubscriptionInfoDocumentAPI_removeHssSubscriptionsInfo(apiClient_t *apiClient, char * ueId , char * subsId );


