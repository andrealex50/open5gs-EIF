#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sor_info.h"
#include "../model/sor_update_info.h"


// Nudm_Sdm custom operation to trigger SOR info update
//
sor_info_t*
TriggerSORInfoUpdateAPI_updateSORInfo(apiClient_t *apiClient, char * supi , sor_update_info_t * sor_update_info );


