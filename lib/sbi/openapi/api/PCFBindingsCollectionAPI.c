#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "PCFBindingsCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Individual PCF for a PDU Session binding information
//
pcf_binding_t*
PCFBindingsCollectionAPI_createPCFBinding(apiClient_t *apiClient, pcf_binding_t * pcf_binding )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pcfBindings")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pcfBindings");




    // Body Param
    cJSON *localVarSingleItemJSON_pcf_binding = NULL;
    if (pcf_binding != NULL)
    {
        //string
        localVarSingleItemJSON_pcf_binding = pcf_binding_convertToJSON(pcf_binding);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_pcf_binding);
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
    //    printf("%s\n","The creation of an individual PCF for a PDU Session binding.");
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
    //    printf("%s\n","The existing PCF binding information stored in the BSF for the indicated combination is  returned. ");
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
    cJSON *PCFBindingsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pcf_binding_t *elementToReturn = pcf_binding_parseFromJSON(PCFBindingsCollectionAPIlocalVarJSON);
    cJSON_Delete(PCFBindingsCollectionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_pcf_binding) {
        cJSON_Delete(localVarSingleItemJSON_pcf_binding);
        localVarSingleItemJSON_pcf_binding = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Read PCF for a PDU Session Bindings information
//
pcf_binding_t*
PCFBindingsCollectionAPI_getPCFBindings(apiClient_t *apiClient, char * ipv4Addr , char * ipv6Prefix , char * macAddr48 , char * dnn , char * supi , char * gpsi , snssai_t * snssai , char * ipDomain , char * supp_feat )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/pcfBindings")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/pcfBindings");




    // query parameters
    char *keyQuery_ipv4Addr = NULL;
    char * valueQuery_ipv4Addr = NULL;
    keyValuePair_t *keyPairQuery_ipv4Addr = 0;
    if (ipv4Addr)
    {
        keyQuery_ipv4Addr = strdup("ipv4Addr");
        valueQuery_ipv4Addr = strdup((ipv4Addr));
        keyPairQuery_ipv4Addr = keyValuePair_create(keyQuery_ipv4Addr, valueQuery_ipv4Addr);
        list_addElement(localVarQueryParameters,keyPairQuery_ipv4Addr);
    }

    // query parameters
    char *keyQuery_ipv6Prefix = NULL;
    char * valueQuery_ipv6Prefix = NULL;
    keyValuePair_t *keyPairQuery_ipv6Prefix = 0;
    if (ipv6Prefix)
    {
        keyQuery_ipv6Prefix = strdup("ipv6Prefix");
        valueQuery_ipv6Prefix = strdup((ipv6Prefix));
        keyPairQuery_ipv6Prefix = keyValuePair_create(keyQuery_ipv6Prefix, valueQuery_ipv6Prefix);
        list_addElement(localVarQueryParameters,keyPairQuery_ipv6Prefix);
    }

    // query parameters
    char *keyQuery_macAddr48 = NULL;
    char * valueQuery_macAddr48 = NULL;
    keyValuePair_t *keyPairQuery_macAddr48 = 0;
    if (macAddr48)
    {
        keyQuery_macAddr48 = strdup("macAddr48");
        valueQuery_macAddr48 = strdup((macAddr48));
        keyPairQuery_macAddr48 = keyValuePair_create(keyQuery_macAddr48, valueQuery_macAddr48);
        list_addElement(localVarQueryParameters,keyPairQuery_macAddr48);
    }

    // query parameters
    char *keyQuery_dnn = NULL;
    char * valueQuery_dnn = NULL;
    keyValuePair_t *keyPairQuery_dnn = 0;
    if (dnn)
    {
        keyQuery_dnn = strdup("dnn");
        valueQuery_dnn = strdup((dnn));
        keyPairQuery_dnn = keyValuePair_create(keyQuery_dnn, valueQuery_dnn);
        list_addElement(localVarQueryParameters,keyPairQuery_dnn);
    }

    // query parameters
    char *keyQuery_supi = NULL;
    char * valueQuery_supi = NULL;
    keyValuePair_t *keyPairQuery_supi = 0;
    if (supi)
    {
        keyQuery_supi = strdup("supi");
        valueQuery_supi = strdup((supi));
        keyPairQuery_supi = keyValuePair_create(keyQuery_supi, valueQuery_supi);
        list_addElement(localVarQueryParameters,keyPairQuery_supi);
    }

    // query parameters
    char *keyQuery_gpsi = NULL;
    char * valueQuery_gpsi = NULL;
    keyValuePair_t *keyPairQuery_gpsi = 0;
    if (gpsi)
    {
        keyQuery_gpsi = strdup("gpsi");
        valueQuery_gpsi = strdup((gpsi));
        keyPairQuery_gpsi = keyValuePair_create(keyQuery_gpsi, valueQuery_gpsi);
        list_addElement(localVarQueryParameters,keyPairQuery_gpsi);
    }

    // query parameters
    char *keyQuery_snssai = NULL;
    snssai_t * valueQuery_snssai ;
    keyValuePair_t *keyPairQuery_snssai = 0;
    if (snssai)
    {
        keyQuery_snssai = strdup("snssai");
        valueQuery_snssai = (snssai);
        keyPairQuery_snssai = keyValuePair_create(keyQuery_snssai, &valueQuery_snssai);
        list_addElement(localVarQueryParameters,keyPairQuery_snssai);
    }

    // query parameters
    char *keyQuery_ipDomain = NULL;
    char * valueQuery_ipDomain = NULL;
    keyValuePair_t *keyPairQuery_ipDomain = 0;
    if (ipDomain)
    {
        keyQuery_ipDomain = strdup("ipDomain");
        valueQuery_ipDomain = strdup((ipDomain));
        keyPairQuery_ipDomain = keyValuePair_create(keyQuery_ipDomain, valueQuery_ipDomain);
        list_addElement(localVarQueryParameters,keyPairQuery_ipDomain);
    }

    // query parameters
    char *keyQuery_supp_feat = NULL;
    char * valueQuery_supp_feat = NULL;
    keyValuePair_t *keyPairQuery_supp_feat = 0;
    if (supp_feat)
    {
        keyQuery_supp_feat = strdup("supp-feat");
        valueQuery_supp_feat = strdup((supp_feat));
        keyPairQuery_supp_feat = keyValuePair_create(keyQuery_supp_feat, valueQuery_supp_feat);
        list_addElement(localVarQueryParameters,keyPairQuery_supp_feat);
    }
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
    //    printf("%s\n","The individual PCF for a PDU Session binding session binding information resource  matching the query parameter(s) is returned. ");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","There is no PCF for a PDU Session binding information matching the query parameter(s). ");
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
    //if (apiClient->response_code == 414) {
    //    printf("%s\n","URI Too Long");
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
    cJSON *PCFBindingsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    pcf_binding_t *elementToReturn = pcf_binding_parseFromJSON(PCFBindingsCollectionAPIlocalVarJSON);
    cJSON_Delete(PCFBindingsCollectionAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_ipv4Addr){
        free(keyQuery_ipv4Addr);
        keyQuery_ipv4Addr = NULL;
    }
    if(valueQuery_ipv4Addr){
        free(valueQuery_ipv4Addr);
        valueQuery_ipv4Addr = NULL;
    }
    if(keyPairQuery_ipv4Addr){
        keyValuePair_free(keyPairQuery_ipv4Addr);
        keyPairQuery_ipv4Addr = NULL;
    }
    if(keyQuery_ipv6Prefix){
        free(keyQuery_ipv6Prefix);
        keyQuery_ipv6Prefix = NULL;
    }
    if(valueQuery_ipv6Prefix){
        free(valueQuery_ipv6Prefix);
        valueQuery_ipv6Prefix = NULL;
    }
    if(keyPairQuery_ipv6Prefix){
        keyValuePair_free(keyPairQuery_ipv6Prefix);
        keyPairQuery_ipv6Prefix = NULL;
    }
    if(keyQuery_macAddr48){
        free(keyQuery_macAddr48);
        keyQuery_macAddr48 = NULL;
    }
    if(valueQuery_macAddr48){
        free(valueQuery_macAddr48);
        valueQuery_macAddr48 = NULL;
    }
    if(keyPairQuery_macAddr48){
        keyValuePair_free(keyPairQuery_macAddr48);
        keyPairQuery_macAddr48 = NULL;
    }
    if(keyQuery_dnn){
        free(keyQuery_dnn);
        keyQuery_dnn = NULL;
    }
    if(valueQuery_dnn){
        free(valueQuery_dnn);
        valueQuery_dnn = NULL;
    }
    if(keyPairQuery_dnn){
        keyValuePair_free(keyPairQuery_dnn);
        keyPairQuery_dnn = NULL;
    }
    if(keyQuery_supi){
        free(keyQuery_supi);
        keyQuery_supi = NULL;
    }
    if(valueQuery_supi){
        free(valueQuery_supi);
        valueQuery_supi = NULL;
    }
    if(keyPairQuery_supi){
        keyValuePair_free(keyPairQuery_supi);
        keyPairQuery_supi = NULL;
    }
    if(keyQuery_gpsi){
        free(keyQuery_gpsi);
        keyQuery_gpsi = NULL;
    }
    if(valueQuery_gpsi){
        free(valueQuery_gpsi);
        valueQuery_gpsi = NULL;
    }
    if(keyPairQuery_gpsi){
        keyValuePair_free(keyPairQuery_gpsi);
        keyPairQuery_gpsi = NULL;
    }
    if(keyQuery_snssai){
        free(keyQuery_snssai);
        keyQuery_snssai = NULL;
    }
    if(keyPairQuery_snssai){
        keyValuePair_free(keyPairQuery_snssai);
        keyPairQuery_snssai = NULL;
    }
    if(keyQuery_ipDomain){
        free(keyQuery_ipDomain);
        keyQuery_ipDomain = NULL;
    }
    if(valueQuery_ipDomain){
        free(valueQuery_ipDomain);
        valueQuery_ipDomain = NULL;
    }
    if(keyPairQuery_ipDomain){
        keyValuePair_free(keyPairQuery_ipDomain);
        keyPairQuery_ipDomain = NULL;
    }
    if(keyQuery_supp_feat){
        free(keyQuery_supp_feat);
        keyQuery_supp_feat = NULL;
    }
    if(valueQuery_supp_feat){
        free(valueQuery_supp_feat);
        valueQuery_supp_feat = NULL;
    }
    if(keyPairQuery_supp_feat){
        keyValuePair_free(keyPairQuery_supp_feat);
        keyPairQuery_supp_feat = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

