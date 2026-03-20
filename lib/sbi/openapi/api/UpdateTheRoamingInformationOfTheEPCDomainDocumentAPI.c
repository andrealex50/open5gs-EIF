#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Update the Roaming Information of the EPC domain
//
roaming_info_update_t*
UpdateTheRoamingInformationOfTheEPCDomainDocumentAPI_updateRoamingInformation(apiClient_t *apiClient, char * ueId , roaming_info_update_t * roaming_info_update )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/context-data/roaming-information")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/context-data/roaming-information");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



    // Body Param
    cJSON *localVarSingleItemJSON_roaming_info_update = NULL;
    if (roaming_info_update != NULL)
    {
        //string
        localVarSingleItemJSON_roaming_info_update = roaming_info_update_convertToJSON(roaming_info_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_roaming_info_update);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Created");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Upon success, an empty response body shall be returned");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unexpected error");
    //}
    //nonprimitive not container
    cJSON *UpdateTheRoamingInformationOfTheEPCDomainDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    roaming_info_update_t *elementToReturn = roaming_info_update_parseFromJSON(UpdateTheRoamingInformationOfTheEPCDomainDocumentAPIlocalVarJSON);
    cJSON_Delete(UpdateTheRoamingInformationOfTheEPCDomainDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_ueId);
    if (localVarSingleItemJSON_roaming_info_update) {
        cJSON_Delete(localVarSingleItemJSON_roaming_info_update);
        localVarSingleItemJSON_roaming_info_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

