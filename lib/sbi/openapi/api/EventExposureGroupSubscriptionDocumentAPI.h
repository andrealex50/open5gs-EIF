#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ee_subscription.h"
#include "../model/object.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"


// Modify an individual ee subscription for a group of a UEs
//
patch_result_t*
EventExposureGroupSubscriptionDocumentAPI_modifyEeGroupSubscription(apiClient_t *apiClient, char * ueGroupId , char * subsId , list_t * patch_item , char * supported_features );


// Retrieve a individual eeSubscription for a group of UEs or any UE
//
object_t*
EventExposureGroupSubscriptionDocumentAPI_queryEeGroupSubscription(apiClient_t *apiClient, char * ueGroupId , char * subsId );


// Deletes a eeSubscription for a group of UEs or any UE
//
void
EventExposureGroupSubscriptionDocumentAPI_removeEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId );


// Update an individual ee subscription of a group of UEs or any UE
//
void
EventExposureGroupSubscriptionDocumentAPI_updateEeGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId , ee_subscription_t * ee_subscription );


