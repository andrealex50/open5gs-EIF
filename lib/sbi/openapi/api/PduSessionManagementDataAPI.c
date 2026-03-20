#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PduSessionManagementDataAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Creates and updates the session management data for a UE and for an individual PDU session
//
pdu_session_management_data_t*
PduSessionManagementDataAPI_createOrReplaceSessionManagementData(apiClient_t *apiClient, char * ueId , int pduSessionId , pdu_session_management_data_t * pdu_session_management_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/exposure-data/{ueId}/session-management-data/{pduSessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/exposure-data/{ueId}/session-management-data/{pduSessionId}");


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




    // Body Param
    cJSON *localVarSingleItemJSON_pdu_session_management_data = NULL;
    if (pdu_session_management_data != NULL)
    {
        //string
        localVarSingleItemJSON_pdu_session_management_data = pdu_session_management_data_convertToJSON(pdu_session_management_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_pdu_session_management_data);
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
    //    printf("%s\n","Successful case. The resource has been successfully created and a response body containing a representation of the session management data shall be returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful case. The resource has been successfully updated and a response body containing a representation of the session management data shall be returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Successful case. The resource has been successfully updated and no additional content is to be sent in the response message. ");
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
    cJSON *PduSessionManagementDataAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pdu_session_management_data_t *elementToReturn = pdu_session_management_data_parseFromJSON(PduSessionManagementDataAPIlocalVarJSON);
    cJSON_Delete(PduSessionManagementDataAPIlocalVarJSON);
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
    free(localVarToReplace_pduSessionId);
    if (localVarSingleItemJSON_pdu_session_management_data) {
        cJSON_Delete(localVarSingleItemJSON_pdu_session_management_data);
        localVarSingleItemJSON_pdu_session_management_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Deletes the session management data for a UE and for an individual PDU session
//
void
PduSessionManagementDataAPI_deleteSessionManagementData(apiClient_t *apiClient, char * ueId , int pduSessionId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/exposure-data/{ueId}/session-management-data/{pduSessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/exposure-data/{ueId}/session-management-data/{pduSessionId}");


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
    //    printf("%s\n","Upon success, an empty response body shall be returned");
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    free(localVarToReplace_pduSessionId);

}

// Retrieves the session management data for a UE and for an individual PDU session
//
pdu_session_management_data_t*
PduSessionManagementDataAPI_querySessionManagementData(apiClient_t *apiClient, char * ueId , int pduSessionId , char * ipv4_addr , char * ipv6_prefix , char * dnn , list_t * fields , char * supp_feat )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/exposure-data/{ueId}/session-management-data/{pduSessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/exposure-data/{ueId}/session-management-data/{pduSessionId}");


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
    char *keyQuery_ipv4_addr = NULL;
    char * valueQuery_ipv4_addr = NULL;
    keyValuePair_t *keyPairQuery_ipv4_addr = 0;
    if (ipv4_addr)
    {
        keyQuery_ipv4_addr = strdup("ipv4-addr");
        valueQuery_ipv4_addr = strdup((ipv4_addr));
        keyPairQuery_ipv4_addr = keyValuePair_create(keyQuery_ipv4_addr, valueQuery_ipv4_addr);
        list_addElement(localVarQueryParameters,keyPairQuery_ipv4_addr);
    }

    // query parameters
    char *keyQuery_ipv6_prefix = NULL;
    char * valueQuery_ipv6_prefix = NULL;
    keyValuePair_t *keyPairQuery_ipv6_prefix = 0;
    if (ipv6_prefix)
    {
        keyQuery_ipv6_prefix = strdup("ipv6-prefix");
        valueQuery_ipv6_prefix = strdup((ipv6_prefix));
        keyPairQuery_ipv6_prefix = keyValuePair_create(keyQuery_ipv6_prefix, valueQuery_ipv6_prefix);
        list_addElement(localVarQueryParameters,keyPairQuery_ipv6_prefix);
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
    //    printf("%s\n","The response body contains the session management data");
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
    cJSON *PduSessionManagementDataAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pdu_session_management_data_t *elementToReturn = pdu_session_management_data_parseFromJSON(PduSessionManagementDataAPIlocalVarJSON);
    cJSON_Delete(PduSessionManagementDataAPIlocalVarJSON);
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
    free(localVarToReplace_pduSessionId);
    if(keyQuery_ipv4_addr){
        free(keyQuery_ipv4_addr);
        keyQuery_ipv4_addr = NULL;
    }
    if(valueQuery_ipv4_addr){
        free(valueQuery_ipv4_addr);
        valueQuery_ipv4_addr = NULL;
    }
    if(keyPairQuery_ipv4_addr){
        keyValuePair_free(keyPairQuery_ipv4_addr);
        keyPairQuery_ipv4_addr = NULL;
    }
    if(keyQuery_ipv6_prefix){
        free(keyQuery_ipv6_prefix);
        keyQuery_ipv6_prefix = NULL;
    }
    if(valueQuery_ipv6_prefix){
        free(valueQuery_ipv6_prefix);
        valueQuery_ipv6_prefix = NULL;
    }
    if(keyPairQuery_ipv6_prefix){
        keyValuePair_free(keyPairQuery_ipv6_prefix);
        keyPairQuery_ipv6_prefix = NULL;
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

