#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SMSFDeregistrationFor3GPPAccessAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// delete the SMSF registration for 3GPP access
//
void
SMSFDeregistrationFor3GPPAccessAPI_call3GppSmsfDeregistration(apiClient_t *apiClient, char * ueId , char * smsf_set_id , char * If_Match )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/registrations/smsf-3gpp-access")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/registrations/smsf-3gpp-access");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // header parameters
    char *keyHeader_If_Match = NULL;
    char * valueHeader_If_Match = 0;
    keyValuePair_t *keyPairHeader_If_Match = 0;
    if (If_Match) {
        keyHeader_If_Match = strdup("If-Match");
        valueHeader_If_Match = strdup((If_Match));
        keyPairHeader_If_Match = keyValuePair_create(keyHeader_If_Match, valueHeader_If_Match);
        list_addElement(localVarHeaderParameters,keyPairHeader_If_Match);
    }


    // query parameters
    char *keyQuery_smsf_set_id = NULL;
    char * valueQuery_smsf_set_id = NULL;
    keyValuePair_t *keyPairQuery_smsf_set_id = 0;
    if (smsf_set_id)
    {
        keyQuery_smsf_set_id = strdup("smsf-set-id");
        valueQuery_smsf_set_id = strdup((smsf_set_id));
        keyPairQuery_smsf_set_id = keyValuePair_create(keyQuery_smsf_set_id, valueQuery_smsf_set_id);
        list_addElement(localVarQueryParameters,keyPairQuery_smsf_set_id);
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
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    if (keyHeader_If_Match) {
        free(keyHeader_If_Match);
        keyHeader_If_Match = NULL;
    }
    if (valueHeader_If_Match) {
        free(valueHeader_If_Match);
        valueHeader_If_Match = NULL;
    }
    free(keyPairHeader_If_Match);
    if(keyQuery_smsf_set_id){
        free(keyQuery_smsf_set_id);
        keyQuery_smsf_set_id = NULL;
    }
    if(valueQuery_smsf_set_id){
        free(valueQuery_smsf_set_id);
        valueQuery_smsf_set_id = NULL;
    }
    if(keyPairQuery_smsf_set_id){
        keyValuePair_free(keyPairQuery_smsf_set_id);
        keyPairQuery_smsf_set_id = NULL;
    }
    if(keyQuery_smsf_set_id){
        free(keyQuery_smsf_set_id);
        keyQuery_smsf_set_id = NULL;
    }
    if(keyPairQuery_smsf_set_id){
        keyValuePair_free(keyPairQuery_smsf_set_id);
        keyPairQuery_smsf_set_id = NULL;
    }

}

