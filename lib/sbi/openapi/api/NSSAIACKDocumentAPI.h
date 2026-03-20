#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/nssai_ack_data.h"


// Retrieves the UPU acknowledgement information of a UE
//
nssai_ack_data_t*
NSSAIACKDocumentAPI_queryNssaiAck(apiClient_t *apiClient, char * ueId , char * supported_features );


