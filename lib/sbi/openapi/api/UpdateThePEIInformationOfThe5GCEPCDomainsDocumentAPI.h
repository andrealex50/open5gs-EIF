#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pei_update_info.h"


// Update the PEI Information of the 5GC/EPC domains
//
pei_update_info_t*
UpdateThePEIInformationOfThe5GCEPCDomainsDocumentAPI_createOrUpdatePeiInformation(apiClient_t *apiClient, char * ueId , pei_update_info_t * pei_update_info );


