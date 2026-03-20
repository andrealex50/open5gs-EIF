#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ProvidingAcknowledgementOfSteeringOfRoamingAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Nudm_Sdm Info service operation
//
void
ProvidingAcknowledgementOfSteeringOfRoamingAPI_sorAckInfo(apiClient_t *apiClient, char * supi , acknowledge_info_t * acknowledge_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{supi}/am-data/sor-ack")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{supi}/am-data/sor-ack");


    // Path Params
    long sizeOfPathParams_supi = strlen(supi)+3 + strlen("{ supi }");
    if(supi == NULL) {
        goto end;
    }
    char* localVarToReplace_supi = malloc(sizeOfPathParams_supi);
    sprintf(localVarToReplace_supi, "{%s}", "supi");

    localVarPath = strReplace(localVarPath, localVarToReplace_supi, supi);



    // Body Param
    cJSON *localVarSingleItemJSON_acknowledge_info = NULL;
    if (acknowledge_info != NULL)
    {
        //string
        localVarSingleItemJSON_acknowledge_info = acknowledge_info_convertToJSON(acknowledge_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_acknowledge_info);
    }
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
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","Successful acknowledgement");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","Bad request");
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
    //    printf("%s\n","Unexpected error");
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
    free(localVarToReplace_supi);
    if (localVarSingleItemJSON_acknowledge_info) {
        cJSON_Delete(localVarSingleItemJSON_acknowledge_info);
        localVarSingleItemJSON_acknowledge_info = NULL;
    }
    free(localVarBodyParameters);

}

