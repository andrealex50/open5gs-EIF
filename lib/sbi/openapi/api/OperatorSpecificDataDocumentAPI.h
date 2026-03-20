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


// When the feature OSDResource_Create_Delete is supported, delete OperatorSpecificData resource
//
void
OperatorSpecificDataDocumentAPI_deleteOperatorSpecificData(apiClient_t *apiClient, char * ueId );


// Retrieve the operator specific policy data of an UE
//
list_t*_t*
OperatorSpecificDataDocumentAPI_readOperatorSpecificData(apiClient_t *apiClient, char * ueId , list_t * fields , char * supp_feat );


// Create or modify the operator specific policy data of a UE
//
list_t*_t*
OperatorSpecificDataDocumentAPI_replaceOperatorSpecificData(apiClient_t *apiClient, char * ueId , list_t* request_body );


// Modify the operator specific policy data of a UE
//
patch_result_t*
OperatorSpecificDataDocumentAPI_updateOperatorSpecificData(apiClient_t *apiClient, char * ueId , list_t * patch_item );


