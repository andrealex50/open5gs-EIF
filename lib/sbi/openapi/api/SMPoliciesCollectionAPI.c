#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SMPoliciesCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Individual SM Policy
//
sm_policy_decision_t*
SMPoliciesCollectionAPI_createSMPolicy(apiClient_t *apiClient, sm_policy_context_data_t * sm_policy_context_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-policies")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-policies");




    // Body Param
    cJSON *localVarSingleItemJSON_sm_policy_context_data = NULL;
    if (sm_policy_context_data != NULL)
    {
        //string
        localVarSingleItemJSON_sm_policy_context_data = sm_policy_context_data_convertToJSON(sm_policy_context_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sm_policy_context_data);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
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
    //if (apiClient->response_code == 411) {
    //    printf("%s\n","Length Required");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","Payload Too Large");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 415) {
    //    printf("%s\n","Unsupported Media Type");
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
    cJSON *SMPoliciesCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_policy_decision_t *elementToReturn = sm_policy_decision_parseFromJSON(SMPoliciesCollectionAPIlocalVarJSON);
    cJSON_Delete(SMPoliciesCollectionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_sm_policy_context_data) {
        cJSON_Delete(localVarSingleItemJSON_sm_policy_context_data);
        localVarSingleItemJSON_sm_policy_context_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

