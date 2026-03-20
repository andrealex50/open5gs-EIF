#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "EventAMFSubscriptionInfoDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Deletes AMF Subscription Info for an eeSubscription for a group of UEs or any UE
//
void
EventAMFSubscriptionInfoDocumentAPI_removeAmfGroupSubscriptions(apiClient_t *apiClient, char * ueGroupId , char * subsId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/amf-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/amf-subscriptions");


    // Path Params
    long sizeOfPathParams_ueGroupId = strlen(ueGroupId)+3 + strlen(subsId)+3 + strlen("{ ueGroupId }");
    if(ueGroupId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueGroupId = malloc(sizeOfPathParams_ueGroupId);
    sprintf(localVarToReplace_ueGroupId, "{%s}", "ueGroupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueGroupId, ueGroupId);

    // Path Params
    long sizeOfPathParams_subsId = strlen(ueGroupId)+3 + strlen(subsId)+3 + strlen("{ subsId }");
    if(subsId == NULL) {
        goto end;
    }
    char* localVarToReplace_subsId = malloc(sizeOfPathParams_subsId);
    sprintf(localVarToReplace_subsId, "{%s}", "subsId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subsId, subsId);


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
    //    printf("%s\n","Expected response to a successful subscription removal");
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
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_ueGroupId);
    free(localVarToReplace_subsId);

}

// Deletes AMF Subscription Info for an eeSubscription
//
void
EventAMFSubscriptionInfoDocumentAPI_removeAmfSubscriptionsInfo(apiClient_t *apiClient, char * ueId , char * subsId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/amf-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/ee-subscriptions/{subsId}/amf-subscriptions");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_subsId = strlen(ueId)+3 + strlen(subsId)+3 + strlen("{ subsId }");
    if(subsId == NULL) {
        goto end;
    }
    char* localVarToReplace_subsId = malloc(sizeOfPathParams_subsId);
    sprintf(localVarToReplace_subsId, "{%s}", "subsId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subsId, subsId);


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
    //    printf("%s\n","Expected response to a successful subscription removal");
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
    
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_ueId);
    free(localVarToReplace_subsId);

}

