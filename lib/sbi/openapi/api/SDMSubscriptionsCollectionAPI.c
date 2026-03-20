#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SDMSubscriptionsCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create individual sdm subscription
//
sdm_subscription_t*
SDMSubscriptionsCollectionAPI_createSdmSubscriptions(apiClient_t *apiClient, char * ueId , sdm_subscription_t * sdm_subscription )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/sdm-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/sdm-subscriptions");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // Body Param
    cJSON *localVarSingleItemJSON_sdm_subscription = NULL;
    if (sdm_subscription != NULL)
    {
        //string
        localVarSingleItemJSON_sdm_subscription = sdm_subscription_convertToJSON(sdm_subscription);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sdm_subscription);
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
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *SDMSubscriptionsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sdm_subscription_t *elementToReturn = sdm_subscription_parseFromJSON(SDMSubscriptionsCollectionAPIlocalVarJSON);
    cJSON_Delete(SDMSubscriptionsCollectionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_sdm_subscription) {
        cJSON_Delete(localVarSingleItemJSON_sdm_subscription);
        localVarSingleItemJSON_sdm_subscription = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieves the sdm subscriptions of a UE
//
list_t*
SDMSubscriptionsCollectionAPI_querysdmsubscriptions(apiClient_t *apiClient, char * ueId , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/sdm-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/sdm-subscriptions");


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
    cJSON *SDMSubscriptionsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(SDMSubscriptionsCollectionAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, SDMSubscriptionsCollectionAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( SDMSubscriptionsCollectionAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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

