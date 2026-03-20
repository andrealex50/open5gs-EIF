#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/events_subsc_put_data.h"
#include "../model/events_subsc_req_data.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// deletes the Events Subscription subresource
//
void
EventsSubscriptionDocumentAPI_deleteEventsSubsc(apiClient_t *apiClient, char * appSessionId );


// creates or modifies an Events Subscription subresource
//
events_subsc_put_data_t*
EventsSubscriptionDocumentAPI_updateEventsSubsc(apiClient_t *apiClient, char * appSessionId , events_subsc_req_data_t * events_subsc_req_data );


