# IndividualApplicationDataSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualApplicationDataSubscriptionDocumentAPI_deleteIndividualApplicationDataSubscription**](IndividualApplicationDataSubscriptionDocumentAPI.md#IndividualApplicationDataSubscriptionDocumentAPI_deleteIndividualApplicationDataSubscription) | **DELETE** /application-data/subs-to-notify/{subsId} | Delete the individual Application Data subscription
[**IndividualApplicationDataSubscriptionDocumentAPI_readIndividualApplicationDataSubscription**](IndividualApplicationDataSubscriptionDocumentAPI.md#IndividualApplicationDataSubscriptionDocumentAPI_readIndividualApplicationDataSubscription) | **GET** /application-data/subs-to-notify/{subsId} | Get an existing individual Application Data Subscription resource
[**IndividualApplicationDataSubscriptionDocumentAPI_replaceIndividualApplicationDataSubscription**](IndividualApplicationDataSubscriptionDocumentAPI.md#IndividualApplicationDataSubscriptionDocumentAPI_replaceIndividualApplicationDataSubscription) | **PUT** /application-data/subs-to-notify/{subsId} | Modify a subscription to receive notification of application data changes


# **IndividualApplicationDataSubscriptionDocumentAPI_deleteIndividualApplicationDataSubscription**
```c
// Delete the individual Application Data subscription
//
void IndividualApplicationDataSubscriptionDocumentAPI_deleteIndividualApplicationDataSubscription(apiClient_t *apiClient, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualApplicationDataSubscriptionDocumentAPI_readIndividualApplicationDataSubscription**
```c
// Get an existing individual Application Data Subscription resource
//
application_data_subs_t* IndividualApplicationDataSubscriptionDocumentAPI_readIndividualApplicationDataSubscription(apiClient_t *apiClient, char * subsId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** | String identifying a subscription to the Individual Application Data Subscription  | 

### Return type

[application_data_subs_t](application_data_subs.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualApplicationDataSubscriptionDocumentAPI_replaceIndividualApplicationDataSubscription**
```c
// Modify a subscription to receive notification of application data changes
//
application_data_subs_t* IndividualApplicationDataSubscriptionDocumentAPI_replaceIndividualApplicationDataSubscription(apiClient_t *apiClient, char * subsId, application_data_subs_t * application_data_subs);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subsId** | **char \*** |  | 
**application_data_subs** | **[application_data_subs_t](application_data_subs.md) \*** |  | 

### Return type

[application_data_subs_t](application_data_subs.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

