#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CompleteStoredSearchDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


stored_search_result_t*
CompleteStoredSearchDocumentAPI_retrieveCompleteSearch(apiClient_t *apiClient, char * searchId , char * Accept_Encoding )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/searches/{searchId}/complete")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/searches/{searchId}/complete");


    // Path Params
    long sizeOfPathParams_searchId = strlen(searchId)+3 + strlen("{ searchId }");
    if(searchId == NULL) {
        goto end;
    }
    char* localVarToReplace_searchId = malloc(sizeOfPathParams_searchId);
    sprintf(localVarToReplace_searchId, "{%s}", "searchId");

    localVarPath = strReplace(localVarPath, localVarToReplace_searchId, searchId);



    // header parameters
    char *keyHeader_Accept_Encoding = NULL;
    char * valueHeader_Accept_Encoding = 0;
    keyValuePair_t *keyPairHeader_Accept_Encoding = 0;
    if (Accept_Encoding) {
        keyHeader_Accept_Encoding = strdup("Accept-Encoding");
        valueHeader_Accept_Encoding = strdup((Accept_Encoding));
        keyPairHeader_Accept_Encoding = keyValuePair_create(keyHeader_Accept_Encoding, valueHeader_Accept_Encoding);
        list_addElement(localVarHeaderParameters,keyPairHeader_Accept_Encoding);
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
    //if (apiClient->response_code == 307) {
    //    printf("%s\n","Temporary Redirect");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 308) {
    //    printf("%s\n","Permanent Redirect");
    //}
    //nonprimitive not container
    cJSON *CompleteStoredSearchDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    stored_search_result_t *elementToReturn = stored_search_result_parseFromJSON(CompleteStoredSearchDocumentAPIlocalVarJSON);
    cJSON_Delete(CompleteStoredSearchDocumentAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_searchId);
    if (keyHeader_Accept_Encoding) {
        free(keyHeader_Accept_Encoding);
        keyHeader_Accept_Encoding = NULL;
    }
    if (valueHeader_Accept_Encoding) {
        free(valueHeader_Accept_Encoding);
        valueHeader_Accept_Encoding = NULL;
    }
    free(keyPairHeader_Accept_Encoding);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

