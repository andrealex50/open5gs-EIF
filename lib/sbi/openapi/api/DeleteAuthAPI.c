#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "DeleteAuthAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Deletes the authentication result in the UDM
//
void
DeleteAuthAPI_deleteAuth(apiClient_t *apiClient, char * supi , char * authEventId , auth_event_t * auth_event )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supi}/auth-events/{authEventId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supi}/auth-events/{authEventId}");


    // Path Params
    long sizeOfPathParams_supi = strlen(supi)+3 + strlen(authEventId)+3 + strlen("{ supi }");
    if(supi == NULL) {
        goto end;
    }
    char* localVarToReplace_supi = malloc(sizeOfPathParams_supi);
    sprintf(localVarToReplace_supi, "{%s}", "supi");

    localVarPath = strReplace(localVarPath, localVarToReplace_supi, supi);

    // Path Params
    long sizeOfPathParams_authEventId = strlen(supi)+3 + strlen(authEventId)+3 + strlen("{ authEventId }");
    if(authEventId == NULL) {
        goto end;
    }
    char* localVarToReplace_authEventId = malloc(sizeOfPathParams_authEventId);
    sprintf(localVarToReplace_authEventId, "{%s}", "authEventId");

    localVarPath = strReplace(localVarPath, localVarToReplace_authEventId, authEventId);



    // Body Param
    cJSON *localVarSingleItemJSON_auth_event = NULL;
    if (auth_event != NULL)
    {
        //string
        localVarSingleItemJSON_auth_event = auth_event_convertToJSON(auth_event);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_auth_event);
    }
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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Expected response to a successful authentication result removal");
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_supi);
    free(localVarToReplace_authEventId);
    if (localVarSingleItemJSON_auth_event) {
        cJSON_Delete(localVarSingleItemJSON_auth_event);
        localVarSingleItemJSON_auth_event = NULL;
    }
    free(localVarBodyParameters);

}

