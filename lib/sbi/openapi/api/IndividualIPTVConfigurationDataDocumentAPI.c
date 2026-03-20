#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualIPTVConfigurationDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create or update an individual IPTV configuration resource
//
iptv_config_data_t*
IndividualIPTVConfigurationDataDocumentAPI_createOrReplaceIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId , iptv_config_data_t * iptv_config_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/iptvConfigData/{configurationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/iptvConfigData/{configurationId}");


    // Path Params
    long sizeOfPathParams_configurationId = strlen(configurationId)+3 + strlen("{ configurationId }");
    if(configurationId == NULL) {
        goto end;
    }
    char* localVarToReplace_configurationId = malloc(sizeOfPathParams_configurationId);
    sprintf(localVarToReplace_configurationId, "{%s}", "configurationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_configurationId, configurationId);



    // Body Param
    cJSON *localVarSingleItemJSON_iptv_config_data = NULL;
    if (iptv_config_data != NULL)
    {
        //string
        localVarSingleItemJSON_iptv_config_data = iptv_config_data_convertToJSON(iptv_config_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_iptv_config_data);
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
    //    printf("%s\n","The creation of an Individual IPTV Configuration Data resource is confirmed and a representation of that resource is returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","The update of an Individual IPTV configuration resource.");
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
    cJSON *IndividualIPTVConfigurationDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    iptv_config_data_t *elementToReturn = iptv_config_data_parseFromJSON(IndividualIPTVConfigurationDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualIPTVConfigurationDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_configurationId);
    if (localVarSingleItemJSON_iptv_config_data) {
        cJSON_Delete(localVarSingleItemJSON_iptv_config_data);
        localVarSingleItemJSON_iptv_config_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an individual IPTV configuration resource
//
void
IndividualIPTVConfigurationDataDocumentAPI_deleteIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/iptvConfigData/{configurationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/iptvConfigData/{configurationId}");


    // Path Params
    long sizeOfPathParams_configurationId = strlen(configurationId)+3 + strlen("{ configurationId }");
    if(configurationId == NULL) {
        goto end;
    }
    char* localVarToReplace_configurationId = malloc(sizeOfPathParams_configurationId);
    sprintf(localVarToReplace_configurationId, "{%s}", "configurationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_configurationId, configurationId);


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
    //    printf("%s\n","The resource was deleted successfully.");
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
    free(localVarToReplace_configurationId);

}

// Partial update an individual IPTV configuration resource
//
iptv_config_data_t*
IndividualIPTVConfigurationDataDocumentAPI_partialReplaceIndividualIPTVConfigurationData(apiClient_t *apiClient, char * configurationId , iptv_config_data_patch_t * iptv_config_data_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/iptvConfigData/{configurationId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/iptvConfigData/{configurationId}");


    // Path Params
    long sizeOfPathParams_configurationId = strlen(configurationId)+3 + strlen("{ configurationId }");
    if(configurationId == NULL) {
        goto end;
    }
    char* localVarToReplace_configurationId = malloc(sizeOfPathParams_configurationId);
    sprintf(localVarToReplace_configurationId, "{%s}", "configurationId");

    localVarPath = strReplace(localVarPath, localVarToReplace_configurationId, configurationId);



    // Body Param
    cJSON *localVarSingleItemJSON_iptv_config_data_patch = NULL;
    if (iptv_config_data_patch != NULL)
    {
        //string
        localVarSingleItemJSON_iptv_config_data_patch = iptv_config_data_patch_convertToJSON(iptv_config_data_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_iptv_config_data_patch);
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
    //    printf("%s\n","The update of an Individual IPTV configuration resource.");
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
    cJSON *IndividualIPTVConfigurationDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    iptv_config_data_t *elementToReturn = iptv_config_data_parseFromJSON(IndividualIPTVConfigurationDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualIPTVConfigurationDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_configurationId);
    if (localVarSingleItemJSON_iptv_config_data_patch) {
        cJSON_Delete(localVarSingleItemJSON_iptv_config_data_patch);
        localVarSingleItemJSON_iptv_config_data_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

