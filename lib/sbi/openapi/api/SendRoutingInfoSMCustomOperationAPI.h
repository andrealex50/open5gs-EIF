#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/routing_info_sm_request.h"
#include "../model/routing_info_sm_response.h"


// Retreive addressing information for SMS delivery
//
routing_info_sm_response_t*
SendRoutingInfoSMCustomOperationAPI_sendRoutingInfoSm(apiClient_t *apiClient, char * ueId , routing_info_sm_request_t * routing_info_sm_request );


