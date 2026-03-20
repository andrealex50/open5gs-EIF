#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/nssai_ack_data.h"


// To store the NSSAI update acknowledgement information of a UE
//
void
NSSAIUpdateAckDocumentAPI_createOrUpdateNssaiAck(apiClient_t *apiClient, char * ueId , nssai_ack_data_t * nssai_ack_data , char * supported_features );


