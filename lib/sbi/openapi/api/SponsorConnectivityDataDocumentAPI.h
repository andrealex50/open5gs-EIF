#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/sponsor_connectivity_data.h"


// Retrieves the sponsored connectivity information for a given sponsorId
//
sponsor_connectivity_data_t*
SponsorConnectivityDataDocumentAPI_readSponsorConnectivityData(apiClient_t *apiClient, char * sponsorId );


