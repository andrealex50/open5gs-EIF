#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/location_info.h"


// Retrieves the UE's Location Information
//
location_info_t*
UEsLocationInformationDocumentAPI_queryUeLocation(apiClient_t *apiClient, char * ueId , char * supported_features );


