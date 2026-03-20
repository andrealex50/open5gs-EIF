#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/energy_ee_subsc.h"
#include "../model/problem_details.h"
#include "../model/redirect_response.h"


// Request the creation of an Energy Event Exposure Subscription.
//
energy_ee_subsc_t*
EnergyEventExposureSubscriptionsCollectionAPI_createEnergyEESubsc(apiClient_t *apiClient, energy_ee_subsc_t * energy_ee_subsc );


// Retrieve all the active Energy Event Exposure Subscription(s) managed by the EIF.
//
list_t*
EnergyEventExposureSubscriptionsCollectionAPI_getEnergyEESubscs(apiClient_t *apiClient);


