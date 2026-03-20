#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/service_parameter_data.h"
#include "../model/snssai.h"


// Retrieve Service Parameter Data
//
list_t*
ServiceParameterDataStoreAPI_readServiceParameterData(apiClient_t *apiClient, list_t * service_param_ids , list_t * dnns , list_t * snssais , list_t * internal_group_ids , list_t * supis , list_t * ue_ipv4s , list_t * ue_ipv6s , list_t * ue_macs , int any_ue , char * supp_feat );


