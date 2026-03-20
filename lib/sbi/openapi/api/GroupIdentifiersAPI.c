#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GroupIdentifiersAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Mapping of Group Identifiers
//
group_identifiers_t*
GroupIdentifiersAPI_getGroupIdentifiers(apiClient_t *apiClient, char * ext_group_id , char * int_group_id , int ue_id_ind , char * supported_features , char * af_id , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/group-data/group-identifiers")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/group-data/group-identifiers");




    // header parameters
    char *keyHeader_If_None_Match = NULL;
    char * valueHeader_If_None_Match = 0;
    keyValuePair_t *keyPairHeader_If_None_Match = 0;
    if (If_None_Match) {
        keyHeader_If_None_Match = strdup("If-None-Match");
        valueHeader_If_None_Match = strdup((If_None_Match));
        keyPairHeader_If_None_Match = keyValuePair_create(keyHeader_If_None_Match, valueHeader_If_None_Match);
        list_addElement(localVarHeaderParameters,keyPairHeader_If_None_Match);
    }


    // header parameters
    char *keyHeader_If_Modified_Since = NULL;
    char * valueHeader_If_Modified_Since = 0;
    keyValuePair_t *keyPairHeader_If_Modified_Since = 0;
    if (If_Modified_Since) {
        keyHeader_If_Modified_Since = strdup("If-Modified-Since");
        valueHeader_If_Modified_Since = strdup((If_Modified_Since));
        keyPairHeader_If_Modified_Since = keyValuePair_create(keyHeader_If_Modified_Since, valueHeader_If_Modified_Since);
        list_addElement(localVarHeaderParameters,keyPairHeader_If_Modified_Since);
    }


    // query parameters
    char *keyQuery_ext_group_id = NULL;
    char * valueQuery_ext_group_id = NULL;
    keyValuePair_t *keyPairQuery_ext_group_id = 0;
    if (ext_group_id)
    {
        keyQuery_ext_group_id = strdup("ext-group-id");
        valueQuery_ext_group_id = strdup((ext_group_id));
        keyPairQuery_ext_group_id = keyValuePair_create(keyQuery_ext_group_id, valueQuery_ext_group_id);
        list_addElement(localVarQueryParameters,keyPairQuery_ext_group_id);
    }

    // query parameters
    char *keyQuery_int_group_id = NULL;
    char * valueQuery_int_group_id = NULL;
    keyValuePair_t *keyPairQuery_int_group_id = 0;
    if (int_group_id)
    {
        keyQuery_int_group_id = strdup("int-group-id");
        valueQuery_int_group_id = strdup((int_group_id));
        keyPairQuery_int_group_id = keyValuePair_create(keyQuery_int_group_id, valueQuery_int_group_id);
        list_addElement(localVarQueryParameters,keyPairQuery_int_group_id);
    }

    // query parameters
    char *keyQuery_ue_id_ind = NULL;
    char * valueQuery_ue_id_ind = NULL;
    keyValuePair_t *keyPairQuery_ue_id_ind = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_ue_id_ind = strdup("ue-id-ind");
        valueQuery_ue_id_ind = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_ue_id_ind, MAX_NUMBER_LENGTH, "%d", ue_id_ind);
        keyPairQuery_ue_id_ind = keyValuePair_create(keyQuery_ue_id_ind, valueQuery_ue_id_ind);
        list_addElement(localVarQueryParameters,keyPairQuery_ue_id_ind);
    }

    // query parameters
    char *keyQuery_supported_features = NULL;
    char * valueQuery_supported_features = NULL;
    keyValuePair_t *keyPairQuery_supported_features = 0;
    if (supported_features)
    {
        keyQuery_supported_features = strdup("supported-features");
        valueQuery_supported_features = strdup((supported_features));
        keyPairQuery_supported_features = keyValuePair_create(keyQuery_supported_features, valueQuery_supported_features);
        list_addElement(localVarQueryParameters,keyPairQuery_supported_features);
    }

    // query parameters
    char *keyQuery_af_id = NULL;
    char * valueQuery_af_id = NULL;
    keyValuePair_t *keyPairQuery_af_id = 0;
    if (af_id)
    {
        keyQuery_af_id = strdup("af-id");
        valueQuery_af_id = strdup((af_id));
        keyPairQuery_af_id = keyValuePair_create(keyQuery_af_id, valueQuery_af_id);
        list_addElement(localVarQueryParameters,keyPairQuery_af_id);
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
    //    printf("%s\n","Expected response to a valid request");
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
    cJSON *GroupIdentifiersAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    group_identifiers_t *elementToReturn = group_identifiers_parseFromJSON(GroupIdentifiersAPIlocalVarJSON);
    cJSON_Delete(GroupIdentifiersAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if (keyHeader_If_None_Match) {
        free(keyHeader_If_None_Match);
        keyHeader_If_None_Match = NULL;
    }
    if (valueHeader_If_None_Match) {
        free(valueHeader_If_None_Match);
        valueHeader_If_None_Match = NULL;
    }
    free(keyPairHeader_If_None_Match);
    if (keyHeader_If_Modified_Since) {
        free(keyHeader_If_Modified_Since);
        keyHeader_If_Modified_Since = NULL;
    }
    if (valueHeader_If_Modified_Since) {
        free(valueHeader_If_Modified_Since);
        valueHeader_If_Modified_Since = NULL;
    }
    free(keyPairHeader_If_Modified_Since);
    if(keyQuery_ext_group_id){
        free(keyQuery_ext_group_id);
        keyQuery_ext_group_id = NULL;
    }
    if(valueQuery_ext_group_id){
        free(valueQuery_ext_group_id);
        valueQuery_ext_group_id = NULL;
    }
    if(keyPairQuery_ext_group_id){
        keyValuePair_free(keyPairQuery_ext_group_id);
        keyPairQuery_ext_group_id = NULL;
    }
    if(keyQuery_int_group_id){
        free(keyQuery_int_group_id);
        keyQuery_int_group_id = NULL;
    }
    if(valueQuery_int_group_id){
        free(valueQuery_int_group_id);
        valueQuery_int_group_id = NULL;
    }
    if(keyPairQuery_int_group_id){
        keyValuePair_free(keyPairQuery_int_group_id);
        keyPairQuery_int_group_id = NULL;
    }
    if(keyQuery_ue_id_ind){
        free(keyQuery_ue_id_ind);
        keyQuery_ue_id_ind = NULL;
    }
    if(valueQuery_ue_id_ind){
        free(valueQuery_ue_id_ind);
        valueQuery_ue_id_ind = NULL;
    }
    if(keyPairQuery_ue_id_ind){
        keyValuePair_free(keyPairQuery_ue_id_ind);
        keyPairQuery_ue_id_ind = NULL;
    }
    if(keyQuery_supported_features){
        free(keyQuery_supported_features);
        keyQuery_supported_features = NULL;
    }
    if(valueQuery_supported_features){
        free(valueQuery_supported_features);
        valueQuery_supported_features = NULL;
    }
    if(keyPairQuery_supported_features){
        keyValuePair_free(keyPairQuery_supported_features);
        keyPairQuery_supported_features = NULL;
    }
    if(keyQuery_af_id){
        free(keyQuery_af_id);
        keyQuery_af_id = NULL;
    }
    if(valueQuery_af_id){
        free(valueQuery_af_id);
        valueQuery_af_id = NULL;
    }
    if(keyPairQuery_af_id){
        keyValuePair_free(keyPairQuery_af_id);
        keyPairQuery_af_id = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

