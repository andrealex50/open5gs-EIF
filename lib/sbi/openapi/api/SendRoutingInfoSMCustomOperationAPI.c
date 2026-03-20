#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SendRoutingInfoSMCustomOperationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retreive addressing information for SMS delivery
//
routing_info_sm_response_t*
SendRoutingInfoSMCustomOperationAPI_sendRoutingInfoSm(apiClient_t *apiClient, char * ueId , routing_info_sm_request_t * routing_info_sm_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/registrations/send-routing-info-sm")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/registrations/send-routing-info-sm");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // Body Param
    cJSON *localVarSingleItemJSON_routing_info_sm_request = NULL;
    if (routing_info_sm_request != NULL)
    {
        //string
        localVarSingleItemJSON_routing_info_sm_request = routing_info_sm_request_convertToJSON(routing_info_sm_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_routing_info_sm_request);
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
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *SendRoutingInfoSMCustomOperationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    routing_info_sm_response_t *elementToReturn = routing_info_sm_response_parseFromJSON(SendRoutingInfoSMCustomOperationAPIlocalVarJSON);
    cJSON_Delete(SendRoutingInfoSMCustomOperationAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_routing_info_sm_request) {
        cJSON_Delete(localVarSingleItemJSON_routing_info_sm_request);
        localVarSingleItemJSON_routing_info_sm_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

