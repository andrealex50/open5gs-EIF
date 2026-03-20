# IndividualEnergyEventExposureSubscriptionDocumentAPI

All URIs are relative to *https://example.com/neif-ee/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualEnergyEventExposureSubscriptionDocumentAPI_deleteIndEnergyEESubsc**](IndividualEnergyEventExposureSubscriptionDocumentAPI.md#IndividualEnergyEventExposureSubscriptionDocumentAPI_deleteIndEnergyEESubsc) | **DELETE** /subscriptions/{subId} | Request the deletion of an existing Individual Energy Event Exposure Subscription resource.
[**IndividualEnergyEventExposureSubscriptionDocumentAPI_getIndEnergyEESubsc**](IndividualEnergyEventExposureSubscriptionDocumentAPI.md#IndividualEnergyEventExposureSubscriptionDocumentAPI_getIndEnergyEESubsc) | **GET** /subscriptions/{subId} | Retrieve an existing Individual Energy Event Exposure Subscription resource.
[**IndividualEnergyEventExposureSubscriptionDocumentAPI_modifyIndEnergyEESubsc**](IndividualEnergyEventExposureSubscriptionDocumentAPI.md#IndividualEnergyEventExposureSubscriptionDocumentAPI_modifyIndEnergyEESubsc) | **PATCH** /subscriptions/{subId} | Request the modification of an existing Individual Energy Event Exposure Subscription resource.
[**IndividualEnergyEventExposureSubscriptionDocumentAPI_updateIndEnergyEESubsc**](IndividualEnergyEventExposureSubscriptionDocumentAPI.md#IndividualEnergyEventExposureSubscriptionDocumentAPI_updateIndEnergyEESubsc) | **PUT** /subscriptions/{subId} | Request the update of an existing Individual Energy Event Exposure Subscription resource.


# **IndividualEnergyEventExposureSubscriptionDocumentAPI_deleteIndEnergyEESubsc**
```c
// Request the deletion of an existing Individual Energy Event Exposure Subscription resource.
//
void IndividualEnergyEventExposureSubscriptionDocumentAPI_deleteIndEnergyEESubsc(apiClient_t *apiClient, char * subId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subId** | **char \*** | Represents the identifier of the Individual Energy Event Exposure Subscription resource.  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualEnergyEventExposureSubscriptionDocumentAPI_getIndEnergyEESubsc**
```c
// Retrieve an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t* IndividualEnergyEventExposureSubscriptionDocumentAPI_getIndEnergyEESubsc(apiClient_t *apiClient, char * subId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subId** | **char \*** | Represents the identifier of the Individual Energy Event Exposure Subscription resource.  | 

### Return type

[energy_ee_subsc_t](energy_ee_subsc.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualEnergyEventExposureSubscriptionDocumentAPI_modifyIndEnergyEESubsc**
```c
// Request the modification of an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t* IndividualEnergyEventExposureSubscriptionDocumentAPI_modifyIndEnergyEESubsc(apiClient_t *apiClient, char * subId, energy_ee_subsc_patch_t * energy_ee_subsc_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subId** | **char \*** | Represents the identifier of the Individual Energy Event Exposure Subscription resource.  | 
**energy_ee_subsc_patch** | **[energy_ee_subsc_patch_t](energy_ee_subsc_patch.md) \*** |  | 

### Return type

[energy_ee_subsc_t](energy_ee_subsc.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **IndividualEnergyEventExposureSubscriptionDocumentAPI_updateIndEnergyEESubsc**
```c
// Request the update of an existing Individual Energy Event Exposure Subscription resource.
//
energy_ee_subsc_t* IndividualEnergyEventExposureSubscriptionDocumentAPI_updateIndEnergyEESubsc(apiClient_t *apiClient, char * subId, energy_ee_subsc_t * energy_ee_subsc);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subId** | **char \*** | Represents the identifier of the Individual Energy Event Exposure Subscription resource.  | 
**energy_ee_subsc** | **[energy_ee_subsc_t](energy_ee_subsc.md) \*** |  | 

### Return type

[energy_ee_subsc_t](energy_ee_subsc.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

