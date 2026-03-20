#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "NFInstanceIDDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Deregisters a given NF Instance
//
void
NFInstanceIDDocumentAPI_deregisterNFInstance(apiClient_t *apiClient, char * nfInstanceID )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/nf-instances/{nfInstanceID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/nf-instances/{nfInstanceID}");


    // Path Params
    long sizeOfPathParams_nfInstanceID = strlen(nfInstanceID)+3 + strlen("{ nfInstanceID }");
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);


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
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Expected response to a successful deregistration");
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
    //if (apiClient->response_code == 429) {
    //    printf("%s\n","Too Many Requests");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","Internal Server Error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Not Implemented");
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
    free(localVarToReplace_nfInstanceID);

}

// Read the profile of a given NF Instance
//
nf_profile_t*
NFInstanceIDDocumentAPI_getNFInstance(apiClient_t *apiClient, char * nfInstanceID , char * requester_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/nf-instances/{nfInstanceID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/nf-instances/{nfInstanceID}");


    // Path Params
    long sizeOfPathParams_nfInstanceID = strlen(nfInstanceID)+3 + strlen("{ nfInstanceID }");
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);



    // query parameters
    char *keyQuery_requester_features = NULL;
    char * valueQuery_requester_features = NULL;
    keyValuePair_t *keyPairQuery_requester_features = 0;
    if (requester_features)
    {
        keyQuery_requester_features = strdup("requester-features");
        valueQuery_requester_features = strdup((requester_features));
        keyPairQuery_requester_features = keyValuePair_create(keyQuery_requester_features, valueQuery_requester_features);
        list_addElement(localVarQueryParameters,keyPairQuery_requester_features);
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
    //if (apiClient->response_code == 406) {
    //    printf("%s\n","406 Not Acceptable");
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
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Not Implemented");
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
    cJSON *NFInstanceIDDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    nf_profile_t *elementToReturn = nf_profile_parseFromJSON(NFInstanceIDDocumentAPIlocalVarJSON);
    cJSON_Delete(NFInstanceIDDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_nfInstanceID);
    if(keyQuery_requester_features){
        free(keyQuery_requester_features);
        keyQuery_requester_features = NULL;
    }
    if(valueQuery_requester_features){
        free(valueQuery_requester_features);
        valueQuery_requester_features = NULL;
    }
    if(keyPairQuery_requester_features){
        keyValuePair_free(keyPairQuery_requester_features);
        keyPairQuery_requester_features = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Register a new NF Instance
//
nf_profile_t*
NFInstanceIDDocumentAPI_registerNFInstance(apiClient_t *apiClient, char * nfInstanceID , nf_profile_t * nf_profile , char * Content_Encoding , char * Accept_Encoding )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/nf-instances/{nfInstanceID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/nf-instances/{nfInstanceID}");


    // Path Params
    long sizeOfPathParams_nfInstanceID = strlen(nfInstanceID)+3 + strlen("{ nfInstanceID }");
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);



    // header parameters
    char *keyHeader_Content_Encoding = NULL;
    char * valueHeader_Content_Encoding = 0;
    keyValuePair_t *keyPairHeader_Content_Encoding = 0;
    if (Content_Encoding) {
        keyHeader_Content_Encoding = strdup("Content-Encoding");
        valueHeader_Content_Encoding = strdup((Content_Encoding));
        keyPairHeader_Content_Encoding = keyValuePair_create(keyHeader_Content_Encoding, valueHeader_Content_Encoding);
        list_addElement(localVarHeaderParameters,keyPairHeader_Content_Encoding);
    }


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


    // Body Param
    cJSON *localVarSingleItemJSON_nf_profile = NULL;
    if (nf_profile != NULL)
    {
        //string
        localVarSingleItemJSON_nf_profile = nf_profile_convertToJSON(nf_profile);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_nf_profile);
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
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK (Profile Replacement)");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 201) {
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
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Not Implemented");
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
    cJSON *NFInstanceIDDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    nf_profile_t *elementToReturn = nf_profile_parseFromJSON(NFInstanceIDDocumentAPIlocalVarJSON);
    cJSON_Delete(NFInstanceIDDocumentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_nfInstanceID);
    if (keyHeader_Content_Encoding) {
        free(keyHeader_Content_Encoding);
        keyHeader_Content_Encoding = NULL;
    }
    if (valueHeader_Content_Encoding) {
        free(valueHeader_Content_Encoding);
        valueHeader_Content_Encoding = NULL;
    }
    free(keyPairHeader_Content_Encoding);
    if (keyHeader_Accept_Encoding) {
        free(keyHeader_Accept_Encoding);
        keyHeader_Accept_Encoding = NULL;
    }
    if (valueHeader_Accept_Encoding) {
        free(valueHeader_Accept_Encoding);
        valueHeader_Accept_Encoding = NULL;
    }
    free(keyPairHeader_Accept_Encoding);
    if (localVarSingleItemJSON_nf_profile) {
        cJSON_Delete(localVarSingleItemJSON_nf_profile);
        localVarSingleItemJSON_nf_profile = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update NF Instance profile
//
nf_profile_t*
NFInstanceIDDocumentAPI_updateNFInstance(apiClient_t *apiClient, char * nfInstanceID , list_t * patch_item , char * Content_Encoding , char * Accept_Encoding , char * If_Match )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/nf-instances/{nfInstanceID}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/nf-instances/{nfInstanceID}");


    // Path Params
    long sizeOfPathParams_nfInstanceID = strlen(nfInstanceID)+3 + strlen("{ nfInstanceID }");
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);
    if(nfInstanceID == NULL) {
        goto end;
    }
    char* localVarToReplace_nfInstanceID = malloc(sizeOfPathParams_nfInstanceID);
    sprintf(localVarToReplace_nfInstanceID, "{%s}", "nfInstanceID");

    localVarPath = strReplace(localVarPath, localVarToReplace_nfInstanceID, nfInstanceID);



    // header parameters
    char *keyHeader_Content_Encoding = NULL;
    char * valueHeader_Content_Encoding = 0;
    keyValuePair_t *keyPairHeader_Content_Encoding = 0;
    if (Content_Encoding) {
        keyHeader_Content_Encoding = strdup("Content-Encoding");
        valueHeader_Content_Encoding = strdup((Content_Encoding));
        keyPairHeader_Content_Encoding = keyValuePair_create(keyHeader_Content_Encoding, valueHeader_Content_Encoding);
        list_addElement(localVarHeaderParameters,keyPairHeader_Content_Encoding);
    }


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


    // header parameters
    char *keyHeader_If_Match = NULL;
    char * valueHeader_If_Match = 0;
    keyValuePair_t *keyPairHeader_If_Match = 0;
    if (If_Match) {
        keyHeader_If_Match = strdup("If-Match");
        valueHeader_If_Match = strdup((If_Match));
        keyPairHeader_If_Match = keyValuePair_create(keyHeader_If_Match, valueHeader_If_Match);
        list_addElement(localVarHeaderParameters,keyPairHeader_If_Match);
    }


    // Body Param
    //notstring
    cJSON *localVar_patch_item = NULL;
    cJSON *localVarItemJSON_patch_item = NULL;
    cJSON *localVarSingleItemJSON_patch_item = NULL;
    if (patch_item != NULL)
    {
        localVarItemJSON_patch_item = cJSON_CreateObject();
        localVarSingleItemJSON_patch_item = cJSON_AddArrayToObject(localVarItemJSON_patch_item, "patch_item");
        if (localVarSingleItemJSON_patch_item == NULL)
        {
            // nonprimitive container

            goto end;
        }
    }

    listEntry_t *patch_itemBodyListEntry;
    list_ForEach(patch_itemBodyListEntry, patch_item)
    {
        localVar_patch_item = patch_item_convertToJSON(patch_itemBodyListEntry->data);
        if(localVar_patch_item == NULL)
        {
            goto end;
        }
        cJSON_AddItemToArray(localVarSingleItemJSON_patch_item, localVar_patch_item);
        localVarBodyParameters = cJSON_Print(localVarItemJSON_patch_item);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/problem+json"); //produces
    list_addElement(localVarContentType,"application/json-patch+json"); //consumes
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
    //    printf("%s\n","Expected response with empty body");
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
    //if (apiClient->response_code == 409) {
    //    printf("%s\n","Conflict");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 411) {
    //    printf("%s\n","Length Required");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 412) {
    //    printf("%s\n","Precondition Failed");
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
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Not Implemented");
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
    cJSON *NFInstanceIDDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    nf_profile_t *elementToReturn = nf_profile_parseFromJSON(NFInstanceIDDocumentAPIlocalVarJSON);
    cJSON_Delete(NFInstanceIDDocumentAPIlocalVarJSON);
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
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_nfInstanceID);
    if (keyHeader_Content_Encoding) {
        free(keyHeader_Content_Encoding);
        keyHeader_Content_Encoding = NULL;
    }
    if (valueHeader_Content_Encoding) {
        free(valueHeader_Content_Encoding);
        valueHeader_Content_Encoding = NULL;
    }
    free(keyPairHeader_Content_Encoding);
    if (keyHeader_Accept_Encoding) {
        free(keyHeader_Accept_Encoding);
        keyHeader_Accept_Encoding = NULL;
    }
    if (valueHeader_Accept_Encoding) {
        free(valueHeader_Accept_Encoding);
        valueHeader_Accept_Encoding = NULL;
    }
    free(keyPairHeader_Accept_Encoding);
    if (keyHeader_If_Match) {
        free(keyHeader_If_Match);
        keyHeader_If_Match = NULL;
    }
    if (valueHeader_If_Match) {
        free(valueHeader_If_Match);
        valueHeader_If_Match = NULL;
    }
    free(keyPairHeader_If_Match);
    if (localVarItemJSON_patch_item) {
        cJSON_Delete(localVarItemJSON_patch_item);
        localVarItemJSON_patch_item = NULL;
    }
    if (localVarSingleItemJSON_patch_item) {
        cJSON_Delete(localVarSingleItemJSON_patch_item);
        localVarSingleItemJSON_patch_item = NULL;
    }
    if (localVar_patch_item) {
        cJSON_Delete(localVar_patch_item);
        localVar_patch_item = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

