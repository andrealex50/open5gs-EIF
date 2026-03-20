#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/scp_domain_routing_info_subscription.h"


// Create a new subscription
//
scp_domain_routing_info_subscription_t*
SCPDomainRoutingInformationSubscriptionsCollectionAPI_scpDomainRoutingInfoSubscribe(apiClient_t *apiClient, scp_domain_routing_info_subscription_t * scp_domain_routing_info_subscription , char * Content_Encoding , char * Accept_Encoding );


