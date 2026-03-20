#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "UECMRegistrationInfoRetrievalAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum REGISTRATIONDATASETNAMES for UECMRegistrationInfoRetrievalAPI_getRegistrations

static char* getRegistrations_REGISTRATIONDATASETNAMES_ToString(nudm_uecm_getRegistrations_registration-dataset-names_e REGISTRATIONDATASETNAMES){
    char *REGISTRATIONDATASETNAMESArray[] =  { "NULL", "AMF_3GPP", "AMF_NON_3GPP", "SMF_PDU_SESSIONS", "SMSF_3GPP", "SMSF_NON_3GPP", "IP_SM_GW", "NWDAF" };
    return REGISTRATIONDATASETNAMESArray[REGISTRATIONDATASETNAMES];
}

static nudm_uecm_getRegistrations_registration-dataset-names_e getRegistrations_REGISTRATIONDATASETNAMES_FromString(char* REGISTRATIONDATASETNAMES){
    int stringToReturn = 0;
    char *REGISTRATIONDATASETNAMESArray[] =  { "NULL", "AMF_3GPP", "AMF_NON_3GPP", "SMF_PDU_SESSIONS", "SMSF_3GPP", "SMSF_NON_3GPP", "IP_SM_GW", "NWDAF" };
    size_t sizeofArray = sizeof(REGISTRATIONDATASETNAMESArray) / sizeof(REGISTRATIONDATASETNAMESArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(REGISTRATIONDATASETNAMES, REGISTRATIONDATASETNAMESArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getRegistrations_REGISTRATIONDATASETNAMES_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getRegistrations_REGISTRATIONDATASETNAMES_convertToJSON(nudm_uecm_getRegistrations_registration-dataset-names_e REGISTRATIONDATASETNAMES) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getRegistrations_REGISTRATIONDATASETNAMES_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudm_uecm_getRegistrations_registration-dataset-names_e getRegistrations_REGISTRATIONDATASETNAMES_parseFromJSON(cJSON* REGISTRATIONDATASETNAMESJSON) {
    nudm_uecm_getRegistrations_registration-dataset-names_e REGISTRATIONDATASETNAMESVariable = 0;
    return REGISTRATIONDATASETNAMESVariable;
end:
    return 0;
}
*/


// retrieve UE registration data sets
//
registration_data_sets_t*
UECMRegistrationInfoRetrievalAPI_getRegistrations(apiClient_t *apiClient, char * ueId , set_t * registration_dataset_names , char * supported_features , snssai_t * single_nssai , char * dnn )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{ueId}/registrations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{ueId}/registrations");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);



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
    if (registration_dataset_names)
    {
        list_addElement(localVarQueryParameters,registration_dataset_names);
    }

    // query parameters
    char *keyQuery_single_nssai = NULL;
    snssai_t * valueQuery_single_nssai ;
    keyValuePair_t *keyPairQuery_single_nssai = 0;
    if (single_nssai)
    {
        keyQuery_single_nssai = strdup("single-nssai");
        valueQuery_single_nssai = (single_nssai);
        keyPairQuery_single_nssai = keyValuePair_create(keyQuery_single_nssai, &valueQuery_single_nssai);
        list_addElement(localVarQueryParameters,keyPairQuery_single_nssai);
    }

    // query parameters
    char *keyQuery_dnn = NULL;
    char * valueQuery_dnn = NULL;
    keyValuePair_t *keyPairQuery_dnn = 0;
    if (dnn)
    {
        keyQuery_dnn = strdup("dnn");
        valueQuery_dnn = strdup((dnn));
        keyPairQuery_dnn = keyValuePair_create(keyQuery_dnn, valueQuery_dnn);
        list_addElement(localVarQueryParameters,keyPairQuery_dnn);
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
    cJSON *UECMRegistrationInfoRetrievalAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    registration_data_sets_t *elementToReturn = registration_data_sets_parseFromJSON(UECMRegistrationInfoRetrievalAPIlocalVarJSON);
    cJSON_Delete(UECMRegistrationInfoRetrievalAPIlocalVarJSON);
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
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_ueId);
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
    if(keyQuery_single_nssai){
        free(keyQuery_single_nssai);
        keyQuery_single_nssai = NULL;
    }
    if(keyPairQuery_single_nssai){
        keyValuePair_free(keyPairQuery_single_nssai);
        keyPairQuery_single_nssai = NULL;
    }
    if(keyQuery_dnn){
        free(keyQuery_dnn);
        keyQuery_dnn = NULL;
    }
    if(valueQuery_dnn){
        free(valueQuery_dnn);
        valueQuery_dnn = NULL;
    }
    if(keyPairQuery_dnn){
        keyValuePair_free(keyPairQuery_dnn);
        keyPairQuery_dnn = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

