#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cag_ack_data.h"


// To store the CAG update acknowledgement information of a UE
//
void
CAGUpdateAckDocumentAPI_createCagUpdateAck(apiClient_t *apiClient, char * ueId , cag_ack_data_t * cag_ack_data , char * supported_features );


