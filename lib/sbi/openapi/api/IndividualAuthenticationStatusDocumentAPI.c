#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualAuthenticationStatusDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// To store the individual Authentication Status data of a UE
//
void
IndividualAuthenticationStatusDocumentAPI_createIndividualAuthenticationStatus(apiClient_t *apiClient, char * ueId , char * servingNetworkName , auth_event_t * auth_event )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/authentication-data/authentication-status/{servingNetworkName}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/authentication-data/authentication-status/{servingNetworkName}");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(servingNetworkName)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_servingNetworkName = strlen(ueId)+3 + strlen(servingNetworkName)+3 + strlen("{ servingNetworkName }");
    if(servingNetworkName == NULL) {
        goto end;
    }
    char* localVarToReplace_servingNetworkName = malloc(sizeOfPathParams_servingNetworkName);
    sprintf(localVarToReplace_servingNetworkName, "{%s}", "servingNetworkName");

    localVarPath = strReplace(localVarPath, localVarToReplace_servingNetworkName, servingNetworkName);



    // Body Param
    cJSON *localVarSingleItemJSON_auth_event = NULL;
    if (auth_event != NULL)
    {
        //string
        localVarSingleItemJSON_auth_event = auth_event_convertToJSON(auth_event);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_auth_event);
    }
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
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_ueId);
    free(localVarToReplace_servingNetworkName);
    if (localVarSingleItemJSON_auth_event) {
        cJSON_Delete(localVarSingleItemJSON_auth_event);
        localVarSingleItemJSON_auth_event = NULL;
    }
    free(localVarBodyParameters);

}

