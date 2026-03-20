#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sec_param_exch_req_data.h"
#include "../model/sec_param_exch_rsp_data.h"


// Parameter Exchange
//
sec_param_exch_rsp_data_t*
ParameterExchangeAPI_postExchangeParams(apiClient_t *apiClient, sec_param_exch_req_data_t * sec_param_exch_req_data );


