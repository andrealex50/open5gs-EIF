#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "GPSIToSUPITranslationOrSUPIToGPSITranslationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi

static char* getSupiOrGpsi__ToString(nudm_sdm_getSupiOrGpsi_requested-gpsi-type_e ){
    char *Array[] =  { "NULL", "MSISDN", "EXT_ID", "EXT_GROUP_ID" };
    return Array[];
}

static nudm_sdm_getSupiOrGpsi_requested-gpsi-type_e getSupiOrGpsi__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "MSISDN", "EXT_ID", "EXT_GROUP_ID" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getSupiOrGpsi__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getSupiOrGpsi__convertToJSON(nudm_sdm_getSupiOrGpsi_requested-gpsi-type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getSupiOrGpsi__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudm_sdm_getSupiOrGpsi_requested-gpsi-type_e getSupiOrGpsi__parseFromJSON(cJSON* JSON) {
    nudm_sdm_getSupiOrGpsi_requested-gpsi-type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// retrieve a UE's SUPI or GPSI
//
id_translation_result_t*
GPSIToSUPITranslationOrSUPIToGPSITranslationAPI_getSupiOrGpsi(apiClient_t *apiClient, char * ueId , char * supported_features , char * af_id , app_port_id_t * app_port_id , char * af_service_id , char * mtc_provider_info , gpsi_type_e requested_gpsi_type , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/id-translation-result")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/id-translation-result");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



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

    // query parameters
    char *keyQuery_app_port_id = NULL;
    app_port_id_t * valueQuery_app_port_id ;
    keyValuePair_t *keyPairQuery_app_port_id = 0;
    if (app_port_id)
    {
        keyQuery_app_port_id = strdup("app-port-id");
        valueQuery_app_port_id = (app_port_id);
        keyPairQuery_app_port_id = keyValuePair_create(keyQuery_app_port_id, &valueQuery_app_port_id);
        list_addElement(localVarQueryParameters,keyPairQuery_app_port_id);
    }

    // query parameters
    char *keyQuery_af_service_id = NULL;
    char * valueQuery_af_service_id = NULL;
    keyValuePair_t *keyPairQuery_af_service_id = 0;
    if (af_service_id)
    {
        keyQuery_af_service_id = strdup("af-service-id");
        valueQuery_af_service_id = strdup((af_service_id));
        keyPairQuery_af_service_id = keyValuePair_create(keyQuery_af_service_id, valueQuery_af_service_id);
        list_addElement(localVarQueryParameters,keyPairQuery_af_service_id);
    }

    // query parameters
    char *keyQuery_mtc_provider_info = NULL;
    char * valueQuery_mtc_provider_info = NULL;
    keyValuePair_t *keyPairQuery_mtc_provider_info = 0;
    if (mtc_provider_info)
    {
        keyQuery_mtc_provider_info = strdup("mtc-provider-info");
        valueQuery_mtc_provider_info = strdup((mtc_provider_info));
        keyPairQuery_mtc_provider_info = keyValuePair_create(keyQuery_mtc_provider_info, valueQuery_mtc_provider_info);
        list_addElement(localVarQueryParameters,keyPairQuery_mtc_provider_info);
    }

    // query parameters
    char *keyQuery_requested_gpsi_type = NULL;
    gpsi_type_e valueQuery_requested_gpsi_type ;
    keyValuePair_t *keyPairQuery_requested_gpsi_type = 0;
    if (requested_gpsi_type)
    {
        keyQuery_requested_gpsi_type = strdup("requested-gpsi-type");
        valueQuery_requested_gpsi_type = (requested_gpsi_type);
        keyPairQuery_requested_gpsi_type = keyValuePair_create(keyQuery_requested_gpsi_type, (void *)strdup(getSupiOrGpsi__ToString(
		&valueQuery_requested_gpsi_type)));
        list_addElement(localVarQueryParameters,keyPairQuery_requested_gpsi_type);
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
    cJSON *GPSIToSUPITranslationOrSUPIToGPSITranslationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    id_translation_result_t *elementToReturn = id_translation_result_parseFromJSON(GPSIToSUPITranslationOrSUPIToGPSITranslationAPIlocalVarJSON);
    cJSON_Delete(GPSIToSUPITranslationOrSUPIToGPSITranslationAPIlocalVarJSON);
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
    free(localVarToReplace_ueId);
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
    if(keyQuery_app_port_id){
        free(keyQuery_app_port_id);
        keyQuery_app_port_id = NULL;
    }
    if(keyPairQuery_app_port_id){
        keyValuePair_free(keyPairQuery_app_port_id);
        keyPairQuery_app_port_id = NULL;
    }
    if(keyQuery_af_service_id){
        free(keyQuery_af_service_id);
        keyQuery_af_service_id = NULL;
    }
    if(valueQuery_af_service_id){
        free(valueQuery_af_service_id);
        valueQuery_af_service_id = NULL;
    }
    if(keyPairQuery_af_service_id){
        keyValuePair_free(keyPairQuery_af_service_id);
        keyPairQuery_af_service_id = NULL;
    }
    if(keyQuery_mtc_provider_info){
        free(keyQuery_mtc_provider_info);
        keyQuery_mtc_provider_info = NULL;
    }
    if(valueQuery_mtc_provider_info){
        free(valueQuery_mtc_provider_info);
        valueQuery_mtc_provider_info = NULL;
    }
    if(keyPairQuery_mtc_provider_info){
        keyValuePair_free(keyPairQuery_mtc_provider_info);
        keyPairQuery_mtc_provider_info = NULL;
    }
    if(keyQuery_requested_gpsi_type){
        free(keyQuery_requested_gpsi_type);
        keyQuery_requested_gpsi_type = NULL;
    }
    if(keyPairQuery_requested_gpsi_type){
        keyValuePair_free(keyPairQuery_requested_gpsi_type);
        keyPairQuery_requested_gpsi_type = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

