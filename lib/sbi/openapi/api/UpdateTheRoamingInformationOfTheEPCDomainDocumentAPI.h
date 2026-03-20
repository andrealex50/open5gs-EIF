#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/roaming_info_update.h"


// Update the Roaming Information of the EPC domain
//
roaming_info_update_t*
UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI_updateRoamingInformation(apiClient_t *apiClient, char * ueId , roaming_info_update_t * roaming_info_update );


