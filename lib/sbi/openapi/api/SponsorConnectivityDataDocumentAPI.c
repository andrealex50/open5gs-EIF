#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SponsorConnectivityDataDocumentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieves the sponsored connectivity information for a given sponsorId
//
sponsor_connectivity_data_t*
SponsorConnectivityDataDocumentAPI_readSponsorConnectivityData(apiClient_t *apiClient, char * sponsorId )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/policy-data/sponsor-connectivity-data/{sponsorId}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/policy-data/sponsor-connectivity-data/{sponsorId}");


    // Path Params
    long sizeOfPathParams_sponsorId = strlen(sponsorId)+3 + strlen("{ sponsorId }");
    if(sponsorId == NULL) {
        goto end;
    }
    char* localVarToReplace_sponsorId = malloc(sizeOfPathParams_sponsorId);
    sprintf(localVarToReplace_sponsorId, "{%s}", "sponsorId");

    localVarPath = strReplace(localVarPath, localVarToReplace_sponsorId, sponsorId);


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
    //    printf("%s\n","Upon success, a response body containing Sponsor Connectivity Data shall be returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","The resource was found but no Sponsor Connectivity Data is available.");
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
    cJSON *SponsorConnectivityDataDocumentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    sponsor_connectivity_data_t *elementToReturn = sponsor_connectivity_data_parseFromJSON(SponsorConnectivityDataDocumentAPIlocalVarJSON);
    cJSON_Delete(SponsorConnectivityDataDocumentAPIlocalVarJSON);
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
    free(localVarToReplace_sponsorId);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

