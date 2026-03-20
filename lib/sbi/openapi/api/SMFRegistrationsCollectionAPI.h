#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/smf_registration.h"


// Retrieves the SMF registration list of a UE
//
list_t*
SMFRegistrationsCollectionAPI_querySmfRegList(apiClient_t *apiClient, char * ueId , char * supported_features );


