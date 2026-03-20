#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SMFDeregistrationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// delete an SMF registration
//
void
SMFDeregistrationAPI_smfDeregistration(apiClient_t *apiClient, char * ueId , int pduSessionId , char * smf_set_id , char * smf_instance_id )
{
    list_t    *localVarQueryParameters = list_createList();
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




    // query parameters
    char *keyQuery_smf_set_id = NULL;
    char * valueQuery_smf_set_id = NULL;
    keyValuePair_t *keyPairQuery_smf_set_id = 0;
    if (smf_set_id)
    {
        keyQuery_smf_set_id = strdup("smf-set-id");
        valueQuery_smf_set_id = strdup((smf_set_id));
        keyPairQuery_smf_set_id = keyValuePair_create(keyQuery_smf_set_id, valueQuery_smf_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_smf_set_id);
    }

    // query parameters
    char *keyQuery_smf_instance_id = NULL;
    char * valueQuery_smf_instance_id = NULL;
    keyValuePair_t *keyPairQuery_smf_instance_id = 0;
    if (smf_instance_id)
    {
        keyQuery_smf_instance_id = strdup("smf-instance-id");
        valueQuery_smf_instance_id = strdup((smf_instance_id));
        keyPairQuery_smf_instance_id = keyValuePair_create(keyQuery_smf_instance_id, valueQuery_smf_instance_id);
        list_addElement(localVarQueryParameters,keyPairQuery_smf_instance_id);
    }
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
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
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","Not Found");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","Unprocessable Request");
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    free(localVarToReplace_pduSessionId);
    if(keyQuery_smf_set_id){
        free(keyQuery_smf_set_id);
        keyQuery_smf_set_id = NULL;
    }
    if(valueQuery_smf_set_id){
        free(valueQuery_smf_set_id);
        valueQuery_smf_set_id = NULL;
    }
    if(keyPairQuery_smf_set_id){
        keyValuePair_free(keyPairQuery_smf_set_id);
        keyPairQuery_smf_set_id = NULL;
    }
    if(keyQuery_smf_set_id){
        free(keyQuery_smf_set_id);
        keyQuery_smf_set_id = NULL;
    }
    if(keyPairQuery_smf_set_id){
        keyValuePair_free(keyPairQuery_smf_set_id);
        keyPairQuery_smf_set_id = NULL;
    }
    if(keyQuery_smf_instance_id){
        free(keyQuery_smf_instance_id);
        keyQuery_smf_instance_id = NULL;
    }
    if(valueQuery_smf_instance_id){
        free(valueQuery_smf_instance_id);
        valueQuery_smf_instance_id = NULL;
    }
    if(keyPairQuery_smf_instance_id){
        keyValuePair_free(keyPairQuery_smf_instance_id);
        keyPairQuery_smf_instance_id = NULL;
    }
    if(keyQuery_smf_instance_id){
        free(keyQuery_smf_instance_id);
        keyQuery_smf_instance_id = NULL;
    }
    if(keyPairQuery_smf_instance_id){
        keyValuePair_free(keyPairQuery_smf_instance_id);
        keyPairQuery_smf_instance_id = NULL;
    }

}

