# UELocationInformationRetrievalAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UELocationInformationRetrievalAPI_getLocationInfo**](UELocationInformationRetrievalAPI.md#UELocationInformationRetrievalAPI_getLocationInfo) | **GET** /{ueId}/registrations/location | retrieve the target UE&#39;s location information


# **UELocationInformationRetrievalAPI_getLocationInfo**
```c
// retrieve the target UE's location information
//
location_info_t* UELocationInformationRetrievalAPI_getLocationInfo(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** |  | [optional] 

### Return type

[location_info_t](location_info.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

