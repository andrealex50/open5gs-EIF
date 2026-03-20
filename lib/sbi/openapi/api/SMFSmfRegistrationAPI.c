#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SMFSmfRegistrationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// retrieve the SMF registration information
//
smf_registration_info_t*
SMFSmfRegistrationAPI_getSmfRegistration(apiClient_t *apiClient, char * ueId , snssai_t * single_nssai , char * dnn , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/registrations/smf-registrations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/registrations/smf-registrations");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // query parameters
    char *keyQuery_single_nssai = NULL;
    snssai_t * valueQuery_single_nssai ;
    keyValuePair_t *keyPairQuery_single_nssai = 0;
    if (single_nssai)
    {
        keyQuery_single_nssai = strdup("single-nssai");
        valueQuery_single_nssai = (single_nssai);
        keyPairQuery_single_nssai = keyValuePair_create(keyQuery_single_nssai, &valueQuery_single_nssai);
        list_addElement(localVarQueryParameters,keyPairQuery_single_nssai);
    }

    // query parameters
    char *keyQuery_dnn = NULL;
    char * valueQuery_dnn = NULL;
    keyValuePair_t *keyPairQuery_dnn = 0;
    if (dnn)
    {
        keyQuery_dnn = strdup("dnn");
        valueQuery_dnn = strdup((dnn));
        keyPairQuery_dnn = keyValuePair_create(keyQuery_dnn, valueQuery_dnn);
        list_addElement(localVarQueryParameters,keyPairQuery_dnn);
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
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
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
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *SMFSmfRegistrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    smf_registration_info_t *elementToReturn = smf_registration_info_parseFromJSON(SMFSmfRegistrationAPIlocalVarJSON);
    cJSON_Delete(SMFSmfRegistrationAPIlocalVarJSON);
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
    if(keyQuery_single_nssai){
        free(keyQuery_single_nssai);
        keyQuery_single_nssai = NULL;
    }
    if(keyPairQuery_single_nssai){
        keyValuePair_free(keyPairQuery_single_nssai);
        keyPairQuery_single_nssai = NULL;
    }
    if(keyQuery_dnn){
        free(keyQuery_dnn);
        keyQuery_dnn = NULL;
    }
    if(valueQuery_dnn){
        free(valueQuery_dnn);
        valueQuery_dnn = NULL;
    }
    if(keyPairQuery_dnn){
        keyValuePair_free(keyPairQuery_dnn);
        keyPairQuery_dnn = NULL;
    }
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

// register as SMF
//
smf_registration_t*
SMFSmfRegistrationAPI_registration(apiClient_t *apiClient, char * ueId , int pduSessionId , smf_registration_t * smf_registration )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/registrations/smf-registrations/{pduSessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/registrations/smf-registrations/{pduSessionId}");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 +  + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_pduSessionId = strlen(ueId)+3 +  + strlen("{ pduSessionId }");
    if(pduSessionId == 0){
        goto end;
    }
    char* localVarToReplace_pduSessionId = malloc(sizeOfPathParams_pduSessionId);
    snprintf(localVarToReplace_pduSessionId, sizeOfPathParams_pduSessionId, "{%s}", "pduSessionId");

    char localVarBuff_pduSessionId[256];
    intToStr(localVarBuff_pduSessionId, pduSessionId);

    localVarPath = strReplace(localVarPath, localVarToReplace_pduSessionId, localVarBuff_pduSessionId);




    // Body Param
    cJSON *localVarSingleItemJSON_smf_registration = NULL;
    if (smf_registration != NULL)
    {
        //string
        localVarSingleItemJSON_smf_registration = smf_registration_convertToJSON(smf_registration);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_smf_registration);
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
    //    printf("%s\n","Created");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *SMFSmfRegistrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    smf_registration_t *elementToReturn = smf_registration_parseFromJSON(SMFSmfRegistrationAPIlocalVarJSON);
    cJSON_Delete(SMFSmfRegistrationAPIlocalVarJSON);
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
    free(localVarToReplace_pduSessionId);
    if (localVarSingleItemJSON_smf_registration) {
        cJSON_Delete(localVarSingleItemJSON_smf_registration);
        localVarSingleItemJSON_smf_registration = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

