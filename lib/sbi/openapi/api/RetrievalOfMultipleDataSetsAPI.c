#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RetrievalOfMultipleDataSetsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum DATASETNAMES for RetrievalOfMultipleDataSetsAPI_getDataSets

static char* getDataSets_DATASETNAMES_ToString(nudm_sdm_getDataSets_dataset-names_e DATASETNAMES){
    char *DATASETNAMESArray[] =  { "NULL", "AM", "SMF_SEL", "UEC_SMF", "UEC_SMSF", "SMS_SUB", "SM", "TRACE", "SMS_MNG", "LCS_PRIVACY", "LCS_MO", "UEC_AMF", "V2X", "LCS_BCA", "PROSE", "UC", "MBS" };
    return DATASETNAMESArray[DATASETNAMES];
}

static nudm_sdm_getDataSets_dataset-names_e getDataSets_DATASETNAMES_FromString(char* DATASETNAMES){
    int stringToReturn = 0;
    char *DATASETNAMESArray[] =  { "NULL", "AM", "SMF_SEL", "UEC_SMF", "UEC_SMSF", "SMS_SUB", "SM", "TRACE", "SMS_MNG", "LCS_PRIVACY", "LCS_MO", "UEC_AMF", "V2X", "LCS_BCA", "PROSE", "UC", "MBS" };
    size_t sizeofArray = sizeof(DATASETNAMESArray) / sizeof(DATASETNAMESArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(DATASETNAMES, DATASETNAMESArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getDataSets_DATASETNAMES_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getDataSets_DATASETNAMES_convertToJSON(nudm_sdm_getDataSets_dataset-names_e DATASETNAMES) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getDataSets_DATASETNAMES_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudm_sdm_getDataSets_dataset-names_e getDataSets_DATASETNAMES_parseFromJSON(cJSON* DATASETNAMESJSON) {
    nudm_sdm_getDataSets_dataset-names_e DATASETNAMESVariable = 0;
    return DATASETNAMESVariable;
end:
    return 0;
}
*/


// retrieve multiple data sets
//
subscription_data_sets_t*
RetrievalOfMultipleDataSetsAPI_getDataSets(apiClient_t *apiClient, char * supi , set_t * dataset_names , plmn_id_nid_t * plmn_id , int disaster_roaming_ind , char * supported_features , char * If_None_Match , char * If_Modified_Since )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supi}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supi}");


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
    if (dataset_names)
    {
        list_addElement(localVarQueryParameters,dataset_names);
    }

    // query parameters
    char *keyQuery_plmn_id = NULL;
    plmn_id_nid_t * valueQuery_plmn_id ;
    keyValuePair_t *keyPairQuery_plmn_id = 0;
    if (plmn_id)
    {
        keyQuery_plmn_id = strdup("plmn-id");
        valueQuery_plmn_id = (plmn_id);
        keyPairQuery_plmn_id = keyValuePair_create(keyQuery_plmn_id, &valueQuery_plmn_id);
        list_addElement(localVarQueryParameters,keyPairQuery_plmn_id);
    }

    // query parameters
    char *keyQuery_disaster_roaming_ind = NULL;
    char * valueQuery_disaster_roaming_ind = NULL;
    keyValuePair_t *keyPairQuery_disaster_roaming_ind = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_disaster_roaming_ind = strdup("disaster-roaming-ind");
        valueQuery_disaster_roaming_ind = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_disaster_roaming_ind, MAX_NUMBER_LENGTH, "%d", disaster_roaming_ind);
        keyPairQuery_disaster_roaming_ind = keyValuePair_create(keyQuery_disaster_roaming_ind, valueQuery_disaster_roaming_ind);
        list_addElement(localVarQueryParameters,keyPairQuery_disaster_roaming_ind);
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
    cJSON *RetrievalOfMultipleDataSetsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    subscription_data_sets_t *elementToReturn = subscription_data_sets_parseFromJSON(RetrievalOfMultipleDataSetsAPIlocalVarJSON);
    cJSON_Delete(RetrievalOfMultipleDataSetsAPIlocalVarJSON);
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
    if(keyQuery_plmn_id){
        free(keyQuery_plmn_id);
        keyQuery_plmn_id = NULL;
    }
    if(keyPairQuery_plmn_id){
        keyValuePair_free(keyPairQuery_plmn_id);
        keyPairQuery_plmn_id = NULL;
    }
    if(keyQuery_disaster_roaming_ind){
        free(keyQuery_disaster_roaming_ind);
        keyQuery_disaster_roaming_ind = NULL;
    }
    if(valueQuery_disaster_roaming_ind){
        free(valueQuery_disaster_roaming_ind);
        valueQuery_disaster_roaming_ind = NULL;
    }
    if(keyPairQuery_disaster_roaming_ind){
        keyValuePair_free(keyPairQuery_disaster_roaming_ind);
        keyPairQuery_disaster_roaming_ind = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

