#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"


// unsubscribe from notifications
//
void
SubscriptionDeletionAPI_unsubscribe(apiClient_t *apiClient, char * ueId , char * subscriptionId );


