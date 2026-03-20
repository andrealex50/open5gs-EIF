#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/smf_selection_subscription_data.h"


// Retrieves the SMF selection subscription data of a UE
//
smf_selection_subscription_data_t*
SMFSelectionSubscriptionDataDocumentAPI_querySmfSelectData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , list_t * fields , char * supported_features , char * If_None_Match , char * If_Modified_Since );


