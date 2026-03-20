#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/acknowledge_info.h"
#include "../model/problem_details.h"


// Nudm_Sdm Info service operation
//
void
ProvidingAcknowledgementOfSteeringOfRoamingAPI_sorAckInfo(apiClient_t *apiClient, char * supi , acknowledge_info_t * acknowledge_info );


