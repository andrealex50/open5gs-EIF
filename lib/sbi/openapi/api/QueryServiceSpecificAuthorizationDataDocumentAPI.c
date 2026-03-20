#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "QueryServiceSpecificAuthorizationDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve ServiceSpecific Authorization Data
//
authorization_data_t*
QueryServiceSpecificAuthorizationDataDocumentAPI_getSSAuData(apiClient_t *apiClient, char * ueId , service_type_t * serviceType , snssai_t * single_nssai , char * dnn , char * mtc_provider_information , char * af_id , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/service-specific-authorization-data/{serviceType}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/service-specific-authorization-data/{serviceType}");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 +  + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_serviceType = strlen(ueId)+3 +  + strlen("{ serviceType }");



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
    char *keyQuery_mtc_provider_information = NULL;
    char * valueQuery_mtc_provider_information = NULL;
    keyValuePair_t *keyPairQuery_mtc_provider_information = 0;
    if (mtc_provider_information)
    {
        keyQuery_mtc_provider_information = strdup("mtc-provider-information");
        valueQuery_mtc_provider_information = strdup((mtc_provider_information));
        keyPairQuery_mtc_provider_information = keyValuePair_create(keyQuery_mtc_provider_information, valueQuery_mtc_provider_information);
        list_addElement(localVarQueryParameters,keyPairQuery_mtc_provider_information);
    }

    // query parameters
    char *keyQuery_af_id = NULL;
    char * valueQuery_af_id = NULL;
    keyValuePair_t *keyPairQuery_af_id = 0;
    if (af_id)
    {
        keyQuery_af_id = strdup("af-id");
        valueQuery_af_id = strdup((af_id));
        keyPairQuery_af_id = keyValuePair_create(keyQuery_af_id, valueQuery_af_id);
        list_addElement(localVarQueryParameters,keyPairQuery_af_id);
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
    //    printf("%s\n","OK");
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
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *QueryServiceSpecificAuthorizationDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    authorization_data_t *elementToReturn = authorization_data_parseFromJSON(QueryServiceSpecificAuthorizationDataDocumentAPIlocalVarJSON);
    cJSON_Delete(QueryServiceSpecificAuthorizationDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_serviceType);
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
    if(keyQuery_mtc_provider_information){
        free(keyQuery_mtc_provider_information);
        keyQuery_mtc_provider_information = NULL;
    }
    if(valueQuery_mtc_provider_information){
        free(valueQuery_mtc_provider_information);
        valueQuery_mtc_provider_information = NULL;
    }
    if(keyPairQuery_mtc_provider_information){
        keyValuePair_free(keyPairQuery_mtc_provider_information);
        keyPairQuery_mtc_provider_information = NULL;
    }
    if(keyQuery_af_id){
        free(keyQuery_af_id);
        keyQuery_af_id = NULL;
    }
    if(valueQuery_af_id){
        free(valueQuery_af_id);
        valueQuery_af_id = NULL;
    }
    if(keyPairQuery_af_id){
        keyValuePair_free(keyPairQuery_af_id);
        keyPairQuery_af_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

