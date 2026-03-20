#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "Delete5GVnGroupAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Deletes the 5GVnGroup
//
void
Delete5GVnGroupAPI_delete5GVnGroup(apiClient_t *apiClient, char * externalGroupId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/group-data/5g-vn-groups/{externalGroupId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/group-data/5g-vn-groups/{externalGroupId}");


    // Path Params
    long sizeOfPathParams_externalGroupId = strlen(externalGroupId)+3 + strlen("{ externalGroupId }");
    if(externalGroupId == NULL) {
        goto end;
    }
    char* localVarToReplace_externalGroupId = malloc(sizeOfPathParams_externalGroupId);
    sprintf(localVarToReplace_externalGroupId, "{%s}", "externalGroupId");

    localVarPath = strReplace(localVarPath, localVarToReplace_externalGroupId, externalGroupId);


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
    //    printf("%s\n","Expected response to a successful group removal");
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
    free(localVarToReplace_externalGroupId);

}

