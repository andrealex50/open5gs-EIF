#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualInfluenceDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create or update an individual Influence Data resource
//
traffic_influ_data_t*
IndividualInfluenceDataDocumentAPI_createOrReplaceIndividualInfluenceData(apiClient_t *apiClient, char * influenceId , traffic_influ_data_t * traffic_influ_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/influenceData/{influenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/influenceData/{influenceId}");


    // Path Params
    long sizeOfPathParams_influenceId = strlen(influenceId)+3 + strlen("{ influenceId }");
    if(influenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_influenceId = malloc(sizeOfPathParams_influenceId);
    sprintf(localVarToReplace_influenceId, "{%s}", "influenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_influenceId, influenceId);



    // Body Param
    cJSON *localVarSingleItemJSON_traffic_influ_data = NULL;
    if (traffic_influ_data != NULL)
    {
        //string
        localVarSingleItemJSON_traffic_influ_data = traffic_influ_data_convertToJSON(traffic_influ_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_traffic_influ_data);
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
    //    printf("%s\n","The creation of an Individual Traffic Influence Data resource is confirmed and a representation of that resource is returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","The update of an Individual Traffic Influence Data resource is confirmed and a response body containing Traffic Influence Data shall be returned. ");
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
    cJSON *IndividualInfluenceDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    traffic_influ_data_t *elementToReturn = traffic_influ_data_parseFromJSON(IndividualInfluenceDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualInfluenceDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_influenceId);
    if (localVarSingleItemJSON_traffic_influ_data) {
        cJSON_Delete(localVarSingleItemJSON_traffic_influ_data);
        localVarSingleItemJSON_traffic_influ_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an individual Influence Data resource
//
void
IndividualInfluenceDataDocumentAPI_deleteIndividualInfluenceData(apiClient_t *apiClient, char * influenceId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/influenceData/{influenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/influenceData/{influenceId}");


    // Path Params
    long sizeOfPathParams_influenceId = strlen(influenceId)+3 + strlen("{ influenceId }");
    if(influenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_influenceId = malloc(sizeOfPathParams_influenceId);
    sprintf(localVarToReplace_influenceId, "{%s}", "influenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_influenceId, influenceId);


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
    //    printf("%s\n","The Individual Influence Data was deleted successfully.");
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
    free(localVarToReplace_influenceId);

}

// Modify part of the properties of an individual Influence Data resource
//
traffic_influ_data_t*
IndividualInfluenceDataDocumentAPI_updateIndividualInfluenceData(apiClient_t *apiClient, char * influenceId , traffic_influ_data_patch_t * traffic_influ_data_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/influenceData/{influenceId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/influenceData/{influenceId}");


    // Path Params
    long sizeOfPathParams_influenceId = strlen(influenceId)+3 + strlen("{ influenceId }");
    if(influenceId == NULL) {
        goto end;
    }
    char* localVarToReplace_influenceId = malloc(sizeOfPathParams_influenceId);
    sprintf(localVarToReplace_influenceId, "{%s}", "influenceId");

    localVarPath = strReplace(localVarPath, localVarToReplace_influenceId, influenceId);



    // Body Param
    cJSON *localVarSingleItemJSON_traffic_influ_data_patch = NULL;
    if (traffic_influ_data_patch != NULL)
    {
        //string
        localVarSingleItemJSON_traffic_influ_data_patch = traffic_influ_data_patch_convertToJSON(traffic_influ_data_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_traffic_influ_data_patch);
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
    //    printf("%s\n","The update of an Individual Traffic Influence Data resource is confirmed and a response body containing Traffic Influence Data shall be returned. ");
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
    cJSON *IndividualInfluenceDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    traffic_influ_data_t *elementToReturn = traffic_influ_data_parseFromJSON(IndividualInfluenceDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualInfluenceDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_influenceId);
    if (localVarSingleItemJSON_traffic_influ_data_patch) {
        cJSON_Delete(localVarSingleItemJSON_traffic_influ_data_patch);
        localVarSingleItemJSON_traffic_influ_data_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

