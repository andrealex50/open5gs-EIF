#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "TriggerSORInfoUpdateAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Nudm_Sdm custom operation to trigger SOR info update
//
sor_info_t*
TriggerSORInfoUpdateAPI_updateSORInfo(apiClient_t *apiClient, char * supi , sor_update_info_t * sor_update_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supi}/am-data/update-sor")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supi}/am-data/update-sor");


    // Path Params
    long sizeOfPathParams_supi = strlen(supi)+3 + strlen("{ supi }");
    if(supi == NULL) {
        goto end;
    }
    char* localVarToReplace_supi = malloc(sizeOfPathParams_supi);
    sprintf(localVarToReplace_supi, "{%s}", "supi");

    localVarPath = strReplace(localVarPath, localVarToReplace_supi, supi);



    // Body Param
    cJSON *localVarSingleItemJSON_sor_update_info = NULL;
    if (sor_update_info != NULL)
    {
        //string
        localVarSingleItemJSON_sor_update_info = sor_update_info_convertToJSON(sor_update_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sor_update_info);
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
    //if (apiClient->response_code == 200) {
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
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *TriggerSORInfoUpdateAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sor_info_t *elementToReturn = sor_info_parseFromJSON(TriggerSORInfoUpdateAPIlocalVarJSON);
    cJSON_Delete(TriggerSORInfoUpdateAPIlocalVarJSON);
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
    free(localVarToReplace_supi);
    if (localVarSingleItemJSON_sor_update_info) {
        cJSON_Delete(localVarSingleItemJSON_sor_update_info);
        localVarSingleItemJSON_sor_update_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

