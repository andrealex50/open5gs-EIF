#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualExposureDataSubscriptionDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Deletes the individual Exposure Data subscription
//
void
IndividualExposureDataSubscriptionDocumentAPI_deleteIndividualExposureDataSubscription(apiClient_t *apiClient, char * subId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/exposure-data/subs-to-notify/{subId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/exposure-data/subs-to-notify/{subId}");


    // Path Params
    long sizeOfPathParams_subId = strlen(subId)+3 + strlen("{ subId }");
    if(subId == NULL) {
        goto end;
    }
    char* localVarToReplace_subId = malloc(sizeOfPathParams_subId);
    sprintf(localVarToReplace_subId, "{%s}", "subId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subId, subId);


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
    //    printf("%s\n","Resource was successfully deleted.");
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
    free(localVarToReplace_subId);

}

// updates a subscription to receive notifications of exposure data changes
//
exposure_data_subscription_t*
IndividualExposureDataSubscriptionDocumentAPI_replaceIndividualExposureDataSubscription(apiClient_t *apiClient, char * subId , exposure_data_subscription_t * exposure_data_subscription )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/exposure-data/subs-to-notify/{subId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/exposure-data/subs-to-notify/{subId}");


    // Path Params
    long sizeOfPathParams_subId = strlen(subId)+3 + strlen("{ subId }");
    if(subId == NULL) {
        goto end;
    }
    char* localVarToReplace_subId = malloc(sizeOfPathParams_subId);
    sprintf(localVarToReplace_subId, "{%s}", "subId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subId, subId);



    // Body Param
    cJSON *localVarSingleItemJSON_exposure_data_subscription = NULL;
    if (exposure_data_subscription != NULL)
    {
        //string
        localVarSingleItemJSON_exposure_data_subscription = exposure_data_subscription_convertToJSON(exposure_data_subscription);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_exposure_data_subscription);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Resource was successfully modified and a body with the modified subscription to notifications about exposure data is returned.. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","The individual subscription resource was successfully modified.");
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
    cJSON *IndividualExposureDataSubscriptionDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    exposure_data_subscription_t *elementToReturn = exposure_data_subscription_parseFromJSON(IndividualExposureDataSubscriptionDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualExposureDataSubscriptionDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_subId);
    if (localVarSingleItemJSON_exposure_data_subscription) {
        cJSON_Delete(localVarSingleItemJSON_exposure_data_subscription);
        localVarSingleItemJSON_exposure_data_subscription = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

