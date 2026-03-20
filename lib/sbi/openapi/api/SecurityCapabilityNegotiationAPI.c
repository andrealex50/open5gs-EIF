#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SecurityCapabilityNegotiationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Security Capability Negotiation
//
sec_negotiate_rsp_data_t*
SecurityCapabilityNegotiationAPI_postExchangeCapability(apiClient_t *apiClient, sec_negotiate_req_data_t * sec_negotiate_req_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/exchange-capability")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/exchange-capability");




    // Body Param
    cJSON *localVarSingleItemJSON_sec_negotiate_req_data = NULL;
    if (sec_negotiate_req_data != NULL)
    {
        //string
        localVarSingleItemJSON_sec_negotiate_req_data = sec_negotiate_req_data_convertToJSON(sec_negotiate_req_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sec_negotiate_req_data);
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
    //    printf("%s\n","OK (Successful negitiation of security capabilities)");
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
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *SecurityCapabilityNegotiationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sec_negotiate_rsp_data_t *elementToReturn = sec_negotiate_rsp_data_parseFromJSON(SecurityCapabilityNegotiationAPIlocalVarJSON);
    cJSON_Delete(SecurityCapabilityNegotiationAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_sec_negotiate_req_data) {
        cJSON_Delete(localVarSingleItemJSON_sec_negotiate_req_data);
        localVarSingleItemJSON_sec_negotiate_req_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

