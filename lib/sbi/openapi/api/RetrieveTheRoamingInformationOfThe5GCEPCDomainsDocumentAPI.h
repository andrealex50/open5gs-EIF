#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pei_update_info.h"


// Retrieves the PEI Information of the 5GC/EPC domains
//
pei_update_info_t*
RetrieveTheRoamingInformationOfThe5GCEPCDomainsDocumentAPI_queryPeiInformation(apiClient_t *apiClient, char * ueId );


