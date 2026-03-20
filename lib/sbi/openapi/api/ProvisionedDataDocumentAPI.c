#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ProvisionedDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum DATASETNAMES for ProvisionedDataDocumentAPI_queryProvisionedData

static char* queryProvisionedData_DATASETNAMES_ToString(nudr_datarepository_api_openapi_file_queryProvisionedData_dataset-names_e DATASETNAMES){
    char *DATASETNAMESArray[] =  { "NULL", "AM", "SMF_SEL", "SMS_SUB", "SM", "TRACE", "SMS_MNG", "LCS_PRIVACY", "LCS_MO", "LCS_BCA", "V2X", "PROSE", "ODB", "EE_PROF", "PP_PROF", "NIDD_AUTH", "USER_CONSENT", "MBS" };
    return DATASETNAMESArray[DATASETNAMES];
}

static nudr_datarepository_api_openapi_file_queryProvisionedData_dataset-names_e queryProvisionedData_DATASETNAMES_FromString(char* DATASETNAMES){
    int stringToReturn = 0;
    char *DATASETNAMESArray[] =  { "NULL", "AM", "SMF_SEL", "SMS_SUB", "SM", "TRACE", "SMS_MNG", "LCS_PRIVACY", "LCS_MO", "LCS_BCA", "V2X", "PROSE", "ODB", "EE_PROF", "PP_PROF", "NIDD_AUTH", "USER_CONSENT", "MBS" };
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
// Function queryProvisionedData_DATASETNAMES_convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *queryProvisionedData_DATASETNAMES_convertToJSON(nudr_datarepository_api_openapi_file_queryProvisionedData_dataset-names_e DATASETNAMES) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function queryProvisionedData_DATASETNAMES_parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nudr_datarepository_api_openapi_file_queryProvisionedData_dataset-names_e queryProvisionedData_DATASETNAMES_parseFromJSON(cJSON* DATASETNAMESJSON) {
    nudr_datarepository_api_openapi_file_queryProvisionedData_dataset-names_e DATASETNAMESVariable = 0;
    return DATASETNAMESVariable;
end:
    return 0;
}
*/


// Retrieve multiple provisioned data sets of a UE
//
provisioned_data_sets_t*
ProvisionedDataDocumentAPI_queryProvisionedData(apiClient_t *apiClient, char * ueId , char * servingPlmnId , set_t * dataset_names )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/{ueId}/{servingPlmnId}/provisioned-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/{ueId}/{servingPlmnId}/provisioned-data");


    // Path Params
    long sizeOfPathParams_ueId = strlen(ueId)+3 + strlen(servingPlmnId)+3 + strlen("{ ueId }");
    if(ueId == NULL) {
        goto end;
    }
    char* localVarToReplace_ueId = malloc(sizeOfPathParams_ueId);
    sprintf(localVarToReplace_ueId, "{%s}", "ueId");

    localVarPath = strReplace(localVarPath, localVarToReplace_ueId, ueId);

    // Path Params
    long sizeOfPathParams_servingPlmnId = strlen(ueId)+3 + strlen(servingPlmnId)+3 + strlen("{ servingPlmnId }");
    if(servingPlmnId == NULL) {
        goto end;
    }
    char* localVarToReplace_servingPlmnId = malloc(sizeOfPathParams_servingPlmnId);
    sprintf(localVarToReplace_servingPlmnId, "{%s}", "servingPlmnId");

    localVarPath = strReplace(localVarPath, localVarToReplace_servingPlmnId, servingPlmnId);



    // query parameters
    if (dataset_names)
    {
        list_addElement(localVarQueryParameters,dataset_names);
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
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *ProvisionedDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    provisioned_data_sets_t *elementToReturn = provisioned_data_sets_parseFromJSON(ProvisionedDataDocumentAPIlocalVarJSON);
    cJSON_Delete(ProvisionedDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_servingPlmnId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

