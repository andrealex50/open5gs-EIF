#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SubsToNotifyCollectionAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Retrieves the list of subscriptions
//
list_t*
SubsToNotifyCollectionAPI_querySubsToNotify(apiClient_t *apiClient, char * ue_id , char * supported_features )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/subs-to-notify")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/subs-to-notify");




    // query parameters
    char *keyQuery_ue_id = NULL;
    char * valueQuery_ue_id = NULL;
    keyValuePair_t *keyPairQuery_ue_id = 0;
    if (ue_id)
    {
        keyQuery_ue_id = strdup("ue-id");
        valueQuery_ue_id = strdup((ue_id));
        keyPairQuery_ue_id = keyValuePair_create(keyQuery_ue_id, valueQuery_ue_id);
        list_addElement(localVarQueryParameters,keyPairQuery_ue_id);
    }

    // query parameters
    char *keyQuery_supported_features = NULL;
    char * valueQuery_supported_features = NULL;
    keyValuePair_t *keyPairQuery_supported_features = 0;
    if (supported_features)
    {
        keyQuery_supported_features = strdup("supported-features");
        valueQuery_supported_features = strdup((supported_features));
        keyPairQuery_supported_features = keyValuePair_create(keyQuery_supported_features, valueQuery_supported_features);
        list_addElement(localVarQueryParameters,keyPairQuery_supported_features);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
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
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    cJSON *SubsToNotifyCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    if(!cJSON_IsArray(SubsToNotifyCollectionAPIlocalVarJSON)) {
        return 0;//nonprimitive container
    }
    list_t *elementToReturn = list_createList();
    cJSON *VarJSON;
    cJSON_ArrayForEach(VarJSON, SubsToNotifyCollectionAPIlocalVarJSON)
    {
        if(!cJSON_IsObject(VarJSON))
        {
           // return 0;
        }
        char *localVarJSONToChar = cJSON_Print(VarJSON);
        list_addElement(elementToReturn , localVarJSONToChar);
    }

    cJSON_Delete( SubsToNotifyCollectionAPIlocalVarJSON);
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
    if(keyQuery_ue_id){
        free(keyQuery_ue_id);
        keyQuery_ue_id = NULL;
    }
    if(valueQuery_ue_id){
        free(valueQuery_ue_id);
        valueQuery_ue_id = NULL;
    }
    if(keyPairQuery_ue_id){
        keyValuePair_free(keyPairQuery_ue_id);
        keyPairQuery_ue_id = NULL;
    }
    if(keyQuery_supported_features){
        free(keyQuery_supported_features);
        keyQuery_supported_features = NULL;
    }
    if(valueQuery_supported_features){
        free(valueQuery_supported_features);
        valueQuery_supported_features = NULL;
    }
    if(keyPairQuery_supported_features){
        keyValuePair_free(keyPairQuery_supported_features);
        keyPairQuery_supported_features = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Deletes subscriptions identified by a given ue-id parameter
//
void
SubsToNotifyCollectionAPI_removeMultipleSubscriptionDataSubscriptions(apiClient_t *apiClient, char * ue_id , char * nf_instance_id , int delete_all_nfs , int implicit_unsubscribe_indication )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/subs-to-notify")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/subs-to-notify");




    // query parameters
    char *keyQuery_ue_id = NULL;
    char * valueQuery_ue_id = NULL;
    keyValuePair_t *keyPairQuery_ue_id = 0;
    if (ue_id)
    {
        keyQuery_ue_id = strdup("ue-id");
        valueQuery_ue_id = strdup((ue_id));
        keyPairQuery_ue_id = keyValuePair_create(keyQuery_ue_id, valueQuery_ue_id);
        list_addElement(localVarQueryParameters,keyPairQuery_ue_id);
    }

    // query parameters
    char *keyQuery_nf_instance_id = NULL;
    char * valueQuery_nf_instance_id = NULL;
    keyValuePair_t *keyPairQuery_nf_instance_id = 0;
    if (nf_instance_id)
    {
        keyQuery_nf_instance_id = strdup("nf-instance-id");
        valueQuery_nf_instance_id = strdup((nf_instance_id));
        keyPairQuery_nf_instance_id = keyValuePair_create(keyQuery_nf_instance_id, valueQuery_nf_instance_id);
        list_addElement(localVarQueryParameters,keyPairQuery_nf_instance_id);
    }

    // query parameters
    char *keyQuery_delete_all_nfs = NULL;
    char * valueQuery_delete_all_nfs = NULL;
    keyValuePair_t *keyPairQuery_delete_all_nfs = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_delete_all_nfs = strdup("delete-all-nfs");
        valueQuery_delete_all_nfs = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_delete_all_nfs, MAX_NUMBER_LENGTH, "%d", delete_all_nfs);
        keyPairQuery_delete_all_nfs = keyValuePair_create(keyQuery_delete_all_nfs, valueQuery_delete_all_nfs);
        list_addElement(localVarQueryParameters,keyPairQuery_delete_all_nfs);
    }

    // query parameters
    char *keyQuery_implicit_unsubscribe_indication = NULL;
    char * valueQuery_implicit_unsubscribe_indication = NULL;
    keyValuePair_t *keyPairQuery_implicit_unsubscribe_indication = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_implicit_unsubscribe_indication = strdup("implicit-unsubscribe-indication");
        valueQuery_implicit_unsubscribe_indication = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_implicit_unsubscribe_indication, MAX_NUMBER_LENGTH, "%d", implicit_unsubscribe_indication);
        keyPairQuery_implicit_unsubscribe_indication = keyValuePair_create(keyQuery_implicit_unsubscribe_indication, valueQuery_implicit_unsubscribe_indication);
        list_addElement(localVarQueryParameters,keyPairQuery_implicit_unsubscribe_indication);
    }
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
    //    printf("%s\n","Expected response to a successful subscription removal");
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
    list_freeList(localVarQueryParameters);
    
    
    
    
    free(localVarPath);
    if(keyQuery_ue_id){
        free(keyQuery_ue_id);
        keyQuery_ue_id = NULL;
    }
    if(valueQuery_ue_id){
        free(valueQuery_ue_id);
        valueQuery_ue_id = NULL;
    }
    if(keyPairQuery_ue_id){
        keyValuePair_free(keyPairQuery_ue_id);
        keyPairQuery_ue_id = NULL;
    }
    if(keyQuery_ue_id){
        free(keyQuery_ue_id);
        keyQuery_ue_id = NULL;
    }
    if(keyPairQuery_ue_id){
        keyValuePair_free(keyPairQuery_ue_id);
        keyPairQuery_ue_id = NULL;
    }
    if(keyQuery_nf_instance_id){
        free(keyQuery_nf_instance_id);
        keyQuery_nf_instance_id = NULL;
    }
    if(valueQuery_nf_instance_id){
        free(valueQuery_nf_instance_id);
        valueQuery_nf_instance_id = NULL;
    }
    if(keyPairQuery_nf_instance_id){
        keyValuePair_free(keyPairQuery_nf_instance_id);
        keyPairQuery_nf_instance_id = NULL;
    }
    if(keyQuery_nf_instance_id){
        free(keyQuery_nf_instance_id);
        keyQuery_nf_instance_id = NULL;
    }
    if(keyPairQuery_nf_instance_id){
        keyValuePair_free(keyPairQuery_nf_instance_id);
        keyPairQuery_nf_instance_id = NULL;
    }

}

// Subscription data subscriptions
//
subscription_data_subscriptions_t*
SubsToNotifyCollectionAPI_subscriptionDataSubscriptions(apiClient_t *apiClient, subscription_data_subscriptions_t * subscription_data_subscriptions )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/subscription-data/subs-to-notify")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/subscription-data/subs-to-notify");




    // Body Param
    cJSON *localVarSingleItemJSON_subscription_data_subscriptions = NULL;
    if (subscription_data_subscriptions != NULL)
    {
        //string
        localVarSingleItemJSON_subscription_data_subscriptions = subscription_data_subscriptions_convertToJSON(subscription_data_subscriptions);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_subscription_data_subscriptions);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
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
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Generic Error");
    //}
    //nonprimitive not container
    cJSON *SubsToNotifyCollectionAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    subscription_data_subscriptions_t *elementToReturn = subscription_data_subscriptions_parseFromJSON(SubsToNotifyCollectionAPIlocalVarJSON);
    cJSON_Delete(SubsToNotifyCollectionAPIlocalVarJSON);
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
    if (localVarSingleItemJSON_subscription_data_subscriptions) {
        cJSON_Delete(localVarSingleItemJSON_subscription_data_subscriptions);
        localVarSingleItemJSON_subscription_data_subscriptions = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

