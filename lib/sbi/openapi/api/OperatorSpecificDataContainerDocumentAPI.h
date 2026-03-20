#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/operator_specific_data_container.h"
#include "../model/patch_item.h"
#include "../model/patch_result.h"
#include "../model/problem_details.h"


// To create an operator-specific data resource of a UE
//
list_t*_t*
OperatorSpecificDataContainerDocumentAPI_createOperSpecData(apiClient_t *apiClient, char * ueId , list_t* request_body , char * supported_features );


// To remove an operator-specific data resource of a UE
//
void
OperatorSpecificDataContainerDocumentAPI_deleteOperSpecData(apiClient_t *apiClient, char * ueId );


// To modify operator specific data of a UE
//
patch_result_t*
OperatorSpecificDataContainerDocumentAPI_modifyOperSpecData(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features );


// Retrieves the operator specific data of a UE
//
list_t*_t*
OperatorSpecificDataContainerDocumentAPI_queryOperSpecData(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features , char * If_None_Match , char * If_Modified_Since );


