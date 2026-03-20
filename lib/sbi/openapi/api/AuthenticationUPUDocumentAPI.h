#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/upu_data.h"


// To store the UPU acknowledgement information of a UE
//
void
AuthenticationUPUDocumentAPI_createAuthenticationUPU(apiClient_t *apiClient, char * ueId , upu_data_t * upu_data , char * supported_features );


// Retrieves the UPU acknowledgement information of a UE
//
upu_data_t*
AuthenticationUPUDocumentAPI_queryAuthUPU(apiClient_t *apiClient, char * ueId , char * supported_features );


