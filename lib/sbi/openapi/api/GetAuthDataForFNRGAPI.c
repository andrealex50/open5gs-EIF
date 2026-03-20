#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GetAuthDataForFNRGAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get authentication data for the FN-RG
//
rg_auth_ctx_t*
GetAuthDataForFNRGAPI_getRgAuthData(apiClient_t *apiClient, char * supiOrSuci , int authenticated_ind , char * supported_features , plmn_id_t * plmn_id , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supiOrSuci}/security-information-rg")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supiOrSuci}/security-information-rg");


    // Path Params
    long sizeOfPathParams_supiOrSuci = strlen(supiOrSuci)+3 + strlen("{ supiOrSuci }");
    if(supiOrSuci == NULL) {
        goto end;
    }
    char* localVarToReplace_supiOrSuci = malloc(sizeOfPathParams_supiOrSuci);
    sprintf(localVarToReplace_supiOrSuci, "{%s}", "supiOrSuci");

    localVarPath = strReplace(localVarPath, localVarToReplace_supiOrSuci, supiOrSuci);



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
    char *keyQuery_authenticated_ind = NULL;
    char * valueQuery_authenticated_ind = NULL;
    keyValuePair_t *keyPairQuery_authenticated_ind = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_authenticated_ind = strdup("authenticated-ind");
        valueQuery_authenticated_ind = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_authenticated_ind, MAX_NUMBER_LENGTH, "%d", authenticated_ind);
        keyPairQuery_authenticated_ind = keyValuePair_create(keyQuery_authenticated_ind, valueQuery_authenticated_ind);
        list_addElement(localVarQueryParameters,keyPairQuery_authenticated_ind);
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

    // query parameters
    char *keyQuery_plmn_id = NULL;
    plmn_id_t * valueQuery_plmn_id ;
    keyValuePair_t *keyPairQuery_plmn_id = 0;
    if (plmn_id)
    {
        keyQuery_plmn_id = strdup("plmn-id");
        valueQuery_plmn_id = (plmn_id);
        keyPairQuery_plmn_id = keyValuePair_create(keyQuery_plmn_id, &valueQuery_plmn_id);
        list_addElement(localVarQueryParameters,keyPairQuery_plmn_id);
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
    cJSON *GetAuthDataForFNRGAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    rg_auth_ctx_t *elementToReturn = rg_auth_ctx_parseFromJSON(GetAuthDataForFNRGAPIlocalVarJSON);
    cJSON_Delete(GetAuthDataForFNRGAPIlocalVarJSON);
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
    free(localVarToReplace_supiOrSuci);
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
    if(keyQuery_authenticated_ind){
        free(keyQuery_authenticated_ind);
        keyQuery_authenticated_ind = NULL;
    }
    if(valueQuery_authenticated_ind){
        free(valueQuery_authenticated_ind);
        valueQuery_authenticated_ind = NULL;
    }
    if(keyPairQuery_authenticated_ind){
        keyValuePair_free(keyPairQuery_authenticated_ind);
        keyPairQuery_authenticated_ind = NULL;
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
    if(keyQuery_plmn_id){
        free(keyQuery_plmn_id);
        keyQuery_plmn_id = NULL;
    }
    if(keyPairQuery_plmn_id){
        keyValuePair_free(keyPairQuery_plmn_id);
        keyPairQuery_plmn_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

