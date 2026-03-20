#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GenerateAuthDataAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Generate authentication data for the UE
//
authentication_info_result_t*
GenerateAuthDataAPI_generateAuthData(apiClient_t *apiClient, char * supiOrSuci , authentication_info_request_t * authentication_info_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supiOrSuci}/security-information/generate-auth-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supiOrSuci}/security-information/generate-auth-data");


    // Path Params
    long sizeOfPathParams_supiOrSuci = strlen(supiOrSuci)+3 + strlen("{ supiOrSuci }");
    if(supiOrSuci == NULL) {
        goto end;
    }
    char* localVarToReplace_supiOrSuci = malloc(sizeOfPathParams_supiOrSuci);
    sprintf(localVarToReplace_supiOrSuci, "{%s}", "supiOrSuci");

    localVarPath = strReplace(localVarPath, localVarToReplace_supiOrSuci, supiOrSuci);



    // Body Param
    cJSON *localVarSingleItemJSON_authentication_info_request = NULL;
    if (authentication_info_request != NULL)
    {
        //string
        localVarSingleItemJSON_authentication_info_request = authentication_info_request_convertToJSON(authentication_info_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_authentication_info_request);
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
                    "POST");

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
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Not Implemented");
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
    cJSON *GenerateAuthDataAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    authentication_info_result_t *elementToReturn = authentication_info_result_parseFromJSON(GenerateAuthDataAPIlocalVarJSON);
    cJSON_Delete(GenerateAuthDataAPIlocalVarJSON);
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
    free(localVarToReplace_supiOrSuci);
    if (localVarSingleItemJSON_authentication_info_request) {
        cJSON_Delete(localVarSingleItemJSON_authentication_info_request);
        localVarSingleItemJSON_authentication_info_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

