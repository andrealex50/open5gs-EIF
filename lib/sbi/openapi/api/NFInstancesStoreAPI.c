#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "NFInstancesStoreAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for NFInstancesStoreAPI_getNFInstances

static char* getNFInstances__ToString(nrf_nfmanagement_service_getNFInstances_nf-type_e ){
    char *Array[] =  { "NULL", "NRF", "UDM", "AMF", "SMF", "AUSF", "NEF", "PCF", "SMSF", "NSSF", "UDR", "LMF", "GMLC", "5G_EIR", "SEPP", "UPF", "N3IWF", "AF", "UDSF", "BSF", "CHF", "NWDAF", "PCSCF", "CBCF", "HSS", "UCMF", "SOR_AF", "SPAF", "MME", "SCSAS", "SCEF", "SCP", "NSSAAF", "ICSCF", "SCSCF", "DRA", "IMS_AS", "AANF", "5G_DDNMF", "NSACF", "MFAF", "EASDF", "DCCF", "MB_SMF", "TSCTSF", "ADRF", "GBA_BSF", "CEF", "MB_UPF", "NSWOF", "PKMF", "MNPF", "SMS_GMSC", "SMS_IWMSC", "MBSF", "MBSTF", "PANF" };
    return Array[];
}

static nrf_nfmanagement_service_getNFInstances_nf-type_e getNFInstances__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "NRF", "UDM", "AMF", "SMF", "AUSF", "NEF", "PCF", "SMSF", "NSSF", "UDR", "LMF", "GMLC", "5G_EIR", "SEPP", "UPF", "N3IWF", "AF", "UDSF", "BSF", "CHF", "NWDAF", "PCSCF", "CBCF", "HSS", "UCMF", "SOR_AF", "SPAF", "MME", "SCSAS", "SCEF", "SCP", "NSSAAF", "ICSCF", "SCSCF", "DRA", "IMS_AS", "AANF", "5G_DDNMF", "NSACF", "MFAF", "EASDF", "DCCF", "MB_SMF", "TSCTSF", "ADRF", "GBA_BSF", "CEF", "MB_UPF", "NSWOF", "PKMF", "MNPF", "SMS_GMSC", "SMS_IWMSC", "MBSF", "MBSTF", "PANF" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function getNFInstances__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *getNFInstances__convertToJSON(nrf_nfmanagement_service_getNFInstances_nf-type_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function getNFInstances__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static nrf_nfmanagement_service_getNFInstances_nf-type_e getNFInstances__parseFromJSON(cJSON* JSON) {
    nrf_nfmanagement_service_getNFInstances_nf-type_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// Retrieves a collection of NF Instances
//
uri_list_t*
NFInstancesStoreAPI_getNFInstances(apiClient_t *apiClient, nf_type_e nf_type , int limit , int page_number , int page_size )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/nf-instances")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/nf-instances");




    // query parameters
    char *keyQuery_nf_type = NULL;
    nf_type_e valueQuery_nf_type ;
    keyValuePair_t *keyPairQuery_nf_type = 0;
    if (nf_type)
    {
        keyQuery_nf_type = strdup("nf-type");
        valueQuery_nf_type = (nf_type);
        keyPairQuery_nf_type = keyValuePair_create(keyQuery_nf_type, (void *)strdup(getNFInstances__ToString(
		&valueQuery_nf_type)));
        list_addElement(localVarQueryParameters,keyPairQuery_nf_type);
    }

    // query parameters
    char *keyQuery_limit = NULL;
    char * valueQuery_limit = NULL;
    keyValuePair_t *keyPairQuery_limit = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_limit = strdup("limit");
        valueQuery_limit = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_limit, MAX_NUMBER_LENGTH, "%d", limit);
        keyPairQuery_limit = keyValuePair_create(keyQuery_limit, valueQuery_limit);
        list_addElement(localVarQueryParameters,keyPairQuery_limit);
    }

    // query parameters
    char *keyQuery_page_number = NULL;
    char * valueQuery_page_number = NULL;
    keyValuePair_t *keyPairQuery_page_number = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_page_number = strdup("page-number");
        valueQuery_page_number = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_page_number, MAX_NUMBER_LENGTH, "%d", page_number);
        keyPairQuery_page_number = keyValuePair_create(keyQuery_page_number, valueQuery_page_number);
        list_addElement(localVarQueryParameters,keyPairQuery_page_number);
    }

    // query parameters
    char *keyQuery_page_size = NULL;
    char * valueQuery_page_size = NULL;
    keyValuePair_t *keyPairQuery_page_size = 0;
    if (1) // Always send integer parameters to the API server
    {
        keyQuery_page_size = strdup("page-size");
        valueQuery_page_size = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_page_size, MAX_NUMBER_LENGTH, "%d", page_size);
        keyPairQuery_page_size = keyValuePair_create(keyQuery_page_size, valueQuery_page_size);
        list_addElement(localVarQueryParameters,keyPairQuery_page_size);
    }
    list_addElement(localVarHeaderType,"application/3gppHal+json"); //produces
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
    //    printf("%s\n","Expected response to a valid request");
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
    cJSON *NFInstancesStoreAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    uri_list_t *elementToReturn = uri_list_parseFromJSON(NFInstancesStoreAPIlocalVarJSON);
    cJSON_Delete(NFInstancesStoreAPIlocalVarJSON);
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
    if(keyQuery_nf_type){
        free(keyQuery_nf_type);
        keyQuery_nf_type = NULL;
    }
    if(keyPairQuery_nf_type){
        keyValuePair_free(keyPairQuery_nf_type);
        keyPairQuery_nf_type = NULL;
    }
    if(keyQuery_limit){
        free(keyQuery_limit);
        keyQuery_limit = NULL;
    }
    if(valueQuery_limit){
        free(valueQuery_limit);
        valueQuery_limit = NULL;
    }
    if(keyPairQuery_limit){
        keyValuePair_free(keyPairQuery_limit);
        keyPairQuery_limit = NULL;
    }
    if(keyQuery_page_number){
        free(keyQuery_page_number);
        keyQuery_page_number = NULL;
    }
    if(valueQuery_page_number){
        free(valueQuery_page_number);
        valueQuery_page_number = NULL;
    }
    if(keyPairQuery_page_number){
        keyValuePair_free(keyPairQuery_page_number);
        keyPairQuery_page_number = NULL;
    }
    if(keyQuery_page_size){
        free(keyQuery_page_size);
        keyQuery_page_size = NULL;
    }
    if(valueQuery_page_size){
        free(valueQuery_page_size);
        valueQuery_page_size = NULL;
    }
    if(keyPairQuery_page_size){
        keyValuePair_free(keyPairQuery_page_size);
        keyPairQuery_page_size = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Discover communication options supported by NRF for NF Instances
//
options_response_t*
NFInstancesStoreAPI_optionsNFInstances(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/nf-instances")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/nf-instances");



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
                    "OPTIONS");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","OK");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 204) {
    //    printf("%s\n","No Content");
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
    //if (apiClient->response_code == 405) {
    //    printf("%s\n","Method Not Allowed");
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
    cJSON *NFInstancesStoreAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    options_response_t *elementToReturn = options_response_parseFromJSON(NFInstancesStoreAPIlocalVarJSON);
    cJSON_Delete(NFInstancesStoreAPIlocalVarJSON);
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

