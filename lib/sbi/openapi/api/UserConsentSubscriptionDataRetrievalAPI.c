#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "UserConsentSubscriptionDataRetrievalAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for UserConsentSubscriptionDataRetrievalAPI_getUcData

static char* getUcData__ToString(nudm_sdm_getUcData_uc-purpose_e ){
    char *Array[] =  { "NULL", "ANALYTICS", "MODEL_TRAINING", "NW_CAP_EXPOSURE", "EDGEAPP_UE_LOCATION" };
    return Array[];
}

static nudm_sdm_getUcData_uc-purpose_e getUcData__FromString(char* ){
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
// Function getUcData__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getUcData__convertToJSON(nudm_sdm_getUcData_uc-purpose_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getUcData__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudm_sdm_getUcData_uc-purpose_e getUcData__parseFromJSON(cJSON* JSON) {
    nudm_sdm_getUcData_uc-purpose_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// retrieve a UE's User Consent Subscription Data
//
uc_subscription_data_t*
UserConsentSubscriptionDataRetrievalAPI_getUcData(apiClient_t *apiClient, char * supi , char * supported_features , uc_purpose_e uc_purpose , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supi}/uc-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supi}/uc-data");


    // Path Params
    long sizeOfPathParams_supi = strlen(supi)+3 + strlen("{ supi }");
    if(supi == NULL) {
        goto end;
    }
    char* localVarToReplace_supi = malloc(sizeOfPathParams_supi);
    sprintf(localVarToReplace_supi, "{%s}", "supi");

    localVarPath = strReplace(localVarPath, localVarToReplace_supi, supi);



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
    char *keyQuery_uc_purpose = NULL;
    uc_purpose_e valueQuery_uc_purpose ;
    keyValuePair_t *keyPairQuery_uc_purpose = 0;
    if (uc_purpose)
    {
        keyQuery_uc_purpose = strdup("uc-purpose");
        valueQuery_uc_purpose = (uc_purpose);
        keyPairQuery_uc_purpose = keyValuePair_create(keyQuery_uc_purpose, (void *)strdup(getUcData__ToString(
		&valueQuery_uc_purpose)));
        list_addElement(localVarQueryParameters,keyPairQuery_uc_purpose);
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
    cJSON *UserConsentSubscriptionDataRetrievalAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    uc_subscription_data_t *elementToReturn = uc_subscription_data_parseFromJSON(UserConsentSubscriptionDataRetrievalAPIlocalVarJSON);
    cJSON_Delete(UserConsentSubscriptionDataRetrievalAPIlocalVarJSON);
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
    free(localVarToReplace_supi);
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
    if(keyQuery_uc_purpose){
        free(keyQuery_uc_purpose);
        keyQuery_uc_purpose = NULL;
    }
    if(keyPairQuery_uc_purpose){
        keyValuePair_free(keyPairQuery_uc_purpose);
        keyPairQuery_uc_purpose = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

