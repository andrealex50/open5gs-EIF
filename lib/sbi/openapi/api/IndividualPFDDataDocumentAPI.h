#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/pfd_data_for_app_ext.h"
#include "../model/problem_details.h"


// Create or update the corresponding PFDs for the specified application identifier
//
pfd_data_for_app_ext_t*
IndividualPFDDataDocumentAPI_createOrReplaceIndividualPFDData(apiClient_t *apiClient, char * appId , pfd_data_for_app_ext_t * pfd_data_for_app_ext );


// Delete the corresponding PFDs of the specified application identifier
//
void
IndividualPFDDataDocumentAPI_deleteIndividualPFDData(apiClient_t *apiClient, char * appId );


// Retrieve the corresponding PFDs of the specified application identifier
//
pfd_data_for_app_ext_t*
IndividualPFDDataDocumentAPI_readIndividualPFDData(apiClient_t *apiClient, char * appId , char * supp_feat );


