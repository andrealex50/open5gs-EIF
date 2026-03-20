#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/access_and_mobility_data.h"
#include "../model/problem_details.h"


// Creates and updates the access and mobility exposure data for a UE
//
access_and_mobility_data_t*
AccessAndMobilityDataAPI_createOrReplaceAccessAndMobilityData(apiClient_t *apiClient, char * ueId , access_and_mobility_data_t * access_and_mobility_data );


// Deletes the access and mobility exposure data for a UE
//
void
AccessAndMobilityDataAPI_deleteAccessAndMobilityData(apiClient_t *apiClient, char * ueId );


// Retrieves the access and mobility exposure data for a UE
//
access_and_mobility_data_t*
AccessAndMobilityDataAPI_queryAccessAndMobilityData(apiClient_t *apiClient, char * ueId , char * supp_feat );


// Updates the access and mobility exposure data for a UE
//
void
AccessAndMobilityDataAPI_updateAccessAndMobilityData(apiClient_t *apiClient, char * ueId , access_and_mobility_data_t * access_and_mobility_data );


