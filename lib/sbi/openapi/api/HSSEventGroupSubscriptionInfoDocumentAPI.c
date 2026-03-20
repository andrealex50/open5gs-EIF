#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "HSSEventGroupSubscriptionInfoDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create HSS Subscription Info for a group of UEs
//
hss_subscription_info_t*
HSSEventGroupSubscriptionInfoDocumentAPI_createHssGroupSubscriptions(apiClient_t *apiClient, char * externalGroupId , char * subsId , hss_subscription_info_t * hss_subscription_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/hss-subscriptions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/group-data/{ueGroupId}/ee-subscriptions/{subsId}/hss-subscriptions");


    // Path Params
    long sizeOfPathParams_externalGroupId = strlen(externalGroupId)+3 + strlen(subsId)+3 + strlen("{ externalGroupId }");
    if(externalGroupId == NULL) {
        goto end;
    }
    char* localVarToReplace_externalGroupId = malloc(sizeOfPathParams_externalGroupId);
    sprintf(localVarToReplace_externalGroupId, "{%s}", "externalGroupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_externalGroupId, externalGroupId);

    // Path Params
    long sizeOfPathParams_subsId = strlen(externalGroupId)+3 + strlen(subsId)+3 + strlen("{ subsId }");
    if(subsId == NULL) {
        goto end;
    }
    char* localVarToReplace_subsId = malloc(sizeOfPathParams_subsId);
    sprintf(localVarToReplace_subsId, "{%s}", "subsId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subsId, subsId);



    // Body Param
    cJSON *localVarSingleItemJSON_hss_subscription_info = NULL;
    if (hss_subscription_info != NULL)
    {
        //string
        localVarSingleItemJSON_hss_subscription_info = hss_subscription_info_convertToJSON(hss_subscription_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_hss_subscription_info);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Upon success, an empty response body shall be returned");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Upon successful creation, the created resource shall be returned");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *HSSEventGroupSubscriptionInfoDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    hss_subscription_info_t *elementToReturn = hss_subscription_info_parseFromJSON(HSSEventGroupSubscriptionInfoDocumentAPIlocalVarJSON);
    cJSON_Delete(HSSEventGroupSubscriptionInfoDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_externalGroupId);
    free(localVarToReplace_subsId);
    if (localVarSingleItemJSON_hss_subscription_info) {
        cJSON_Delete(localVarSingleItemJSON_hss_subscription_info);
        localVarSingleItemJSON_hss_subscription_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

