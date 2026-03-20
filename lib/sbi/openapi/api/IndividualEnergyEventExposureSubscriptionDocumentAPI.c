#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndividualEnergyEventExposureSubscriptionDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Request the deletion of an existing Individual Energy Event Exposure Subscription resource.
//
void
IndividualEnergyEventExposureSubscriptionDocumentAPI_deleteIndEnergyEESubsc(apiClient_t *apiClient, char * subId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscriptions/{subId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscriptions/{subId}");


    // Path Params
    long sizeOfPathParams_subId = strlen(subId)+3 + strlen("{ subId }");
    if(subId == NULL) {
        goto end;
    }
    char* localVarToReplace_subId = malloc(sizeOfPathParams_subId);
    sprintf(localVarToReplace_subId, "{%s}", "subId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subId, subId);


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
    //    printf("%s\n","No Content. The Individual Energy Event Exposure Subscription resource is successfully deleted. ");
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
    //if (apiClient->response_code == 502) {
    //    printf("%s\n","Bad Gateway");
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
    free(localVarToReplace_subId);

}

// Retrieve an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t*
IndividualEnergyEventExposureSubscriptionDocumentAPI_getIndEnergyEESubsc(apiClient_t *apiClient, char * subId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscriptions/{subId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscriptions/{subId}");


    // Path Params
    long sizeOfPathParams_subId = strlen(subId)+3 + strlen("{ subId }");
    if(subId == NULL) {
        goto end;
    }
    char* localVarToReplace_subId = malloc(sizeOfPathParams_subId);
    sprintf(localVarToReplace_subId, "{%s}", "subId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subId, subId);


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
    //    printf("%s\n","OK. The requested Individual Energy Event Exposure Subscription resource shall be returned. ");
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
    //if (apiClient->response_code == 502) {
    //    printf("%s\n","Bad Gateway");
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
    cJSON *IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    energy_ee_subsc_t *elementToReturn = energy_ee_subsc_parseFromJSON(IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_subId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Request the modification of an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t*
IndividualEnergyEventExposureSubscriptionDocumentAPI_modifyIndEnergyEESubsc(apiClient_t *apiClient, char * subId , energy_ee_subsc_patch_t * energy_ee_subsc_patch )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscriptions/{subId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscriptions/{subId}");


    // Path Params
    long sizeOfPathParams_subId = strlen(subId)+3 + strlen("{ subId }");
    if(subId == NULL) {
        goto end;
    }
    char* localVarToReplace_subId = malloc(sizeOfPathParams_subId);
    sprintf(localVarToReplace_subId, "{%s}", "subId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subId, subId);



    // Body Param
    cJSON *localVarSingleItemJSON_energy_ee_subsc_patch = NULL;
    if (energy_ee_subsc_patch != NULL)
    {
        //string
        localVarSingleItemJSON_energy_ee_subsc_patch = energy_ee_subsc_patch_convertToJSON(energy_ee_subsc_patch);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_energy_ee_subsc_patch);
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
    //    printf("%s\n","OK. The Individual Energy Event Exposure Subscription resource is successfully modified and a representation of the updated resource shall be returned in the response body. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content. The Individual Energy Event Exposure Subscription resource is successfully modified and no content is returned in the response body. ");
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
    //if (apiClient->response_code == 502) {
    //    printf("%s\n","Bad Gateway");
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
    cJSON *IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    energy_ee_subsc_t *elementToReturn = energy_ee_subsc_parseFromJSON(IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_subId);
    if (localVarSingleItemJSON_energy_ee_subsc_patch) {
        cJSON_Delete(localVarSingleItemJSON_energy_ee_subsc_patch);
        localVarSingleItemJSON_energy_ee_subsc_patch = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Request the update of an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t*
IndividualEnergyEventExposureSubscriptionDocumentAPI_updateIndEnergyEESubsc(apiClient_t *apiClient, char * subId , energy_ee_subsc_t * energy_ee_subsc )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscriptions/{subId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscriptions/{subId}");


    // Path Params
    long sizeOfPathParams_subId = strlen(subId)+3 + strlen("{ subId }");
    if(subId == NULL) {
        goto end;
    }
    char* localVarToReplace_subId = malloc(sizeOfPathParams_subId);
    sprintf(localVarToReplace_subId, "{%s}", "subId");

    localVarPath = strReplace(localVarPath, localVarToReplace_subId, subId);



    // Body Param
    cJSON *localVarSingleItemJSON_energy_ee_subsc = NULL;
    if (energy_ee_subsc != NULL)
    {
        //string
        localVarSingleItemJSON_energy_ee_subsc = energy_ee_subsc_convertToJSON(energy_ee_subsc);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_energy_ee_subsc);
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
    //    printf("%s\n","OK. The Individual Energy Event Exposure Subscription resource is successfully updated and a representation of the updated resource shall be returned in the response body. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content. The Individual Energy Event Exposure Subscription resource is successfully updated and no content is returned in the response body. ");
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
    //if (apiClient->response_code == 502) {
    //    printf("%s\n","Bad Gateway");
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
    cJSON *IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    energy_ee_subsc_t *elementToReturn = energy_ee_subsc_parseFromJSON(IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON);
    cJSON_Delete(IndividualEnergyEventExposureSubscriptionDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_subId);
    if (localVarSingleItemJSON_energy_ee_subsc) {
        cJSON_Delete(localVarSingleItemJSON_energy_ee_subsc);
        localVarSingleItemJSON_energy_ee_subsc = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

