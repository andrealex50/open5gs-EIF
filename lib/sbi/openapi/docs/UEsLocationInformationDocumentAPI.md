# UEsLocationInformationDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UEsLocationInformationDocumentAPI_queryUeLocation**](UEsLocationInformationDocumentAPI.md#UEsLocationInformationDocumentAPI_queryUeLocation) | **GET** /subscription-data/{ueId}/context-data/location | Retrieves the UE&#39;s Location Information


# **UEsLocationInformationDocumentAPI_queryUeLocation**
```c
// Retrieves the UE's Location Information
//
location_info_t* UEsLocationInformationDocumentAPI_queryUeLocation(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[location_info_t](location_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

