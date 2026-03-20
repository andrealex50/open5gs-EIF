#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualBdtDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Creates an BDT data resource associated with an BDT reference Id
//
bdt_data_t*
IndividualBdtDataDocumentAPI_createIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId , bdt_data_t * bdt_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/bdt-data/{bdtReferenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/bdt-data/{bdtReferenceId}");


    // Path Params
    long sizeOfPathParams_bdtReferenceId = strlen(bdtReferenceId)+3 + strlen("{ bdtReferenceId }");
    if(bdtReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_bdtReferenceId = malloc(sizeOfPathParams_bdtReferenceId);
    sprintf(localVarToReplace_bdtReferenceId, "{%s}", "bdtReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_bdtReferenceId, bdtReferenceId);



    // Body Param
    cJSON *localVarSingleItemJSON_bdt_data = NULL;
    if (bdt_data != NULL)
    {
        //string
        localVarSingleItemJSON_bdt_data = bdt_data_convertToJSON(bdt_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_bdt_data);
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
                    "PUT");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Successful case. The resource has been successfully created.");
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
    //if (apiClient->response_code == 414) {
    //    printf("%s\n","URI Too Long");
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
    cJSON *IndividualBdtDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    bdt_data_t *elementToReturn = bdt_data_parseFromJSON(IndividualBdtDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualBdtDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_bdtReferenceId);
    if (localVarSingleItemJSON_bdt_data) {
        cJSON_Delete(localVarSingleItemJSON_bdt_data);
        localVarSingleItemJSON_bdt_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Deletes an BDT data resource associated with an BDT reference Id
//
void
IndividualBdtDataDocumentAPI_deleteIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/bdt-data/{bdtReferenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/bdt-data/{bdtReferenceId}");


    // Path Params
    long sizeOfPathParams_bdtReferenceId = strlen(bdtReferenceId)+3 + strlen("{ bdtReferenceId }");
    if(bdtReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_bdtReferenceId = malloc(sizeOfPathParams_bdtReferenceId);
    sprintf(localVarToReplace_bdtReferenceId, "{%s}", "bdtReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_bdtReferenceId, bdtReferenceId);


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
    //    printf("%s\n","Successful case. The resource has been successfully deleted.");
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
    free(localVarToReplace_bdtReferenceId);

}

// Retrieves the BDT data information associated with a BDT reference Id
//
bdt_data_t*
IndividualBdtDataDocumentAPI_readIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId , char * supp_feat )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/bdt-data/{bdtReferenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/bdt-data/{bdtReferenceId}");


    // Path Params
    long sizeOfPathParams_bdtReferenceId = strlen(bdtReferenceId)+3 + strlen("{ bdtReferenceId }");
    if(bdtReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_bdtReferenceId = malloc(sizeOfPathParams_bdtReferenceId);
    sprintf(localVarToReplace_bdtReferenceId, "{%s}", "bdtReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_bdtReferenceId, bdtReferenceId);



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
    //    printf("%s\n","Upon success, a response body containing the BDT data shall be returned.");
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
    cJSON *IndividualBdtDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    bdt_data_t *elementToReturn = bdt_data_parseFromJSON(IndividualBdtDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualBdtDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_bdtReferenceId);
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

// Modifies an BDT data resource associated with an BDT reference Id
//
bdt_data_t*
IndividualBdtDataDocumentAPI_updateIndividualBdtData(apiClient_t *apiClient, char * bdtReferenceId , bdt_data_patch_t * bdt_data_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/bdt-data/{bdtReferenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/bdt-data/{bdtReferenceId}");


    // Path Params
    long sizeOfPathParams_bdtReferenceId = strlen(bdtReferenceId)+3 + strlen("{ bdtReferenceId }");
    if(bdtReferenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_bdtReferenceId = malloc(sizeOfPathParams_bdtReferenceId);
    sprintf(localVarToReplace_bdtReferenceId, "{%s}", "bdtReferenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_bdtReferenceId, bdtReferenceId);



    // Body Param
    cJSON *localVarSingleItemJSON_bdt_data_patch = NULL;
    if (bdt_data_patch != NULL)
    {
        //string
        localVarSingleItemJSON_bdt_data_patch = bdt_data_patch_convertToJSON(bdt_data_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_bdt_data_patch);
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
    //    printf("%s\n","Expected response to a valid request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Successful case. The resource has been successfully updated and no additional content is to be sent in the response message. ");
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
    cJSON *IndividualBdtDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    bdt_data_t *elementToReturn = bdt_data_parseFromJSON(IndividualBdtDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualBdtDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_bdtReferenceId);
    if (localVarSingleItemJSON_bdt_data_patch) {
        cJSON_Delete(localVarSingleItemJSON_bdt_data_patch);
        localVarSingleItemJSON_bdt_data_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

