#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "HSSSDMSubscriptionInfoDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create HSS SDM Subscription Info
//
void
HSSSDMSubscriptionInfoDocumentAPI_createHSSSDMSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , hss_subscription_info_t * hss_subscription_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_subsId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ subsId }");
    if(subsId == NULL) {
        goto end;
    }
    char* localVarToReplace_subsId = malloc(sizeOfPathParams_subsId);
    sprintf(localVarToReplace_subsId, "{%s}", "subsId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subsId, subsId);



    // Body Param
    cJSON *localVarSingleItemJSON_hss_subscription_info = NULL;
    if (hss_subscription_info != NULL)
    {
        //string
        localVarSingleItemJSON_hss_subscription_info = hss_subscription_info_convertToJSON(hss_subscription_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_hss_subscription_info);
    }
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
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_ueId);
    free(localVarToReplace_subsId);
    if (localVarSingleItemJSON_hss_subscription_info) {
        cJSON_Delete(localVarSingleItemJSON_hss_subscription_info);
        localVarSingleItemJSON_hss_subscription_info = NULL;
    }
    free(localVarBodyParameters);

}

// Retrieve HSS SDM Subscription Info
//
smf_subscription_info_t*
HSSSDMSubscriptionInfoDocumentAPI_getHssSDMSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_subsId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ subsId }");
    if(subsId == NULL) {
        goto end;
    }
    char* localVarToReplace_subsId = malloc(sizeOfPathParams_subsId);
    sprintf(localVarToReplace_subsId, "{%s}", "subsId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subsId, subsId);


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
    cJSON *HSSSDMSubscriptionInfoDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    smf_subscription_info_t *elementToReturn = smf_subscription_info_parseFromJSON(HSSSDMSubscriptionInfoDocumentAPIlocalVarJSON);
    cJSON_Delete(HSSSDMSubscriptionInfoDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_subsId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Modify HSS SDM Subscription Info
//
patch_result_t*
HSSSDMSubscriptionInfoDocumentAPI_modifyHssSDMSubscriptionInfo(apiClient_t *apiClient, char * ueId , char * subsId , list_t * patch_item , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_subsId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ subsId }");
    if(subsId == NULL) {
        goto end;
    }
    char* localVarToReplace_subsId = malloc(sizeOfPathParams_subsId);
    sprintf(localVarToReplace_subsId, "{%s}", "subsId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subsId, subsId);



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
    cJSON *HSSSDMSubscriptionInfoDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    patch_result_t *elementToReturn = patch_result_parseFromJSON(HSSSDMSubscriptionInfoDocumentAPIlocalVarJSON);
    cJSON_Delete(HSSSDMSubscriptionInfoDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_subsId);
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

// Delete HSS SDM Subscription Info
//
void
HSSSDMSubscriptionInfoDocumentAPI_removeHssSDMSubscriptionsInfo(apiClient_t *apiClient, char * ueId , char * subsId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/sdm-subscriptions/{subsId}/hss-sdm-subscriptions");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_subsId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ subsId }");
    if(subsId == NULL) {
        goto end;
    }
    char* localVarToReplace_subsId = malloc(sizeOfPathParams_subsId);
    sprintf(localVarToReplace_subsId, "{%s}", "subsId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subsId, subsId);


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
    free(localVarToReplace_subsId);

}

