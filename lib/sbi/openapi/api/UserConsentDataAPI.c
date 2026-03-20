#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "UserConsentDataAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for UserConsentDataAPI_queryUserConsentData

static char* queryUserConsentData__ToString(nudr_datarepository_api_openapi_file_queryUserConsentData_ucPurpose_e ){
    char *Array[] =  { "NULL", "ANALYTICS", "MODEL_TRAINING", "NW_CAP_EXPOSURE", "EDGEAPP_UE_LOCATION" };
    return Array[];
}

static nudr_datarepository_api_openapi_file_queryUserConsentData_ucPurpose_e queryUserConsentData__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "ANALYTICS", "MODEL_TRAINING", "NW_CAP_EXPOSURE", "EDGEAPP_UE_LOCATION" };
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
// Function queryUserConsentData__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *queryUserConsentData__convertToJSON(nudr_datarepository_api_openapi_file_queryUserConsentData_ucPurpose_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function queryUserConsentData__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudr_datarepository_api_openapi_file_queryUserConsentData_ucPurpose_e queryUserConsentData__parseFromJSON(cJSON* JSON) {
    nudr_datarepository_api_openapi_file_queryUserConsentData_ucPurpose_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieves the subscribed User Consent Data of a UE
//
uc_subscription_data_t*
UserConsentDataAPI_queryUserConsentData(apiClient_t *apiClient, char * ueId , char * supported_features , uc_purpose_e ucPurpose , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/uc-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/uc-data");


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
    char *keyQuery_ucPurpose = NULL;
    uc_purpose_e valueQuery_ucPurpose ;
    keyValuePair_t *keyPairQuery_ucPurpose = 0;
    if (ucPurpose)
    {
        keyQuery_ucPurpose = strdup("ucPurpose");
        valueQuery_ucPurpose = (ucPurpose);
        keyPairQuery_ucPurpose = keyValuePair_create(keyQuery_ucPurpose, (void *)strdup(queryUserConsentData__ToString(
		&valueQuery_ucPurpose)));
        list_addElement(localVarQueryParameters,keyPairQuery_ucPurpose);
    }
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
    cJSON *UserConsentDataAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    uc_subscription_data_t *elementToReturn = uc_subscription_data_parseFromJSON(UserConsentDataAPIlocalVarJSON);
    cJSON_Delete(UserConsentDataAPIlocalVarJSON);
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
    if(keyQuery_ucPurpose){
        free(keyQuery_ucPurpose);
        keyQuery_ucPurpose = NULL;
    }
    if(keyPairQuery_ucPurpose){
        keyValuePair_free(keyPairQuery_ucPurpose);
        keyPairQuery_ucPurpose = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

