#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PlmnUePolicySetDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve the UE policy set data for an H-PLMN
//
ue_policy_set_t*
PlmnUePolicySetDocumentAPI_readPlmnUePolicySet(apiClient_t *apiClient, char * plmnId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/plmns/{plmnId}/ue-policy-set")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/plmns/{plmnId}/ue-policy-set");


    // Path Params
    long sizeOfPathParams_plmnId = strlen(plmnId)+3 + strlen("{ plmnId }");
    if(plmnId == NULL) {
        goto end;
    }
    char* localVarToReplace_plmnId = malloc(sizeOfPathParams_plmnId);
    sprintf(localVarToReplace_plmnId, "{%s}", "plmnId");

    localVarPath = strReplace(localVarPath, localVarToReplace_plmnId, plmnId);


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
    //    printf("%s\n","Upon success, a response body containing UE policies shall be returned.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","406 Not Acceptable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 412) {
    //    printf("%s\n","Precondition Failed");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too Many Requests");
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
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *PlmnUePolicySetDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    ue_policy_set_t *elementToReturn = ue_policy_set_parseFromJSON(PlmnUePolicySetDocumentAPIlocalVarJSON);
    cJSON_Delete(PlmnUePolicySetDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_plmnId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

