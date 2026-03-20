#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "Class5GVnGroupConfigurationDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create an individual 5G VN Grouop
//
model_5_gvn_group_configuration_t*
Class5GVnGroupConfigurationDocumentAPI_create5GVnGroup(apiClient_t *apiClient, char * externalGroupId , model_5_gvn_group_configuration_t * model_5_gvn_group_configuration )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
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



    // Body Param
    cJSON *localVarSingleItemJSON_model_5_gvn_group_configuration = NULL;
    if (model_5_gvn_group_configuration != NULL)
    {
        //string
        localVarSingleItemJSON_model_5_gvn_group_configuration = model_5_gvn_group_configuration_convertToJSON(model_5_gvn_group_configuration);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_model_5_gvn_group_configuration);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *Class5GVnGroupConfigurationDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    model_5_gvn_group_configuration_t *elementToReturn = model_5_gvn_group_configuration_parseFromJSON(Class5GVnGroupConfigurationDocumentAPIlocalVarJSON);
    cJSON_Delete(Class5GVnGroupConfigurationDocumentAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_model_5_gvn_group_configuration) {
        cJSON_Delete(localVarSingleItemJSON_model_5_gvn_group_configuration);
        localVarSingleItemJSON_model_5_gvn_group_configuration = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

