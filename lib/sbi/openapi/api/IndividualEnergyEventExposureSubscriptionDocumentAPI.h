#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/energy_ee_subsc.h"
#include "../model/energy_ee_subsc_patch.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Request the deletion of an existing Individual Energy Event Exposure Subscription resource.
//
void
IndividualEnergyEventExposureSubscriptionDocumentAPI_deleteIndEnergyEESubsc(apiClient_t *apiClient, char * subId );


// Retrieve an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t*
IndividualEnergyEventExposureSubscriptionDocumentAPI_getIndEnergyEESubsc(apiClient_t *apiClient, char * subId );


// Request the modification of an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t*
IndividualEnergyEventExposureSubscriptionDocumentAPI_modifyIndEnergyEESubsc(apiClient_t *apiClient, char * subId , energy_ee_subsc_patch_t * energy_ee_subsc_patch );


// Request the update of an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t*
IndividualEnergyEventExposureSubscriptionDocumentAPI_updateIndEnergyEESubsc(apiClient_t *apiClient, char * subId , energy_ee_subsc_t * energy_ee_subsc );


