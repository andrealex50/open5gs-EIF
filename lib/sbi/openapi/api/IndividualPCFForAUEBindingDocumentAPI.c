#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualPCFForAUEBindingDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Delete an existing Individual PCF for a UE Binding information
//
void
IndividualPCFForAUEBindingDocumentAPI_deleteIndPCFforUEBinding(apiClient_t *apiClient, char * bindingId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pcf-ue-bindings/{bindingId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pcf-ue-bindings/{bindingId}");


    // Path Params
    long sizeOfPathParams_bindingId = strlen(bindingId)+3 + strlen("{ bindingId }");
    if(bindingId == NULL) {
        goto end;
    }
    char* localVarToReplace_bindingId = malloc(sizeOfPathParams_bindingId);
    sprintf(localVarToReplace_bindingId, "{%s}", "bindingId");

    localVarPath = strReplace(localVarPath, localVarToReplace_bindingId, bindingId);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
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
    //    printf("%s\n","No Content. The Individual PCF for a UE binding information resource is deleted. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
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
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too Many Requests");
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
    
    free(localVarPath);
    free(localVarToReplace_bindingId);

}

// Update an existing Individual PCF for a UE Binding information
//
pcf_for_ue_binding_t*
IndividualPCFForAUEBindingDocumentAPI_updateIndPCFforUEBinding(apiClient_t *apiClient, char * bindingId , pcf_for_ue_binding_patch_t * pcf_for_ue_binding_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pcf-ue-bindings/{bindingId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pcf-ue-bindings/{bindingId}");


    // Path Params
    long sizeOfPathParams_bindingId = strlen(bindingId)+3 + strlen("{ bindingId }");
    if(bindingId == NULL) {
        goto end;
    }
    char* localVarToReplace_bindingId = malloc(sizeOfPathParams_bindingId);
    sprintf(localVarToReplace_bindingId, "{%s}", "bindingId");

    localVarPath = strReplace(localVarPath, localVarToReplace_bindingId, bindingId);



    // Body Param
    cJSON *localVarSingleItemJSON_pcf_for_ue_binding_patch = NULL;
    if (pcf_for_ue_binding_patch != NULL)
    {
        //string
        localVarSingleItemJSON_pcf_for_ue_binding_patch = pcf_for_ue_binding_patch_convertToJSON(pcf_for_ue_binding_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_pcf_for_ue_binding_patch);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/merge-patch+json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PATCH");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK. Successful update of the PCF for a PDU Session binding.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","Unauthorized");
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
    //if (apiClient->response_code == 411) {
    //    printf("%s\n","Length Required");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 413) {
    //    printf("%s\n","Payload Too Large");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 415) {
    //    printf("%s\n","Unsupported Media Type");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too Many Requests");
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
    //nonprimitive not container
    cJSON *IndividualPCFForAUEBindingDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pcf_for_ue_binding_t *elementToReturn = pcf_for_ue_binding_parseFromJSON(IndividualPCFForAUEBindingDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualPCFForAUEBindingDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_bindingId);
    if (localVarSingleItemJSON_pcf_for_ue_binding_patch) {
        cJSON_Delete(localVarSingleItemJSON_pcf_for_ue_binding_patch);
        localVarSingleItemJSON_pcf_for_ue_binding_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

