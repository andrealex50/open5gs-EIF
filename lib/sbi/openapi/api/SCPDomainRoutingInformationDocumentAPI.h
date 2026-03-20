#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/scp_domain_routing_information.h"


scp_domain_routing_information_t*
SCPDomainRoutingInformationDocumentAPI_sCPDomainRoutingInfoGet(apiClient_t *apiClient, int local , char * Accept_Encoding );


