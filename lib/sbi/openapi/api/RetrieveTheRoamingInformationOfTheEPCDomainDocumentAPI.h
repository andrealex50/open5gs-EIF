#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/roaming_info_update.h"


// Retrieves the Roaming Information of the EPC domain
//
roaming_info_update_t*
RetrieveTheRoamingInformationOfTheEPCDomainDocumentAPI_queryRoamingInformation(apiClient_t *apiClient, char * ueId );


