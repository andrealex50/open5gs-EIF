#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SubscriptionCreationForSharedDataAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// subscribe to notifications for shared data
//
sdm_subscription_t*
SubscriptionCreationForSharedDataAPI_subscribeToSharedData(apiClient_t *apiClient, sdm_subscription_t * sdm_subscription )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/shared-data-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/shared-data-subscriptions");




    // Body Param
    cJSON *localVarSingleItemJSON_sdm_subscription = NULL;
    if (sdm_subscription != NULL)
    {
        //string
        localVarSingleItemJSON_sdm_subscription = sdm_subscription_convertToJSON(sdm_subscription);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sdm_subscription);
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
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *SubscriptionCreationForSharedDataAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sdm_subscription_t *elementToReturn = sdm_subscription_parseFromJSON(SubscriptionCreationForSharedDataAPIlocalVarJSON);
    cJSON_Delete(SubscriptionCreationForSharedDataAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_sdm_subscription) {
        cJSON_Delete(localVarSingleItemJSON_sdm_subscription);
        localVarSingleItemJSON_sdm_subscription = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

