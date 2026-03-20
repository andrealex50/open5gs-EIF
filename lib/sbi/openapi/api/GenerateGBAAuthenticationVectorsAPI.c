#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GenerateGBAAuthenticationVectorsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Generate authentication data for the UE in GBA domain
//
gba_authentication_info_result_t*
GenerateGBAAuthenticationVectorsAPI_generateGbaAv(apiClient_t *apiClient, char * supi , gba_authentication_info_request_t * gba_authentication_info_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supi}/gba-security-information/generate-av")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supi}/gba-security-information/generate-av");


    // Path Params
    long sizeOfPathParams_supi = strlen(supi)+3 + strlen("{ supi }");
    if(supi == NULL) {
        goto end;
    }
    char* localVarToReplace_supi = malloc(sizeOfPathParams_supi);
    sprintf(localVarToReplace_supi, "{%s}", "supi");

    localVarPath = strReplace(localVarPath, localVarToReplace_supi, supi);



    // Body Param
    cJSON *localVarSingleItemJSON_gba_authentication_info_request = NULL;
    if (gba_authentication_info_request != NULL)
    {
        //string
        localVarSingleItemJSON_gba_authentication_info_request = gba_authentication_info_request_convertToJSON(gba_authentication_info_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_gba_authentication_info_request);
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
    cJSON *GenerateGBAAuthenticationVectorsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    gba_authentication_info_result_t *elementToReturn = gba_authentication_info_result_parseFromJSON(GenerateGBAAuthenticationVectorsAPIlocalVarJSON);
    cJSON_Delete(GenerateGBAAuthenticationVectorsAPIlocalVarJSON);
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
    free(localVarToReplace_supi);
    if (localVarSingleItemJSON_gba_authentication_info_request) {
        cJSON_Delete(localVarSingleItemJSON_gba_authentication_info_request);
        localVarSingleItemJSON_gba_authentication_info_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

