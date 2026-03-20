# EventExposureDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventExposureDataDocumentAPI_queryEEData**](EventExposureDataDocumentAPI.md#EventExposureDataDocumentAPI_queryEEData) | **GET** /subscription-data/{ueId}/ee-profile-data | Retrieves the ee profile data of a UE


# **EventExposureDataDocumentAPI_queryEEData**
```c
// Retrieves the ee profile data of a UE
//
ee_profile_data_t* EventExposureDataDocumentAPI_queryEEData(apiClient_t *apiClient, char * ueId, list_t * fields, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**fields** | **[list_t](char.md) \*** | attributes to be retrieved | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[ee_profile_data_t](ee_profile_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

