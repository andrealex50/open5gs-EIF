#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/bdt_data.h"
#include "../model/bdt_data_patch.h"
#include "../model/problem_details.h"


// Creates an BDT data resource associated with an BDT reference Id
//
bdt_data_t*
IndividualBdtDataDocumentAPI_createIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId , bdt_data_t * bdt_data );


// Deletes an BDT data resource associated with an BDT reference Id
//
void
IndividualBdtDataDocumentAPI_deleteIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId );


// Retrieves the BDT data information associated with a BDT reference Id
//
bdt_data_t*
IndividualBdtDataDocumentAPI_readIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId , char * supp_feat );


// Modifies an BDT data resource associated with an BDT reference Id
//
bdt_data_t*
IndividualBdtDataDocumentAPI_updateIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId , bdt_data_patch_t * bdt_data_patch );


