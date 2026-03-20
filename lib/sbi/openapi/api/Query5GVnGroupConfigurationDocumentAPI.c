#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "Query5GVnGroupConfigurationDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieve a 5GVnGroup configuration
//
model_5_gvn_group_configuration_t*
Query5GVnGroupConfigurationDocumentAPI_get5GVnGroupConfiguration(apiClient_t *apiClient, char * externalGroupId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
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


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *Query5GVnGroupConfigurationDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    model_5_gvn_group_configuration_t *elementToReturn = model_5_gvn_group_configuration_parseFromJSON(Query5GVnGroupConfigurationDocumentAPIlocalVarJSON);
    cJSON_Delete(Query5GVnGroupConfigurationDocumentAPIlocalVarJSON);
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
    
    free(localVarPath);
    free(localVarToReplace_externalGroupId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

