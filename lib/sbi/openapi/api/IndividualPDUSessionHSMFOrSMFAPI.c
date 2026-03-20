#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualPDUSessionHSMFOrSMFAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Release
//
released_data_t*
IndividualPDUSessionHSMFOrSMFAPI_releasePduSession(apiClient_t *apiClient, char * pduSessionRef , release_data_t * release_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pdu-sessions/{pduSessionRef}/release")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pdu-sessions/{pduSessionRef}/release");


    // Path Params
    long sizeOfPathParams_pduSessionRef = strlen(pduSessionRef)+3 + strlen("{ pduSessionRef }");
    if(pduSessionRef == NULL) {
        goto end;
    }
    char* localVarToReplace_pduSessionRef = malloc(sizeOfPathParams_pduSessionRef);
    sprintf(localVarToReplace_pduSessionRef, "{%s}", "pduSessionRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_pduSessionRef, pduSessionRef);



    // Body Param
    cJSON *localVarSingleItemJSON_release_data = NULL;
    if (release_data != NULL)
    {
        //string
        localVarSingleItemJSON_release_data = release_data_convertToJSON(release_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_release_data);
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
    //    printf("%s\n","successful release of a PDU session with content in the response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","successful release of a PDU session");
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
    cJSON *IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    released_data_t *elementToReturn = released_data_parseFromJSON(IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON);
    cJSON_Delete(IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON);
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
    free(localVarToReplace_pduSessionRef);
    if (localVarSingleItemJSON_release_data) {
        cJSON_Delete(localVarSingleItemJSON_release_data);
        localVarSingleItemJSON_release_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Retrieve
//
retrieved_data_t*
IndividualPDUSessionHSMFOrSMFAPI_retrievePduSession(apiClient_t *apiClient, char * pduSessionRef , retrieve_data_t * retrieve_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pdu-sessions/{pduSessionRef}/retrieve")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pdu-sessions/{pduSessionRef}/retrieve");


    // Path Params
    long sizeOfPathParams_pduSessionRef = strlen(pduSessionRef)+3 + strlen("{ pduSessionRef }");
    if(pduSessionRef == NULL) {
        goto end;
    }
    char* localVarToReplace_pduSessionRef = malloc(sizeOfPathParams_pduSessionRef);
    sprintf(localVarToReplace_pduSessionRef, "{%s}", "pduSessionRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_pduSessionRef, pduSessionRef);



    // Body Param
    cJSON *localVarSingleItemJSON_retrieve_data = NULL;
    if (retrieve_data != NULL)
    {
        //string
        localVarSingleItemJSON_retrieve_data = retrieve_data_convertToJSON(retrieve_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_retrieve_data);
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
    //    printf("%s\n","successful information retrieval");
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
    cJSON *IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    retrieved_data_t *elementToReturn = retrieved_data_parseFromJSON(IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON);
    cJSON_Delete(IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON);
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
    free(localVarToReplace_pduSessionRef);
    if (localVarSingleItemJSON_retrieve_data) {
        cJSON_Delete(localVarSingleItemJSON_retrieve_data);
        localVarSingleItemJSON_retrieve_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Transfer MO Data
//
void
IndividualPDUSessionHSMFOrSMFAPI_transferMoData(apiClient_t *apiClient, char * pduSessionRef , transfer_mo_data_req_data_t * jsonData , binary_t* binaryMoData )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = list_createList();
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pdu-sessions/{pduSessionRef}/transfer-mo-data")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pdu-sessions/{pduSessionRef}/transfer-mo-data");


    // Path Params
    long sizeOfPathParams_pduSessionRef = strlen(pduSessionRef)+3 + strlen("{ pduSessionRef }");
    if(pduSessionRef == NULL) {
        goto end;
    }
    char* localVarToReplace_pduSessionRef = malloc(sizeOfPathParams_pduSessionRef);
    sprintf(localVarToReplace_pduSessionRef, "{%s}", "pduSessionRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_pduSessionRef, pduSessionRef);



    // form parameters
    char *keyForm_jsonData = NULL;
    transfer_mo_data_req_data_t * valueForm_jsonData = 0;
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
    //    printf("%s\n","successful transfering of MO data");
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
    free(localVarToReplace_pduSessionRef);
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

// Update (initiated by V-SMF or I-SMF)
//
hsmf_updated_data_t*
IndividualPDUSessionHSMFOrSMFAPI_updatePduSession(apiClient_t *apiClient, char * pduSessionRef , hsmf_update_data_t * hsmf_update_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pdu-sessions/{pduSessionRef}/modify")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pdu-sessions/{pduSessionRef}/modify");


    // Path Params
    long sizeOfPathParams_pduSessionRef = strlen(pduSessionRef)+3 + strlen("{ pduSessionRef }");
    if(pduSessionRef == NULL) {
        goto end;
    }
    char* localVarToReplace_pduSessionRef = malloc(sizeOfPathParams_pduSessionRef);
    sprintf(localVarToReplace_pduSessionRef, "{%s}", "pduSessionRef");

    localVarPath = strReplace(localVarPath, localVarToReplace_pduSessionRef, pduSessionRef);



    // Body Param
    cJSON *localVarSingleItemJSON_hsmf_update_data = NULL;
    if (hsmf_update_data != NULL)
    {
        //string
        localVarSingleItemJSON_hsmf_update_data = hsmf_update_data_convertToJSON(hsmf_update_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_hsmf_update_data);
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
    //    printf("%s\n","successful update of a PDU session with content in the response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","successful update of a PDU session without content in the response");
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
    //    printf("%s\n","unsuccessful update of a PDU session");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","unsuccessful update of a PDU session");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","unsuccessful update of a PDU session");
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
    //    printf("%s\n","unsuccessful update of a PDU session");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 503) {
    //    printf("%s\n","unsuccessful update of a PDU session");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    hsmf_updated_data_t *elementToReturn = hsmf_updated_data_parseFromJSON(IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON);
    cJSON_Delete(IndividualPDUSessionHSMFOrSMFAPIlocalVarJSON);
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
    free(localVarToReplace_pduSessionRef);
    if (localVarSingleItemJSON_hsmf_update_data) {
        cJSON_Delete(localVarSingleItemJSON_hsmf_update_data);
        localVarSingleItemJSON_hsmf_update_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

