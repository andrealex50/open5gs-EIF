#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/modifysubscription_data_subscription_200_response.h"
#include "../model/object.h"
#include "../model/patch_item.h"
#include "../model/problem_details.h"


// Modify an individual subscriptionDataSubscription
//
modifysubscription_data_subscription_200_response_t*
SubsToNotifyDocumentAPI_modifysubscriptionDataSubscription(apiClient_t *apiClient, char * subsId , list_t * patch_item , char * supported_features );


// Retrieves a individual subscriptionDataSubscription identified by subsId
//
object_t*
SubsToNotifyDocumentAPI_querySubscriptionDataSubscriptions(apiClient_t *apiClient, char * subsId );


// Deletes a subscriptionDataSubscriptions
//
void
SubsToNotifyDocumentAPI_removesubscriptionDataSubscriptions(apiClient_t *apiClient, char * subsId );


