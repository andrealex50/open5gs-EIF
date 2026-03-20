#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RoamingInformationUpdateAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Update the Roaming Information
//
roaming_info_update_t*
RoamingInformationUpdateAPI_updateRoamingInformation(apiClient_t *apiClient, char * ueId , roaming_info_update_t * roaming_info_update )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/registrations/amf-3gpp-access/roaming-info-update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/registrations/amf-3gpp-access/roaming-info-update");


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
    //    printf("%s\n","Created");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No content");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","Forbidden");
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
    cJSON *RoamingInformationUpdateAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    roaming_info_update_t *elementToReturn = roaming_info_update_parseFromJSON(RoamingInformationUpdateAPIlocalVarJSON);
    cJSON_Delete(RoamingInformationUpdateAPIlocalVarJSON);
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

