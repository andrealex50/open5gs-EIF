#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/cag_ack_data.h"


// Retrieves the CAG acknowledgement information of a UE
//
cag_ack_data_t*
CAGACKDocumentAPI_queryCagAck(apiClient_t *apiClient, char * ueId , char * supported_features );


