#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualSMPolicyDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Delete an existing Individual SM Policy
//
void
IndividualSMPolicyDocumentAPI_deleteSMPolicy(apiClient_t *apiClient, char * smPolicyId , sm_policy_delete_data_t * sm_policy_delete_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-policies/{smPolicyId}/delete")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-policies/{smPolicyId}/delete");


    // Path Params
    long sizeOfPathParams_smPolicyId = strlen(smPolicyId)+3 + strlen("{ smPolicyId }");
    if(smPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_smPolicyId = malloc(sizeOfPathParams_smPolicyId);
    sprintf(localVarToReplace_smPolicyId, "{%s}", "smPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_smPolicyId, smPolicyId);



    // Body Param
    cJSON *localVarSingleItemJSON_sm_policy_delete_data = NULL;
    if (sm_policy_delete_data != NULL)
    {
        //string
        localVarSingleItemJSON_sm_policy_delete_data = sm_policy_delete_data_convertToJSON(sm_policy_delete_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sm_policy_delete_data);
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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No content");
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
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_smPolicyId);
    if (localVarSingleItemJSON_sm_policy_delete_data) {
        cJSON_Delete(localVarSingleItemJSON_sm_policy_delete_data);
        localVarSingleItemJSON_sm_policy_delete_data = NULL;
    }
    free(localVarBodyParameters);

}

// Read an Individual SM Policy
//
sm_policy_control_t*
IndividualSMPolicyDocumentAPI_getSMPolicy(apiClient_t *apiClient, char * smPolicyId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-policies/{smPolicyId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-policies/{smPolicyId}");


    // Path Params
    long sizeOfPathParams_smPolicyId = strlen(smPolicyId)+3 + strlen("{ smPolicyId }");
    if(smPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_smPolicyId = malloc(sizeOfPathParams_smPolicyId);
    sprintf(localVarToReplace_smPolicyId, "{%s}", "smPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_smPolicyId, smPolicyId);


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
    //    printf("%s\n","OK. Resource representation is returned");
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
    cJSON *IndividualSMPolicyDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_policy_control_t *elementToReturn = sm_policy_control_parseFromJSON(IndividualSMPolicyDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualSMPolicyDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_smPolicyId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update an existing Individual SM Policy
//
sm_policy_decision_t*
IndividualSMPolicyDocumentAPI_updateSMPolicy(apiClient_t *apiClient, char * smPolicyId , sm_policy_update_context_data_t * sm_policy_update_context_data )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/sm-policies/{smPolicyId}/update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/sm-policies/{smPolicyId}/update");


    // Path Params
    long sizeOfPathParams_smPolicyId = strlen(smPolicyId)+3 + strlen("{ smPolicyId }");
    if(smPolicyId == NULL) {
        goto end;
    }
    char* localVarToReplace_smPolicyId = malloc(sizeOfPathParams_smPolicyId);
    sprintf(localVarToReplace_smPolicyId, "{%s}", "smPolicyId");

    localVarPath = strReplace(localVarPath, localVarToReplace_smPolicyId, smPolicyId);



    // Body Param
    cJSON *localVarSingleItemJSON_sm_policy_update_context_data = NULL;
    if (sm_policy_update_context_data != NULL)
    {
        //string
        localVarSingleItemJSON_sm_policy_update_context_data = sm_policy_update_context_data_convertToJSON(sm_policy_update_context_data);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_sm_policy_update_context_data);
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
    //    printf("%s\n","OK. Updated policies are returned");
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
    cJSON *IndividualSMPolicyDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sm_policy_decision_t *elementToReturn = sm_policy_decision_parseFromJSON(IndividualSMPolicyDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualSMPolicyDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_smPolicyId);
    if (localVarSingleItemJSON_sm_policy_update_context_data) {
        cJSON_Delete(localVarSingleItemJSON_sm_policy_update_context_data);
        localVarSingleItemJSON_sm_policy_update_context_data = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

