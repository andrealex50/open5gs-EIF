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


// Modify an individual ee subscription of a UE
//
patch_result_t*
EventExposureSubscriptionDocumentAPI_modifyEesubscription(apiClient_t *apiClient, char * ueId , char * subsId , list_t * patch_item , char * supported_features );


// Retrieve a eeSubscription
//
object_t*
EventExposureSubscriptionDocumentAPI_queryeeSubscription(apiClient_t *apiClient, char * ueId , char * subsId );


// Deletes a eeSubscription
//
void
EventExposureSubscriptionDocumentAPI_removeeeSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId );


// Update an individual ee subscriptions of a UE
//
void
EventExposureSubscriptionDocumentAPI_updateEesubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , ee_subscription_t * ee_subscription );


