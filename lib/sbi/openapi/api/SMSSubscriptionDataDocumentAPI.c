#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SMSSubscriptionDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieves the SMS subscription data of a UE
//
sms_subscription_data_t*
SMSSubscriptionDataDocumentAPI_querySmsData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , char * supported_features , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/{servingPlmnId}/provisioned-data/sms-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/{servingPlmnId}/provisioned-data/sms-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(servingPlmnId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_servingPlmnId = strlen(ueId)+3 + strlen(servingPlmnId)+3 + strlen("{ servingPlmnId }");
    if(servingPlmnId == NULL) {
        goto end;
    }
    char* localVarToReplace_servingPlmnId = malloc(sizeOfPathParams_servingPlmnId);
    sprintf(localVarToReplace_servingPlmnId, "{%s}", "servingPlmnId");

    localVarPath = strReplace(localVarPath, localVarToReplace_servingPlmnId, servingPlmnId);



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
    //nonprimitive not container
    cJSON *SMSSubscriptionDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sms_subscription_data_t *elementToReturn = sms_subscription_data_parseFromJSON(SMSSubscriptionDataDocumentAPIlocalVarJSON);
    cJSON_Delete(SMSSubscriptionDataDocumentAPIlocalVarJSON);
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
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    free(localVarToReplace_servingPlmnId);
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

