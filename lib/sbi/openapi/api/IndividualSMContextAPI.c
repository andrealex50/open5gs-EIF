#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualSMContextAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Release SM Context
//
sm_context_released_data_t*
IndividualSMContextAPI_releaseSmContext(apiClient_t *apiClient, char * smContextRef , sm_context_release_data_t * sm_context_release_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-contexts/{smContextRef}/release")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-contexts/{smContextRef}/release");


    // Path Params
    long sizeOfPathParams_smContextRef = strlen(smContextRef)+3 + strlen("{ smContextRef }");
    if(smContextRef == NULL) {
        goto end;
    }
    char* localVarToReplace_smContextRef = malloc(sizeOfPathParams_smContextRef);
    sprintf(localVarToReplace_smContextRef, "{%s}", "smContextRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_smContextRef, smContextRef);



    // Body Param
    cJSON *localVarSingleItemJSON_sm_context_release_data = NULL;
    if (sm_context_release_data != NULL)
    {
        //string
        localVarSingleItemJSON_sm_context_release_data = sm_context_release_data_convertToJSON(sm_context_release_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sm_context_release_data);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"multipart/related"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful release of a PDU session with content in the response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","successful release of an SM context without content in the response");
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
    cJSON *IndividualSMContextAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_context_released_data_t *elementToReturn = sm_context_released_data_parseFromJSON(IndividualSMContextAPIlocalVarJSON);
    cJSON_Delete(IndividualSMContextAPIlocalVarJSON);
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
    free(localVarToReplace_smContextRef);
    if (localVarSingleItemJSON_sm_context_release_data) {
        cJSON_Delete(localVarSingleItemJSON_sm_context_release_data);
        localVarSingleItemJSON_sm_context_release_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve SM Context
//
sm_context_retrieved_data_t*
IndividualSMContextAPI_retrieveSmContext(apiClient_t *apiClient, char * smContextRef , sm_context_retrieve_data_t * sm_context_retrieve_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-contexts/{smContextRef}/retrieve")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-contexts/{smContextRef}/retrieve");


    // Path Params
    long sizeOfPathParams_smContextRef = strlen(smContextRef)+3 + strlen("{ smContextRef }");
    if(smContextRef == NULL) {
        goto end;
    }
    char* localVarToReplace_smContextRef = malloc(sizeOfPathParams_smContextRef);
    sprintf(localVarToReplace_smContextRef, "{%s}", "smContextRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_smContextRef, smContextRef);



    // Body Param
    cJSON *localVarSingleItemJSON_sm_context_retrieve_data = NULL;
    if (sm_context_retrieve_data != NULL)
    {
        //string
        localVarSingleItemJSON_sm_context_retrieve_data = sm_context_retrieve_data_convertToJSON(sm_context_retrieve_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sm_context_retrieve_data);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful retrieval of an SM context");
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
    //if (apiClient->response_code == 504) {
    //    printf("%s\n","Gateway Timeout");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *IndividualSMContextAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_context_retrieved_data_t *elementToReturn = sm_context_retrieved_data_parseFromJSON(IndividualSMContextAPIlocalVarJSON);
    cJSON_Delete(IndividualSMContextAPIlocalVarJSON);
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
    free(localVarToReplace_smContextRef);
    if (localVarSingleItemJSON_sm_context_retrieve_data) {
        cJSON_Delete(localVarSingleItemJSON_sm_context_retrieve_data);
        localVarSingleItemJSON_sm_context_retrieve_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Send MO Data
//
void
IndividualSMContextAPI_sendMoData(apiClient_t *apiClient, char * smContextRef , send_mo_data_req_data_t * jsonData , binary_t* binaryMoData )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-contexts/{smContextRef}/send-mo-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-contexts/{smContextRef}/send-mo-data");


    // Path Params
    long sizeOfPathParams_smContextRef = strlen(smContextRef)+3 + strlen("{ smContextRef }");
    if(smContextRef == NULL) {
        goto end;
    }
    char* localVarToReplace_smContextRef = malloc(sizeOfPathParams_smContextRef);
    sprintf(localVarToReplace_smContextRef, "{%s}", "smContextRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_smContextRef, smContextRef);



    // form parameters
    char *keyForm_jsonData = NULL;
    send_mo_data_req_data_t * valueForm_jsonData = 0;
    keyValuePair_t *keyPairForm_jsonData = 0;
    if (jsonData != NULL)
    {
        keyForm_jsonData = strdup("jsonData");
        valueForm_jsonData = (jsonData);
        keyPairForm_jsonData = keyValuePair_create(keyForm_jsonData,&valueForm_jsonData);
        list_addElement(localVarFormParameters,keyPairForm_jsonData);
    }

    // form parameters
    char *keyForm_binaryMoData = NULL;
    binary_t* valueForm_binaryMoData = 0;
    keyValuePair_t *keyPairForm_binaryMoData = 0;
    if (binaryMoData != NULL)
    {
        keyForm_binaryMoData = strdup("binaryMoData");
        valueForm_binaryMoData = binaryMoData;
        keyPairForm_binaryMoData = keyValuePair_create(keyForm_binaryMoData, &valueForm_binaryMoData);
        list_addElement(localVarFormParameters,keyPairForm_binaryMoData); //file adding
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"multipart/related"); //consumes
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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","successful sending of MO data");
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
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    list_freeList(localVarFormParameters);
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_smContextRef);
    if (keyForm_jsonData) {
        free(keyForm_jsonData);
        keyForm_jsonData = NULL;
    }
    free(keyPairForm_jsonData);
    if (keyForm_binaryMoData) {
        free(keyForm_binaryMoData);
        keyForm_binaryMoData = NULL;
    }
//    free(fileVar_binaryMoData->data);
//    free(fileVar_binaryMoData);

}

// Update SM Context
//
sm_context_updated_data_t*
IndividualSMContextAPI_updateSmContext(apiClient_t *apiClient, char * smContextRef , sm_context_update_data_t * sm_context_update_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-contexts/{smContextRef}/modify")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-contexts/{smContextRef}/modify");


    // Path Params
    long sizeOfPathParams_smContextRef = strlen(smContextRef)+3 + strlen("{ smContextRef }");
    if(smContextRef == NULL) {
        goto end;
    }
    char* localVarToReplace_smContextRef = malloc(sizeOfPathParams_smContextRef);
    sprintf(localVarToReplace_smContextRef, "{%s}", "smContextRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_smContextRef, smContextRef);



    // Body Param
    cJSON *localVarSingleItemJSON_sm_context_update_data = NULL;
    if (sm_context_update_data != NULL)
    {
        //string
        localVarSingleItemJSON_sm_context_update_data = sm_context_update_data_convertToJSON(sm_context_update_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sm_context_update_data);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"multipart/related"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"multipart/related"); //consumes
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","successful update of an SM context with content in the response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","successful update of an SM context without content in the response");
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
    //    printf("%s\n","unsuccessful update of an SM context - bad request");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","unsuccessful update of an SM context - forbidden");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","unsuccessful update of an SM context - not found");
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
    //    printf("%s\n","unsuccessful update of an SM context - Internal server error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","unsuccessful update of an SM context - Service Unavailable");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *IndividualSMContextAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_context_updated_data_t *elementToReturn = sm_context_updated_data_parseFromJSON(IndividualSMContextAPIlocalVarJSON);
    cJSON_Delete(IndividualSMContextAPIlocalVarJSON);
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
    free(localVarToReplace_smContextRef);
    if (localVarSingleItemJSON_sm_context_update_data) {
        cJSON_Delete(localVarSingleItemJSON_sm_context_update_data);
        localVarSingleItemJSON_sm_context_update_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

