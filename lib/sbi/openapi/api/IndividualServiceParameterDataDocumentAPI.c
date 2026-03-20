#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualServiceParameterDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create or update an individual Service Parameter Data resource
//
service_parameter_data_t*
IndividualServiceParameterDataDocumentAPI_createOrReplaceServiceParameterData(apiClient_t *apiClient, char * serviceParamId , service_parameter_data_t * service_parameter_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/serviceParamData/{serviceParamId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/serviceParamData/{serviceParamId}");


    // Path Params
    long sizeOfPathParams_serviceParamId = strlen(serviceParamId)+3 + strlen("{ serviceParamId }");
    if(serviceParamId == NULL) {
        goto end;
    }
    char* localVarToReplace_serviceParamId = malloc(sizeOfPathParams_serviceParamId);
    sprintf(localVarToReplace_serviceParamId, "{%s}", "serviceParamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_serviceParamId, serviceParamId);



    // Body Param
    cJSON *localVarSingleItemJSON_service_parameter_data = NULL;
    if (service_parameter_data != NULL)
    {
        //string
        localVarSingleItemJSON_service_parameter_data = service_parameter_data_convertToJSON(service_parameter_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_service_parameter_data);
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
    //    printf("%s\n","The creation of an Individual Service Parameter Data resource is confirmed and a representation of that resource is returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","The update of an Individual Service Parameter Data resource is confirmed and a response body containing Service Parameter Data shall be returned. ");
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
    cJSON *IndividualServiceParameterDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    service_parameter_data_t *elementToReturn = service_parameter_data_parseFromJSON(IndividualServiceParameterDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualServiceParameterDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_serviceParamId);
    if (localVarSingleItemJSON_service_parameter_data) {
        cJSON_Delete(localVarSingleItemJSON_service_parameter_data);
        localVarSingleItemJSON_service_parameter_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete an individual Service Parameter Data resource
//
void
IndividualServiceParameterDataDocumentAPI_deleteIndividualServiceParameterData(apiClient_t *apiClient, char * serviceParamId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/serviceParamData/{serviceParamId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/serviceParamData/{serviceParamId}");


    // Path Params
    long sizeOfPathParams_serviceParamId = strlen(serviceParamId)+3 + strlen("{ serviceParamId }");
    if(serviceParamId == NULL) {
        goto end;
    }
    char* localVarToReplace_serviceParamId = malloc(sizeOfPathParams_serviceParamId);
    sprintf(localVarToReplace_serviceParamId, "{%s}", "serviceParamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_serviceParamId, serviceParamId);


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
    //    printf("%s\n","The Individual Service Parameter Data was deleted successfully.");
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
    free(localVarToReplace_serviceParamId);

}

// Modify part of the properties of an individual Service Parameter Data resource
//
service_parameter_data_t*
IndividualServiceParameterDataDocumentAPI_updateIndividualServiceParameterData(apiClient_t *apiClient, char * serviceParamId , service_parameter_data_patch_t * service_parameter_data_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/serviceParamData/{serviceParamId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/serviceParamData/{serviceParamId}");


    // Path Params
    long sizeOfPathParams_serviceParamId = strlen(serviceParamId)+3 + strlen("{ serviceParamId }");
    if(serviceParamId == NULL) {
        goto end;
    }
    char* localVarToReplace_serviceParamId = malloc(sizeOfPathParams_serviceParamId);
    sprintf(localVarToReplace_serviceParamId, "{%s}", "serviceParamId");

    localVarPath = strReplace(localVarPath, localVarToReplace_serviceParamId, serviceParamId);



    // Body Param
    cJSON *localVarSingleItemJSON_service_parameter_data_patch = NULL;
    if (service_parameter_data_patch != NULL)
    {
        //string
        localVarSingleItemJSON_service_parameter_data_patch = service_parameter_data_patch_convertToJSON(service_parameter_data_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_service_parameter_data_patch);
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
    //    printf("%s\n","The update of an Individual Service Parameter Data resource is confirmed and a response body containing Service Parameter Data shall be returned. ");
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
    cJSON *IndividualServiceParameterDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    service_parameter_data_t *elementToReturn = service_parameter_data_parseFromJSON(IndividualServiceParameterDataDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualServiceParameterDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_serviceParamId);
    if (localVarSingleItemJSON_service_parameter_data_patch) {
        cJSON_Delete(localVarSingleItemJSON_service_parameter_data_patch);
        localVarSingleItemJSON_service_parameter_data_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

