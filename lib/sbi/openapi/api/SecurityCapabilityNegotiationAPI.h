#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sec_negotiate_req_data.h"
#include "../model/sec_negotiate_rsp_data.h"


// Security Capability Negotiation
//
sec_negotiate_rsp_data_t*
SecurityCapabilityNegotiationAPI_postExchangeCapability(apiClient_t *apiClient, sec_negotiate_req_data_t * sec_negotiate_req_data );


