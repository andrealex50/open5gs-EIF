#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ContextDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum CONTEXTDATASETNAMES for ContextDataDocumentAPI_queryContextData

static char* queryContextData_CONTEXTDATASETNAMES_ToString(nudr_datarepository_api_openapi_file_queryContextData_context-dataset-names_e CONTEXTDATASETNAMES){
    char *CONTEXTDATASETNAMESArray[] =  { "NULL", "AMF_3GPP", "AMF_NON_3GPP", "SDM_SUBSCRIPTIONS", "EE_SUBSCRIPTIONS", "SMSF_3GPP", "SMSF_NON_3GPP", "SUBS_TO_NOTIFY", "SMF_REG", "IP_SM_GW", "ROAMING_INFO", "PEI_INFO" };
    return CONTEXTDATASETNAMESArray[CONTEXTDATASETNAMES];
}

static nudr_datarepository_api_openapi_file_queryContextData_context-dataset-names_e queryContextData_CONTEXTDATASETNAMES_FromString(char* CONTEXTDATASETNAMES){
    int stringToReturn = 0;
    char *CONTEXTDATASETNAMESArray[] =  { "NULL", "AMF_3GPP", "AMF_NON_3GPP", "SDM_SUBSCRIPTIONS", "EE_SUBSCRIPTIONS", "SMSF_3GPP", "SMSF_NON_3GPP", "SUBS_TO_NOTIFY", "SMF_REG", "IP_SM_GW", "ROAMING_INFO", "PEI_INFO" };
    size_t sizeofArray = sizeof(CONTEXTDATASETNAMESArray) / sizeof(CONTEXTDATASETNAMESArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(CONTEXTDATASETNAMES, CONTEXTDATASETNAMESArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function queryContextData_CONTEXTDATASETNAMES_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *queryContextData_CONTEXTDATASETNAMES_convertToJSON(nudr_datarepository_api_openapi_file_queryContextData_context-dataset-names_e CONTEXTDATASETNAMES) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function queryContextData_CONTEXTDATASETNAMES_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudr_datarepository_api_openapi_file_queryContextData_context-dataset-names_e queryContextData_CONTEXTDATASETNAMES_parseFromJSON(cJSON* CONTEXTDATASETNAMESJSON) {
    nudr_datarepository_api_openapi_file_queryContextData_context-dataset-names_e CONTEXTDATASETNAMESVariable = 0;
    return CONTEXTDATASETNAMESVariable;
end:
    return 0;
}
*/


// Retrieve multiple context data sets of a UE
//
context_data_sets_t*
ContextDataDocumentAPI_queryContextData(apiClient_t *apiClient, char * ueId , set_t * context_dataset_names )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // query parameters
    if (context_dataset_names)
    {
        list_addElement(localVarQueryParameters,context_dataset_names);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *ContextDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    context_data_sets_t *elementToReturn = context_data_sets_parseFromJSON(ContextDataDocumentAPIlocalVarJSON);
    cJSON_Delete(ContextDataDocumentAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

