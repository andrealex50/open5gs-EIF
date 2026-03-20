#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SCPDomainRoutingInformationSubscriptionsCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new subscription
//
scp_domain_routing_info_subscription_t*
SCPDomainRoutingInformationSubscriptionsCollectionAPI_scpDomainRoutingInfoSubscribe(apiClient_t *apiClient, scp_domain_routing_info_subscription_t * scp_domain_routing_info_subscription , char * Content_Encoding , char * Accept_Encoding )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = list_createList();
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/scp-domain-routing-info-subs")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/scp-domain-routing-info-subs");




    // header parameters
    char *keyHeader_Content_Encoding = NULL;
    char * valueHeader_Content_Encoding = 0;
    keyValuePair_t *keyPairHeader_Content_Encoding = 0;
    if (Content_Encoding) {
        keyHeader_Content_Encoding = strdup("Content-Encoding");
        valueHeader_Content_Encoding = strdup((Content_Encoding));
        keyPairHeader_Content_Encoding = keyValuePair_create(keyHeader_Content_Encoding, valueHeader_Content_Encoding);
        list_addElement(localVarHeaderParameters,keyPairHeader_Content_Encoding);
    }


    // header parameters
    char *keyHeader_Accept_Encoding = NULL;
    char * valueHeader_Accept_Encoding = 0;
    keyValuePair_t *keyPairHeader_Accept_Encoding = 0;
    if (Accept_Encoding) {
        keyHeader_Accept_Encoding = strdup("Accept-Encoding");
        valueHeader_Accept_Encoding = strdup((Accept_Encoding));
        keyPairHeader_Accept_Encoding = keyValuePair_create(keyHeader_Accept_Encoding, valueHeader_Accept_Encoding);
        list_addElement(localVarHeaderParameters,keyPairHeader_Accept_Encoding);
    }


    // Body Param
    cJSON *localVarSingleItemJSON_scp_domain_routing_info_subscription = NULL;
    if (scp_domain_routing_info_subscription != NULL)
    {
        //string
        localVarSingleItemJSON_scp_domain_routing_info_subscription = scp_domain_routing_info_subscription_convertToJSON(scp_domain_routing_info_subscription);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_scp_domain_routing_info_subscription);
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
    //if (apiClient->response_code == 201) {
    //    printf("%s\n","Expected response to a valid request");
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
    //if (apiClient->response_code == 501) {
    //    printf("%s\n","Not Implemented");
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
    cJSON *SCPDomainRoutingInformationSubscriptionsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    scp_domain_routing_info_subscription_t *elementToReturn = scp_domain_routing_info_subscription_parseFromJSON(SCPDomainRoutingInformationSubscriptionsCollectionAPIlocalVarJSON);
    cJSON_Delete(SCPDomainRoutingInformationSubscriptionsCollectionAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    list_freeList(localVarHeaderParameters);
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (keyHeader_Content_Encoding) {
        free(keyHeader_Content_Encoding);
        keyHeader_Content_Encoding = NULL;
    }
    if (valueHeader_Content_Encoding) {
        free(valueHeader_Content_Encoding);
        valueHeader_Content_Encoding = NULL;
    }
    free(keyPairHeader_Content_Encoding);
    if (keyHeader_Accept_Encoding) {
        free(keyHeader_Accept_Encoding);
        keyHeader_Accept_Encoding = NULL;
    }
    if (valueHeader_Accept_Encoding) {
        free(valueHeader_Accept_Encoding);
        valueHeader_Accept_Encoding = NULL;
    }
    free(keyPairHeader_Accept_Encoding);
    if (localVarSingleItemJSON_scp_domain_routing_info_subscription) {
        cJSON_Delete(localVarSingleItemJSON_scp_domain_routing_info_subscription);
        localVarSingleItemJSON_scp_domain_routing_info_subscription = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

