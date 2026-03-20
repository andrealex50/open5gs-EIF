#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SMContextsCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create SM Context
//
sm_context_created_data_t*
SMContextsCollectionAPI_postSmContexts(apiClient_t *apiClient, sm_context_create_data_t * jsonData , binary_t* binaryDataN1SmMessage , binary_t* binaryDataN2SmInformation , binary_t* binaryDataN2SmInformationExt1 )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-contexts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-contexts");




    // form parameters
    char *keyForm_jsonData = NULL;
    sm_context_create_data_t * valueForm_jsonData = 0;
    keyValuePair_t *keyPairForm_jsonData = 0;
    if (jsonData != NULL)
    {
        keyForm_jsonData = strdup("jsonData");
        valueForm_jsonData = (jsonData);
        keyPairForm_jsonData = keyValuePair_create(keyForm_jsonData,&valueForm_jsonData);
        list_addElement(localVarFormParameters,keyPairForm_jsonData);
    }

    // form parameters
    char *keyForm_binaryDataN1SmMessage = NULL;
    binary_t* valueForm_binaryDataN1SmMessage = 0;
    keyValuePair_t *keyPairForm_binaryDataN1SmMessage = 0;
    if (binaryDataN1SmMessage != NULL)
    {
        keyForm_binaryDataN1SmMessage = strdup("binaryDataN1SmMessage");
        valueForm_binaryDataN1SmMessage = binaryDataN1SmMessage;
        keyPairForm_binaryDataN1SmMessage = keyValuePair_create(keyForm_binaryDataN1SmMessage, &valueForm_binaryDataN1SmMessage);
        list_addElement(localVarFormParameters,keyPairForm_binaryDataN1SmMessage); //file adding
    }

    // form parameters
    char *keyForm_binaryDataN2SmInformation = NULL;
    binary_t* valueForm_binaryDataN2SmInformation = 0;
    keyValuePair_t *keyPairForm_binaryDataN2SmInformation = 0;
    if (binaryDataN2SmInformation != NULL)
    {
        keyForm_binaryDataN2SmInformation = strdup("binaryDataN2SmInformation");
        valueForm_binaryDataN2SmInformation = binaryDataN2SmInformation;
        keyPairForm_binaryDataN2SmInformation = keyValuePair_create(keyForm_binaryDataN2SmInformation, &valueForm_binaryDataN2SmInformation);
        list_addElement(localVarFormParameters,keyPairForm_binaryDataN2SmInformation); //file adding
    }

    // form parameters
    char *keyForm_binaryDataN2SmInformationExt1 = NULL;
    binary_t* valueForm_binaryDataN2SmInformationExt1 = 0;
    keyValuePair_t *keyPairForm_binaryDataN2SmInformationExt1 = 0;
    if (binaryDataN2SmInformationExt1 != NULL)
    {
        keyForm_binaryDataN2SmInformationExt1 = strdup("binaryDataN2SmInformationExt1");
        valueForm_binaryDataN2SmInformationExt1 = binaryDataN2SmInformationExt1;
        keyPairForm_binaryDataN2SmInformationExt1 = keyValuePair_create(keyForm_binaryDataN2SmInformationExt1, &valueForm_binaryDataN2SmInformationExt1);
        list_addElement(localVarFormParameters,keyPairForm_binaryDataN2SmInformationExt1); //file adding
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"multipart/related"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"multipart/related"); //consumes
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
    //    printf("%s\n","successful creation of an SM context");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","unsuccessful creation of an SM context - bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","unsuccessful creation of an SM context - forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","unsuccessful creation of an SM context - not found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 411) {
    //    printf("%s\n","Length Required");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","Payload Too Large");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 415) {
    //    printf("%s\n","Unsupported Media Type");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too Many Requests");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","unsuccessful creation of an SM context - internal server error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","unsuccessful creation of an SM context - service unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 504) {
    //    printf("%s\n","unsuccessful creation of an SM context - gateway timeout");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *SMContextsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_context_created_data_t *elementToReturn = sm_context_created_data_parseFromJSON(SMContextsCollectionAPIlocalVarJSON);
    cJSON_Delete(SMContextsCollectionAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (keyForm_jsonData) {
        free(keyForm_jsonData);
        keyForm_jsonData = NULL;
    }
    free(keyPairForm_jsonData);
    if (keyForm_binaryDataN1SmMessage) {
        free(keyForm_binaryDataN1SmMessage);
        keyForm_binaryDataN1SmMessage = NULL;
    }
//    free(fileVar_binaryDataN1SmMessage->data);
//    free(fileVar_binaryDataN1SmMessage);
    free(keyPairForm_binaryDataN1SmMessage);
    if (keyForm_binaryDataN2SmInformation) {
        free(keyForm_binaryDataN2SmInformation);
        keyForm_binaryDataN2SmInformation = NULL;
    }
//    free(fileVar_binaryDataN2SmInformation->data);
//    free(fileVar_binaryDataN2SmInformation);
    free(keyPairForm_binaryDataN2SmInformation);
    if (keyForm_binaryDataN2SmInformationExt1) {
        free(keyForm_binaryDataN2SmInformationExt1);
        keyForm_binaryDataN2SmInformationExt1 = NULL;
    }
//    free(fileVar_binaryDataN2SmInformationExt1->data);
//    free(fileVar_binaryDataN2SmInformationExt1);
    free(keyPairForm_binaryDataN2SmInformationExt1);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

