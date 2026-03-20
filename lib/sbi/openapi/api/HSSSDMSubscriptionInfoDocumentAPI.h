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


// Create HSS SDM Subscription Info
//
void
HSSSDMSubscriptionInfoDocumentAPI_createHSSSDMSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , hss_subscription_info_t * hss_subscription_info );


// Retrieve HSS SDM Subscription Info
//
smf_subscription_info_t*
HSSSDMSubscriptionInfoDocumentAPI_getHssSDMSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId );


// Modify HSS SDM Subscription Info
//
patch_result_t*
HSSSDMSubscriptionInfoDocumentAPI_modifyHssSDMSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId , list_t * patch_item , char * supported_features );


// Delete HSS SDM Subscription Info
//
void
HSSSDMSubscriptionInfoDocumentAPI_removeHssSDMSubscriptionsInfo(apiClient_t *apiClient, char * ueId , char * subsId );


