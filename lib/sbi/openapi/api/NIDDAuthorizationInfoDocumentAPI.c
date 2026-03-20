#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "NIDDAuthorizationInfoDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create NIDD Authorization Info
//
nidd_authorization_info_t*
NIDDAuthorizationInfoDocumentAPI_createNIDDAuthorizationInfo(apiClient_t *apiClient, char * ueId , nidd_authorization_info_t * nidd_authorization_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/nidd-authorizations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/nidd-authorizations");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // Body Param
    cJSON *localVarSingleItemJSON_nidd_authorization_info = NULL;
    if (nidd_authorization_info != NULL)
    {
        //string
        localVarSingleItemJSON_nidd_authorization_info = nidd_authorization_info_convertToJSON(nidd_authorization_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_nidd_authorization_info);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Upon success, an empty response body shall be returned");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Upon successful creation, the created resource shall be returned");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *NIDDAuthorizationInfoDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    nidd_authorization_info_t *elementToReturn = nidd_authorization_info_parseFromJSON(NIDDAuthorizationInfoDocumentAPIlocalVarJSON);
    cJSON_Delete(NIDDAuthorizationInfoDocumentAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_ueId);
    if (localVarSingleItemJSON_nidd_authorization_info) {
        cJSON_Delete(localVarSingleItemJSON_nidd_authorization_info);
        localVarSingleItemJSON_nidd_authorization_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve NIDD Authorization Info
//
nidd_authorization_info_t*
NIDDAuthorizationInfoDocumentAPI_getNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/nidd-authorizations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/nidd-authorizations");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);


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
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *NIDDAuthorizationInfoDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    nidd_authorization_info_t *elementToReturn = nidd_authorization_info_parseFromJSON(NIDDAuthorizationInfoDocumentAPIlocalVarJSON);
    cJSON_Delete(NIDDAuthorizationInfoDocumentAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Modify NIDD Authorization Info
//
patch_result_t*
NIDDAuthorizationInfoDocumentAPI_modifyNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId , list_t * patch_item , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/nidd-authorizations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/nidd-authorizations");


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
    cJSON *NIDDAuthorizationInfoDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    patch_result_t *elementToReturn = patch_result_parseFromJSON(NIDDAuthorizationInfoDocumentAPIlocalVarJSON);
    cJSON_Delete(NIDDAuthorizationInfoDocumentAPIlocalVarJSON);
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

// Delete NIDD Authorization Info
//
void
NIDDAuthorizationInfoDocumentAPI_removeNiddAuthorizationInfo(apiClient_t *apiClient, char * ueId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/nidd-authorizations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/nidd-authorizations");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);


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
    //    printf("%s\n","Expected response to a successful subscription removal");
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
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_ueId);

}

