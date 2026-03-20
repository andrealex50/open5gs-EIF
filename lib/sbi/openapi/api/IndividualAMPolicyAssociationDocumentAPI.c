#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualAMPolicyAssociationDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Delete individual AM policy association.
//
void
IndividualAMPolicyAssociationDocumentAPI_deleteIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policies/{polAssoId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policies/{polAssoId}");


    // Path Params
    long sizeOfPathParams_polAssoId = strlen(polAssoId)+3 + strlen("{ polAssoId }");
    if(polAssoId == NULL) {
        goto end;
    }
    char* localVarToReplace_polAssoId = malloc(sizeOfPathParams_polAssoId);
    sprintf(localVarToReplace_polAssoId, "{%s}", "polAssoId");

    localVarPath = strReplace(localVarPath, localVarToReplace_polAssoId, polAssoId);


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
    //    printf("%s\n","No Content. Resource was successfully deleted.");
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
    free(localVarToReplace_polAssoId);

}

// Read individual AM policy association.
//
policy_association_t*
IndividualAMPolicyAssociationDocumentAPI_readIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policies/{polAssoId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policies/{polAssoId}");


    // Path Params
    long sizeOfPathParams_polAssoId = strlen(polAssoId)+3 + strlen("{ polAssoId }");
    if(polAssoId == NULL) {
        goto end;
    }
    char* localVarToReplace_polAssoId = malloc(sizeOfPathParams_polAssoId);
    sprintf(localVarToReplace_polAssoId, "{%s}", "polAssoId");

    localVarPath = strReplace(localVarPath, localVarToReplace_polAssoId, polAssoId);


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
    cJSON *IndividualAMPolicyAssociationDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    policy_association_t *elementToReturn = policy_association_parseFromJSON(IndividualAMPolicyAssociationDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualAMPolicyAssociationDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_polAssoId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Report observed event triggers and obtain updated policies for an individual AM policy association. 
//
policy_update_t*
IndividualAMPolicyAssociationDocumentAPI_reportObservedEventTriggersForIndividualAMPolicyAssociation(apiClient_t *apiClient, char * polAssoId , policy_association_update_request_t * policy_association_update_request )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policies/{polAssoId}/update")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policies/{polAssoId}/update");


    // Path Params
    long sizeOfPathParams_polAssoId = strlen(polAssoId)+3 + strlen("{ polAssoId }");
    if(polAssoId == NULL) {
        goto end;
    }
    char* localVarToReplace_polAssoId = malloc(sizeOfPathParams_polAssoId);
    sprintf(localVarToReplace_polAssoId, "{%s}", "polAssoId");

    localVarPath = strReplace(localVarPath, localVarToReplace_polAssoId, polAssoId);



    // Body Param
    cJSON *localVarSingleItemJSON_policy_association_update_request = NULL;
    if (policy_association_update_request != NULL)
    {
        //string
        localVarSingleItemJSON_policy_association_update_request = policy_association_update_request_convertToJSON(policy_association_update_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_policy_association_update_request);
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
    cJSON *IndividualAMPolicyAssociationDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    policy_update_t *elementToReturn = policy_update_parseFromJSON(IndividualAMPolicyAssociationDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualAMPolicyAssociationDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_polAssoId);
    if (localVarSingleItemJSON_policy_association_update_request) {
        cJSON_Delete(localVarSingleItemJSON_policy_association_update_request);
        localVarSingleItemJSON_policy_association_update_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

