#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualPFDDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create or update the corresponding PFDs for the specified application identifier
//
pfd_data_for_app_ext_t*
IndividualPFDDataDocumentAPI_createOrReplaceIndividualPFDData(apiClient_t *apiClient, char * appId , pfd_data_for_app_ext_t * pfd_data_for_app_ext )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/pfds/{appId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/pfds/{appId}");


    // Path Params
    long sizeOfPathParams_appId = strlen(appId)+3 + strlen("{ appId }");
    if(appId == NULL) {
        goto end;
    }
    char* localVarToReplace_appId = malloc(sizeOfPathParams_appId);
    sprintf(localVarToReplace_appId, "{%s}", "appId");

    localVarPath = strReplace(localVarPath, localVarToReplace_appId, appId);



    // Body Param
    cJSON *localVarSingleItemJSON_pfd_data_for_app_ext = NULL;
    if (pfd_data_for_app_ext != NULL)
    {
        //string
        localVarSingleItemJSON_pfd_data_for_app_ext = pfd_data_for_app_ext_convertToJSON(pfd_data_for_app_ext);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_pfd_data_for_app_ext);
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
    //    printf("%s\n","The creation of an Individual PFD Data resource related to the application-identifier is confirmed and a representation of that resource is returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Successful case. The upgrade of an Individual PFD Data resource related to the application identifier is confirmed and a representation of that resource is returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No content");
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
    cJSON *IndividualPFDDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pfd_data_for_app_ext_t *elementToReturn = pfd_data_for_app_ext_parseFromJSON(IndividualPFDDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualPFDDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_appId);
    if (localVarSingleItemJSON_pfd_data_for_app_ext) {
        cJSON_Delete(localVarSingleItemJSON_pfd_data_for_app_ext);
        localVarSingleItemJSON_pfd_data_for_app_ext = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete the corresponding PFDs of the specified application identifier
//
void
IndividualPFDDataDocumentAPI_deleteIndividualPFDData(apiClient_t *apiClient, char * appId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/pfds/{appId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/pfds/{appId}");


    // Path Params
    long sizeOfPathParams_appId = strlen(appId)+3 + strlen("{ appId }");
    if(appId == NULL) {
        goto end;
    }
    char* localVarToReplace_appId = malloc(sizeOfPathParams_appId);
    sprintf(localVarToReplace_appId, "{%s}", "appId");

    localVarPath = strReplace(localVarPath, localVarToReplace_appId, appId);


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
    //    printf("%s\n","Successful case. The Individual PFD Data resource related to the application identifier was deleted. ");
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
    free(localVarToReplace_appId);

}

// Retrieve the corresponding PFDs of the specified application identifier
//
pfd_data_for_app_ext_t*
IndividualPFDDataDocumentAPI_readIndividualPFDData(apiClient_t *apiClient, char * appId , char * supp_feat )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/pfds/{appId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/pfds/{appId}");


    // Path Params
    long sizeOfPathParams_appId = strlen(appId)+3 + strlen("{ appId }");
    if(appId == NULL) {
        goto end;
    }
    char* localVarToReplace_appId = malloc(sizeOfPathParams_appId);
    sprintf(localVarToReplace_appId, "{%s}", "appId");

    localVarPath = strReplace(localVarPath, localVarToReplace_appId, appId);



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
    //    printf("%s\n","A representation of PFDs for the request application identified by the application identifier is returned. ");
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
    cJSON *IndividualPFDDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pfd_data_for_app_ext_t *elementToReturn = pfd_data_for_app_ext_parseFromJSON(IndividualPFDDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualPFDDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_appId);
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

