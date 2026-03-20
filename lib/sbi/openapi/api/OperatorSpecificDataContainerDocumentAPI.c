#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "OperatorSpecificDataContainerDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// To create an operator-specific data resource of a UE
//
list_t*_t*
OperatorSpecificDataContainerDocumentAPI_createOperSpecData(apiClient_t *apiClient, char * ueId , list_t* request_body , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/operator-specific-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/operator-specific-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // query parameters
    char *keyQuery_supported_features = NULL;
    char * valueQuery_supported_features = NULL;
    keyValuePair_t *keyPairQuery_supported_features = 0;
    if (supported_features)
    {
        keyQuery_supported_features = strdup("supported-features");
        valueQuery_supported_features = strdup((supported_features));
        keyPairQuery_supported_features = keyValuePair_create(keyQuery_supported_features, valueQuery_supported_features);
        list_addElement(localVarQueryParameters,keyPairQuery_supported_features);
    }

    // Body Param
    cJSON *localVarSingleItemJSON_request_body = NULL;
    if (request_body != NULL)
    {
        //string
        localVarSingleItemJSON_request_body = list_t*_convertToJSON(request_body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_request_body);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Upon success, a response body containing a representation of the created Operator Specific Data resource shall be returned");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    cJSON *OperatorSpecificDataContainerDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(OperatorSpecificDataContainerDocumentAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, OperatorSpecificDataContainerDocumentAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( OperatorSpecificDataContainerDocumentAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_ueId);
    if (localVarSingleItemJSON_request_body) {
        cJSON_Delete(localVarSingleItemJSON_request_body);
        localVarSingleItemJSON_request_body = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_supported_features){
        free(keyQuery_supported_features);
        keyQuery_supported_features = NULL;
    }
    if(valueQuery_supported_features){
        free(valueQuery_supported_features);
        valueQuery_supported_features = NULL;
    }
    if(keyPairQuery_supported_features){
        keyValuePair_free(keyPairQuery_supported_features);
        keyPairQuery_supported_features = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// To remove an operator-specific data resource of a UE
//
void
OperatorSpecificDataContainerDocumentAPI_deleteOperSpecData(apiClient_t *apiClient, char * ueId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/operator-specific-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/operator-specific-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);


    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Upon success, an empty response body shall be returned.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);

}

// To modify operator specific data of a UE
//
patch_result_t*
OperatorSpecificDataContainerDocumentAPI_modifyOperSpecData(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/operator-specific-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/operator-specific-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // query parameters
    char *keyQuery_supported_features = NULL;
    char * valueQuery_supported_features = NULL;
    keyValuePair_t *keyPairQuery_supported_features = 0;
    if (supported_features)
    {
        keyQuery_supported_features = strdup("supported-features");
        valueQuery_supported_features = strdup((supported_features));
        keyPairQuery_supported_features = keyValuePair_create(keyQuery_supported_features, valueQuery_supported_features);
        list_addElement(localVarQueryParameters,keyPairQuery_supported_features);
    }

    // Body Param
    //notstring
    cJSON *localVar_patch_item = NULL;
    cJSON *localVarItemJSON_patch_item = NULL;
    cJSON *localVarSingleItemJSON_patch_item = NULL;
    if (patch_item != NULL)
    {
        localVarItemJSON_patch_item = cJSON_CreateObject();
        localVarSingleItemJSON_patch_item = cJSON_AddArrayToObject(localVarItemJSON_patch_item, "patch_item");
        if (localVarSingleItemJSON_patch_item == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *patch_itemBodyListEntry;
    list_ForEach(patch_itemBodyListEntry, patch_item)
    {
        localVar_patch_item = patch_item_convertToJSON(patch_itemBodyListEntry->data);
        if(localVar_patch_item == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_patch_item, localVar_patch_item);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_patch_item);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json-patch+json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","modification is rejected");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *OperatorSpecificDataContainerDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    patch_result_t *elementToReturn = patch_result_parseFromJSON(OperatorSpecificDataContainerDocumentAPIlocalVarJSON);
    cJSON_Delete(OperatorSpecificDataContainerDocumentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_ueId);
    if (localVarItemJSON_patch_item) {
        cJSON_Delete(localVarItemJSON_patch_item);
        localVarItemJSON_patch_item = NULL;
    }
    if (localVarSingleItemJSON_patch_item) {
        cJSON_Delete(localVarSingleItemJSON_patch_item);
        localVarSingleItemJSON_patch_item = NULL;
    }
    if (localVar_patch_item) {
        cJSON_Delete(localVar_patch_item);
        localVar_patch_item = NULL;
    }
    free(localVarBodyParameters);
    if(keyQuery_supported_features){
        free(keyQuery_supported_features);
        keyQuery_supported_features = NULL;
    }
    if(valueQuery_supported_features){
        free(valueQuery_supported_features);
        valueQuery_supported_features = NULL;
    }
    if(keyPairQuery_supported_features){
        keyValuePair_free(keyPairQuery_supported_features);
        keyPairQuery_supported_features = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieves the operator specific data of a UE
//
list_t*_t*
OperatorSpecificDataContainerDocumentAPI_queryOperSpecData(apiClient_t *apiClient, char * ueId , list_t * fields , char * supported_features , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/operator-specific-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/operator-specific-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // header parameters
    char *keyHeader_If_None_Match = NULL;
    char * valueHeader_If_None_Match = 0;
    keyValuePair_t *keyPairHeader_If_None_Match = 0;
    if (If_None_Match) {
        keyHeader_If_None_Match = strdup("If-None-Match");
        valueHeader_If_None_Match = strdup((If_None_Match));
        keyPairHeader_If_None_Match = keyValuePair_create(keyHeader_If_None_Match, valueHeader_If_None_Match);
        list_addElement(localVarHeaderParameters,keyPairHeader_If_None_Match);
    }


    // header parameters
    char *keyHeader_If_Modified_Since = NULL;
    char * valueHeader_If_Modified_Since = 0;
    keyValuePair_t *keyPairHeader_If_Modified_Since = 0;
    if (If_Modified_Since) {
        keyHeader_If_Modified_Since = strdup("If-Modified-Since");
        valueHeader_If_Modified_Since = strdup((If_Modified_Since));
        keyPairHeader_If_Modified_Since = keyValuePair_create(keyHeader_If_Modified_Since, valueHeader_If_Modified_Since);
        list_addElement(localVarHeaderParameters,keyPairHeader_If_Modified_Since);
    }


    // query parameters
    if (fields)
    {
        list_addElement(localVarQueryParameters,fields);
    }

    // query parameters
    char *keyQuery_supported_features = NULL;
    char * valueQuery_supported_features = NULL;
    keyValuePair_t *keyPairQuery_supported_features = 0;
    if (supported_features)
    {
        keyQuery_supported_features = strdup("supported-features");
        valueQuery_supported_features = strdup((supported_features));
        keyPairQuery_supported_features = keyValuePair_create(keyQuery_supported_features, valueQuery_supported_features);
        list_addElement(localVarQueryParameters,keyPairQuery_supported_features);
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
    cJSON *OperatorSpecificDataContainerDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(OperatorSpecificDataContainerDocumentAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, OperatorSpecificDataContainerDocumentAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( OperatorSpecificDataContainerDocumentAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    if (keyHeader_If_None_Match) {
        free(keyHeader_If_None_Match);
        keyHeader_If_None_Match = NULL;
    }
    if (valueHeader_If_None_Match) {
        free(valueHeader_If_None_Match);
        valueHeader_If_None_Match = NULL;
    }
    free(keyPairHeader_If_None_Match);
    if (keyHeader_If_Modified_Since) {
        free(keyHeader_If_Modified_Since);
        keyHeader_If_Modified_Since = NULL;
    }
    if (valueHeader_If_Modified_Since) {
        free(valueHeader_If_Modified_Since);
        valueHeader_If_Modified_Since = NULL;
    }
    free(keyPairHeader_If_Modified_Since);
    if(keyQuery_supported_features){
        free(keyQuery_supported_features);
        keyQuery_supported_features = NULL;
    }
    if(valueQuery_supported_features){
        free(valueQuery_supported_features);
        valueQuery_supported_features = NULL;
    }
    if(keyPairQuery_supported_features){
        keyValuePair_free(keyPairQuery_supported_features);
        keyPairQuery_supported_features = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

