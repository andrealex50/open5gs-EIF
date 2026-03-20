#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/odb_data.h"


// Retrieve ODB Data data by SUPI or GPSI
//
odb_data_t*
QueryODBDataBySUPIOrGPSIDocumentAPI_getOdbData(apiClient_t *apiClient, char * ueId );


