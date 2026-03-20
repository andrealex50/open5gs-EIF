#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "InfluenceDataSubscriptionsCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Create a new Individual Influence Data Subscription resource
//
traffic_influ_sub_t*
InfluenceDataSubscriptionsCollectionAPI_createIndividualInfluenceDataSubscription(apiClient_t *apiClient, traffic_influ_sub_t * traffic_influ_sub )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/influenceData/subs-to-notify")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/influenceData/subs-to-notify");




    // Body Param
    cJSON *localVarSingleItemJSON_traffic_influ_sub = NULL;
    if (traffic_influ_sub != NULL)
    {
        //string
        localVarSingleItemJSON_traffic_influ_sub = traffic_influ_sub_convertToJSON(traffic_influ_sub);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_traffic_influ_sub);
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
    //    printf("%s\n","The subscription was created successfully.");
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
    cJSON *InfluenceDataSubscriptionsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    traffic_influ_sub_t *elementToReturn = traffic_influ_sub_parseFromJSON(InfluenceDataSubscriptionsCollectionAPIlocalVarJSON);
    cJSON_Delete(InfluenceDataSubscriptionsCollectionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_traffic_influ_sub) {
        cJSON_Delete(localVarSingleItemJSON_traffic_influ_sub);
        localVarSingleItemJSON_traffic_influ_sub = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Read Influence Data Subscriptions
//
list_t*
InfluenceDataSubscriptionsCollectionAPI_readInfluenceDataSubscriptions(apiClient_t *apiClient, char * dnn , snssai_t * snssai , char * internal_Group_Id , char * supi )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/application-data/influenceData/subs-to-notify")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/application-data/influenceData/subs-to-notify");




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
    char *keyQuery_internal_Group_Id = NULL;
    char * valueQuery_internal_Group_Id = NULL;
    keyValuePair_t *keyPairQuery_internal_Group_Id = 0;
    if (internal_Group_Id)
    {
        keyQuery_internal_Group_Id = strdup("internal-Group-Id");
        valueQuery_internal_Group_Id = strdup((internal_Group_Id));
        keyPairQuery_internal_Group_Id = keyValuePair_create(keyQuery_internal_Group_Id, valueQuery_internal_Group_Id);
        list_addElement(localVarQueryParameters,keyPairQuery_internal_Group_Id);
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
    //    printf("%s\n","The subscription information as request in the request URI query parameter(s) are returned. ");
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
    cJSON *InfluenceDataSubscriptionsCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(InfluenceDataSubscriptionsCollectionAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, InfluenceDataSubscriptionsCollectionAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( InfluenceDataSubscriptionsCollectionAPIlocalVarJSON);
    cJSON_Delete( VarJSON);
    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
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
    if(keyQuery_snssai){
        free(keyQuery_snssai);
        keyQuery_snssai = NULL;
    }
    if(keyPairQuery_snssai){
        keyValuePair_free(keyPairQuery_snssai);
        keyPairQuery_snssai = NULL;
    }
    if(keyQuery_internal_Group_Id){
        free(keyQuery_internal_Group_Id);
        keyQuery_internal_Group_Id = NULL;
    }
    if(valueQuery_internal_Group_Id){
        free(valueQuery_internal_Group_Id);
        valueQuery_internal_Group_Id = NULL;
    }
    if(keyPairQuery_internal_Group_Id){
        keyValuePair_free(keyPairQuery_internal_Group_Id);
        keyPairQuery_internal_Group_Id = NULL;
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
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

