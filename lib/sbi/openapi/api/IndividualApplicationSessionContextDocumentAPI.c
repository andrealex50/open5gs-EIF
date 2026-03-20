#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualApplicationSessionContextDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Deletes an existing Individual Application Session Context
//
app_session_context_t*
IndividualApplicationSessionContextDocumentAPI_deleteAppSession(apiClient_t *apiClient, char * appSessionId , events_subsc_req_data_t * events_subsc_req_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/app-sessions/{appSessionId}/delete")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/app-sessions/{appSessionId}/delete");


    // Path Params
    long sizeOfPathParams_appSessionId = strlen(appSessionId)+3 + strlen("{ appSessionId }");
    if(appSessionId == NULL) {
        goto end;
    }
    char* localVarToReplace_appSessionId = malloc(sizeOfPathParams_appSessionId);
    sprintf(localVarToReplace_appSessionId, "{%s}", "appSessionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_appSessionId, appSessionId);



    // Body Param
    cJSON *localVarSingleItemJSON_events_subsc_req_data = NULL;
    if (events_subsc_req_data != NULL)
    {
        //string
        localVarSingleItemJSON_events_subsc_req_data = events_subsc_req_data_convertToJSON(events_subsc_req_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_events_subsc_req_data);
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
    //    printf("%s\n","The deletion of the resource is confirmed and a resource is returned.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","The deletion is confirmed without returning additional data.");
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
    //nonprimitive not container
    cJSON *IndividualApplicationSessionContextDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    app_session_context_t *elementToReturn = app_session_context_parseFromJSON(IndividualApplicationSessionContextDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualApplicationSessionContextDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_appSessionId);
    if (localVarSingleItemJSON_events_subsc_req_data) {
        cJSON_Delete(localVarSingleItemJSON_events_subsc_req_data);
        localVarSingleItemJSON_events_subsc_req_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Reads an existing Individual Application Session Context
//
app_session_context_t*
IndividualApplicationSessionContextDocumentAPI_getAppSession(apiClient_t *apiClient, char * appSessionId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/app-sessions/{appSessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/app-sessions/{appSessionId}");


    // Path Params
    long sizeOfPathParams_appSessionId = strlen(appSessionId)+3 + strlen("{ appSessionId }");
    if(appSessionId == NULL) {
        goto end;
    }
    char* localVarToReplace_appSessionId = malloc(sizeOfPathParams_appSessionId);
    sprintf(localVarToReplace_appSessionId, "{%s}", "appSessionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_appSessionId, appSessionId);


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
    //    printf("%s\n","A representation of the resource is returned.");
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
    cJSON *IndividualApplicationSessionContextDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    app_session_context_t *elementToReturn = app_session_context_parseFromJSON(IndividualApplicationSessionContextDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualApplicationSessionContextDocumentAPIlocalVarJSON);
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
    
    free(localVarPath);
    free(localVarToReplace_appSessionId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Modifies an existing Individual Application Session Context
//
app_session_context_t*
IndividualApplicationSessionContextDocumentAPI_modAppSession(apiClient_t *apiClient, char * appSessionId , app_session_context_update_data_patch_t * app_session_context_update_data_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/app-sessions/{appSessionId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/app-sessions/{appSessionId}");


    // Path Params
    long sizeOfPathParams_appSessionId = strlen(appSessionId)+3 + strlen("{ appSessionId }");
    if(appSessionId == NULL) {
        goto end;
    }
    char* localVarToReplace_appSessionId = malloc(sizeOfPathParams_appSessionId);
    sprintf(localVarToReplace_appSessionId, "{%s}", "appSessionId");

    localVarPath = strReplace(localVarPath, localVarToReplace_appSessionId, appSessionId);



    // Body Param
    cJSON *localVarSingleItemJSON_app_session_context_update_data_patch = NULL;
    if (app_session_context_update_data_patch != NULL)
    {
        //string
        localVarSingleItemJSON_app_session_context_update_data_patch = app_session_context_update_data_patch_convertToJSON(app_session_context_update_data_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_app_session_context_update_data_patch);
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
    //    printf("%s\n","Successful modification of the resource and a representation of that resource is returned.");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","The successful modification.");
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
    //nonprimitive not container
    cJSON *IndividualApplicationSessionContextDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    app_session_context_t *elementToReturn = app_session_context_parseFromJSON(IndividualApplicationSessionContextDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualApplicationSessionContextDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_appSessionId);
    if (localVarSingleItemJSON_app_session_context_update_data_patch) {
        cJSON_Delete(localVarSingleItemJSON_app_session_context_update_data_patch);
        localVarSingleItemJSON_app_session_context_update_data_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

