#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/get_multiple_pp_data_entries_ue_id_parameter.h"
#include "../model/pp_data_entry_list.h"
#include "../model/problem_details.h"


// get a list of Parameter Provisioning Data Entries
//
pp_data_entry_list_t*
ProvisionedParameterDataEntriesCollectionAPI_getMultiplePPDataEntries(apiClient_t *apiClient, get_multiple_pp_data_entries_ue_id_parameter_t * ueId , char * supported_features );


