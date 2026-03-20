#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/problem_details.h"
#include "../model/service_parameter_data.h"
#include "../model/service_parameter_data_patch.h"


// Create or update an individual Service Parameter Data resource
//
service_parameter_data_t*
IndividualServiceParameterDataDocumentAPI_createOrReplaceServiceParameterData(apiClient_t *apiClient, char * serviceParamId , service_parameter_data_t * service_parameter_data );


// Delete an individual Service Parameter Data resource
//
void
IndividualServiceParameterDataDocumentAPI_deleteIndividualServiceParameterData(apiClient_t *apiClient, char * serviceParamId );


// Modify part of the properties of an individual Service Parameter Data resource
//
service_parameter_data_t*
IndividualServiceParameterDataDocumentAPI_updateIndividualServiceParameterData(apiClient_t *apiClient, char * serviceParamId , service_parameter_data_patch_t * service_parameter_data_patch );


