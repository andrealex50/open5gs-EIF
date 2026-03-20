#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "AMFSubscriptionInfoDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create AmfSubscriptions for an individual ee subscriptions of a UE
//
list_t*
AMFSubscriptionInfoDocumentAPI_createAMFSubscriptions(apiClient_t *apiClient, char * ueId , char * subsId , list_t * amf_subscription_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
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



    // Body Param
    //notstring
    cJSON *localVar_amf_subscription_info = NULL;
    cJSON *localVarItemJSON_amf_subscription_info = NULL;
    cJSON *localVarSingleItemJSON_amf_subscription_info = NULL;
    if (amf_subscription_info != NULL)
    {
        localVarItemJSON_amf_subscription_info = cJSON_CreateObject();
        localVarSingleItemJSON_amf_subscription_info = cJSON_AddArrayToObject(localVarItemJSON_amf_subscription_info, "amf_subscription_info");
        if (localVarSingleItemJSON_amf_subscription_info == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *amf_subscription_infoBodyListEntry;
    list_ForEach(amf_subscription_infoBodyListEntry, amf_subscription_info)
    {
        localVar_amf_subscription_info = amf_subscription_info_convertToJSON(amf_subscription_infoBodyListEntry->data);
        if(localVar_amf_subscription_info == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_amf_subscription_info, localVar_amf_subscription_info);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_amf_subscription_info);
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
    cJSON *AMFSubscriptionInfoDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(AMFSubscriptionInfoDocumentAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, AMFSubscriptionInfoDocumentAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( AMFSubscriptionInfoDocumentAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
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
    free(localVarToReplace_subsId);
    if (localVarItemJSON_amf_subscription_info) {
        cJSON_Delete(localVarItemJSON_amf_subscription_info);
        localVarItemJSON_amf_subscription_info = NULL;
    }
    if (localVarSingleItemJSON_amf_subscription_info) {
        cJSON_Delete(localVarSingleItemJSON_amf_subscription_info);
        localVarSingleItemJSON_amf_subscription_info = NULL;
    }
    if (localVar_amf_subscription_info) {
        cJSON_Delete(localVar_amf_subscription_info);
        localVar_amf_subscription_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

