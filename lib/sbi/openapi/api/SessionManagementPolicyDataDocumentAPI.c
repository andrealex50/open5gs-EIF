#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SessionManagementPolicyDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieves the session management policy data for a subscriber
//
sm_policy_data_t*
SessionManagementPolicyDataDocumentAPI_readSessionManagementPolicyData(apiClient_t *apiClient, char * ueId , snssai_t * snssai , char * dnn , list_t * fields , char * supp_feat )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/ues/{ueId}/sm-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/ues/{ueId}/sm-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // query parameters
    char *keyQuery_snssai = NULL;
    snssai_t * valueQuery_snssai ;
    keyValuePair_t *keyPairQuery_snssai = 0;
    if (snssai)
    {
        keyQuery_snssai = strdup("snssai");
        valueQuery_snssai = (snssai);
        keyPairQuery_snssai = keyValuePair_create(keyQuery_snssai, &valueQuery_snssai);
        list_addElement(localVarQueryParameters,keyPairQuery_snssai);
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
    if (fields)
    {
        list_addElement(localVarQueryParameters,fields);
    }

    // query parameters
    char *keyQuery_supp_feat = NULL;
    char * valueQuery_supp_feat = NULL;
    keyValuePair_t *keyPairQuery_supp_feat = 0;
    if (supp_feat)
    {
        keyQuery_supp_feat = strdup("supp-feat");
        valueQuery_supp_feat = strdup((supp_feat));
        keyPairQuery_supp_feat = keyValuePair_create(keyQuery_supp_feat, valueQuery_supp_feat);
        list_addElement(localVarQueryParameters,keyPairQuery_supp_feat);
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
    //    printf("%s\n","Upon success, a response body containing SmPolicyData shall be returned.");
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
    //if (apiClient->response_code == 414) {
    //    printf("%s\n","URI Too Long");
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
    cJSON *SessionManagementPolicyDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_policy_data_t *elementToReturn = sm_policy_data_parseFromJSON(SessionManagementPolicyDataDocumentAPIlocalVarJSON);
    cJSON_Delete(SessionManagementPolicyDataDocumentAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    if(keyQuery_snssai){
        free(keyQuery_snssai);
        keyQuery_snssai = NULL;
    }
    if(keyPairQuery_snssai){
        keyValuePair_free(keyPairQuery_snssai);
        keyPairQuery_snssai = NULL;
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
    if(keyQuery_supp_feat){
        free(keyQuery_supp_feat);
        keyQuery_supp_feat = NULL;
    }
    if(valueQuery_supp_feat){
        free(valueQuery_supp_feat);
        valueQuery_supp_feat = NULL;
    }
    if(keyPairQuery_supp_feat){
        keyValuePair_free(keyPairQuery_supp_feat);
        keyPairQuery_supp_feat = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Modify the session management policy data for a subscriber
//
sm_policy_data_t*
SessionManagementPolicyDataDocumentAPI_updateSessionManagementPolicyData(apiClient_t *apiClient, char * ueId , sm_policy_data_patch_t * sm_policy_data_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/ues/{ueId}/sm-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/ues/{ueId}/sm-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // Body Param
    cJSON *localVarSingleItemJSON_sm_policy_data_patch = NULL;
    if (sm_policy_data_patch != NULL)
    {
        //string
        localVarSingleItemJSON_sm_policy_data_patch = sm_policy_data_patch_convertToJSON(sm_policy_data_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sm_policy_data_patch);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/merge-patch+json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Successful case. The resource has been successfully updated and no additional content is to be sent in the response message. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Expected response to a valid request");
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
    cJSON *SessionManagementPolicyDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_policy_data_t *elementToReturn = sm_policy_data_parseFromJSON(SessionManagementPolicyDataDocumentAPIlocalVarJSON);
    cJSON_Delete(SessionManagementPolicyDataDocumentAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_sm_policy_data_patch) {
        cJSON_Delete(localVarSingleItemJSON_sm_policy_data_patch);
        localVarSingleItemJSON_sm_policy_data_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

