#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "NWDAFRegistrationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// register as NWDAF
//
nwdaf_registration_t*
NWDAFRegistrationAPI_nwdafRegistration(apiClient_t *apiClient, char * ueId , char * nwdafRegistrationId , nwdaf_registration_t * nwdaf_registration )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/registrations/nwdaf-registrations/{nwdafRegistrationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/registrations/nwdaf-registrations/{nwdafRegistrationId}");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(nwdafRegistrationId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_nwdafRegistrationId = strlen(ueId)+3 + strlen(nwdafRegistrationId)+3 + strlen("{ nwdafRegistrationId }");
    if(nwdafRegistrationId == NULL) {
        goto end;
    }
    char* localVarToReplace_nwdafRegistrationId = malloc(sizeOfPathParams_nwdafRegistrationId);
    sprintf(localVarToReplace_nwdafRegistrationId, "{%s}", "nwdafRegistrationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_nwdafRegistrationId, nwdafRegistrationId);



    // Body Param
    cJSON *localVarSingleItemJSON_nwdaf_registration = NULL;
    if (nwdaf_registration != NULL)
    {
        //string
        localVarSingleItemJSON_nwdaf_registration = nwdaf_registration_convertToJSON(nwdaf_registration);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_nwdaf_registration);
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
    cJSON *NWDAFRegistrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    nwdaf_registration_t *elementToReturn = nwdaf_registration_parseFromJSON(NWDAFRegistrationAPIlocalVarJSON);
    cJSON_Delete(NWDAFRegistrationAPIlocalVarJSON);
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
    free(localVarToReplace_nwdafRegistrationId);
    if (localVarSingleItemJSON_nwdaf_registration) {
        cJSON_Delete(localVarSingleItemJSON_nwdaf_registration);
        localVarSingleItemJSON_nwdaf_registration = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

