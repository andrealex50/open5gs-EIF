#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/iptv_config_data.h"
#include "../model/problem_details.h"
#include "../model/snssai.h"


// Retrieve IPTV configuration Data
//
list_t*
IPTVConfigurationDataStoreAPI_readIPTVCongifurationData(apiClient_t *apiClient, list_t * config_ids , list_t * dnns , list_t * snssais , list_t * supis , list_t * inter_group_ids );


