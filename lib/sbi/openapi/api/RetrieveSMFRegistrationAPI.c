#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RetrieveSMFRegistrationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// get an SMF registration
//
smf_registration_t*
RetrieveSMFRegistrationAPI_retrieveSmfRegistration(apiClient_t *apiClient, char * ueId , int pduSessionId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
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
    cJSON *RetrieveSMFRegistrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    smf_registration_t *elementToReturn = smf_registration_parseFromJSON(RetrieveSMFRegistrationAPIlocalVarJSON);
    cJSON_Delete(RetrieveSMFRegistrationAPIlocalVarJSON);
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
    free(localVarToReplace_pduSessionId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

