#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/object.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"
#include "../model/sdm_subscription.h"


// Modify an individual sdm subscription
//
patch_result_t*
SDMSubscriptionDocumentAPI_modifysdmSubscription(apiClient_t *apiClient, char * ueId , char * subsId , list_t * patch_item , char * supported_features );


// Retrieves a individual sdmSubscription identified by subsId
//
object_t*
SDMSubscriptionDocumentAPI_querysdmSubscription(apiClient_t *apiClient, char * ueId , char * subsId );


// Deletes a sdmsubscriptions
//
void
SDMSubscriptionDocumentAPI_removesdmSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId );


// Update an individual sdm subscriptions of a UE
//
void
SDMSubscriptionDocumentAPI_updatesdmsubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , sdm_subscription_t * sdm_subscription );


