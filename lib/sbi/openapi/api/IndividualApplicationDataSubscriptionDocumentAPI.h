#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/application_data_subs.h"
#include "../model/problem_details.h"


// Delete the individual Application Data subscription
//
void
IndividualApplicationDataSubscriptionDocumentAPI_deleteIndividualApplicationDataSubscription(apiClient_t *apiClient, char * subsId );


// Get an existing individual Application Data Subscription resource
//
application_data_subs_t*
IndividualApplicationDataSubscriptionDocumentAPI_readIndividualApplicationDataSubscription(apiClient_t *apiClient, char * subsId );


// Modify a subscription to receive notification of application data changes
//
application_data_subs_t*
IndividualApplicationDataSubscriptionDocumentAPI_replaceIndividualApplicationDataSubscription(apiClient_t *apiClient, char * subsId , application_data_subs_t * application_data_subs );


