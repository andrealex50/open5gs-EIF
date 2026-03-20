# EnergyEventExposureSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/neif-ee/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EnergyEventExposureSubscriptionsCollectionAPI_createEnergyEESubsc**](EnergyEventExposureSubscriptionsCollectionAPI.md#EnergyEventExposureSubscriptionsCollectionAPI_createEnergyEESubsc) | **POST** /subscriptions | Request the creation of an Energy Event Exposure Subscription.
[**EnergyEventExposureSubscriptionsCollectionAPI_getEnergyEESubscs**](EnergyEventExposureSubscriptionsCollectionAPI.md#EnergyEventExposureSubscriptionsCollectionAPI_getEnergyEESubscs) | **GET** /subscriptions | Retrieve all the active Energy Event Exposure Subscription(s) managed by the EIF.


# **EnergyEventExposureSubscriptionsCollectionAPI_createEnergyEESubsc**
```c
// Request the creation of an Energy Event Exposure Subscription.
//
energy_ee_subsc_t* EnergyEventExposureSubscriptionsCollectionAPI_createEnergyEESubsc(apiClient_t *apiClient, energy_ee_subsc_t * energy_ee_subsc);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**energy_ee_subsc** | **[energy_ee_subsc_t](energy_ee_subsc.md) \*** |  | 

### Return type

[energy_ee_subsc_t](energy_ee_subsc.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **EnergyEventExposureSubscriptionsCollectionAPI_getEnergyEESubscs**
```c
// Retrieve all the active Energy Event Exposure Subscription(s) managed by the EIF.
//
list_t* EnergyEventExposureSubscriptionsCollectionAPI_getEnergyEESubscs(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[list_t](energy_ee_subsc.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

