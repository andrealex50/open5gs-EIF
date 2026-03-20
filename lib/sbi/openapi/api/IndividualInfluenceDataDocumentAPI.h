#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/traffic_influ_data.h"
#include "../model/traffic_influ_data_patch.h"


// Create or update an individual Influence Data resource
//
traffic_influ_data_t*
IndividualInfluenceDataDocumentAPI_createOrReplaceIndividualInfluenceData(apiClient_t *apiClient, char * influenceId , traffic_influ_data_t * traffic_influ_data );


// Delete an individual Influence Data resource
//
void
IndividualInfluenceDataDocumentAPI_deleteIndividualInfluenceData(apiClient_t *apiClient, char * influenceId );


// Modify part of the properties of an individual Influence Data resource
//
traffic_influ_data_t*
IndividualInfluenceDataDocumentAPI_updateIndividualInfluenceData(apiClient_t *apiClient, char * influenceId , traffic_influ_data_patch_t * traffic_influ_data_patch );


