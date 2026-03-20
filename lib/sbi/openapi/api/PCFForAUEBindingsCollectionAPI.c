#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PCFForAUEBindingsCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Individual PCF for a UE binding information
//
pcf_for_ue_binding_t*
PCFForAUEBindingsCollectionAPI_createPCFforUEBinding(apiClient_t *apiClient, pcf_for_ue_binding_t * pcf_for_ue_binding )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pcf-ue-bindings")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pcf-ue-bindings");




    // Body Param
    cJSON *localVarSingleItemJSON_pcf_for_ue_binding = NULL;
    if (pcf_for_ue_binding != NULL)
    {
        //string
        localVarSingleItemJSON_pcf_for_ue_binding = pcf_for_ue_binding_convertToJSON(pcf_for_ue_binding);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_pcf_for_ue_binding);
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
    //    printf("%s\n","The creation of an individual PCF for a UE binding.");
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
    cJSON *PCFForAUEBindingsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pcf_for_ue_binding_t *elementToReturn = pcf_for_ue_binding_parseFromJSON(PCFForAUEBindingsCollectionAPIlocalVarJSON);
    cJSON_Delete(PCFForAUEBindingsCollectionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_pcf_for_ue_binding) {
        cJSON_Delete(localVarSingleItemJSON_pcf_for_ue_binding);
        localVarSingleItemJSON_pcf_for_ue_binding = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Read PCF for a UE Bindings information
//
list_t*
PCFForAUEBindingsCollectionAPI_getPCFForUeBindings(apiClient_t *apiClient, char * supi , char * gpsi , char * supp_feat )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pcf-ue-bindings")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pcf-ue-bindings");




    // query parameters
    char *keyQuery_supi = NULL;
    char * valueQuery_supi = NULL;
    keyValuePair_t *keyPairQuery_supi = 0;
    if (supi)
    {
        keyQuery_supi = strdup("supi");
        valueQuery_supi = strdup((supi));
        keyPairQuery_supi = keyValuePair_create(keyQuery_supi, valueQuery_supi);
        list_addElement(localVarQueryParameters,keyPairQuery_supi);
    }

    // query parameters
    char *keyQuery_gpsi = NULL;
    char * valueQuery_gpsi = NULL;
    keyValuePair_t *keyPairQuery_gpsi = 0;
    if (gpsi)
    {
        keyQuery_gpsi = strdup("gpsi");
        valueQuery_gpsi = strdup((gpsi));
        keyPairQuery_gpsi = keyValuePair_create(keyQuery_gpsi, valueQuery_gpsi);
        list_addElement(localVarQueryParameters,keyPairQuery_gpsi);
    }

    // query parameters
    char *keyQuery_supp_feat = NULL;
    char * valueQuery_supp_feat = NULL;
    keyValuePair_t *keyPairQuery_supp_feat = 0;
    if (supp_feat)
    {
        keyQuery_supp_feat = strdup("supp-feat");
        valueQuery_supp_feat = strdup((supp_feat));
        keyPairQuery_supp_feat = keyValuePair_create(keyQuery_supp_feat, valueQuery_supp_feat);
        list_addElement(localVarQueryParameters,keyPairQuery_supp_feat);
    }
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
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","The individual PCF for a UE binding session binding information resource matching the  query parameter(s) is returned. ");
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","406 Not Acceptable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 414) {
    //    printf("%s\n","URI Too Long");
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
    cJSON *PCFForAUEBindingsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(PCFForAUEBindingsCollectionAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, PCFForAUEBindingsCollectionAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( PCFForAUEBindingsCollectionAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_supi){
        free(keyQuery_supi);
        keyQuery_supi = NULL;
    }
    if(valueQuery_supi){
        free(valueQuery_supi);
        valueQuery_supi = NULL;
    }
    if(keyPairQuery_supi){
        keyValuePair_free(keyPairQuery_supi);
        keyPairQuery_supi = NULL;
    }
    if(keyQuery_gpsi){
        free(keyQuery_gpsi);
        keyQuery_gpsi = NULL;
    }
    if(valueQuery_gpsi){
        free(valueQuery_gpsi);
        valueQuery_gpsi = NULL;
    }
    if(keyPairQuery_gpsi){
        keyValuePair_free(keyPairQuery_gpsi);
        keyPairQuery_gpsi = NULL;
    }
    if(keyQuery_supp_feat){
        free(keyQuery_supp_feat);
        keyQuery_supp_feat = NULL;
    }
    if(valueQuery_supp_feat){
        free(valueQuery_supp_feat);
        valueQuery_supp_feat = NULL;
    }
    if(keyPairQuery_supp_feat){
        keyValuePair_free(keyPairQuery_supp_feat);
        keyPairQuery_supp_feat = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

