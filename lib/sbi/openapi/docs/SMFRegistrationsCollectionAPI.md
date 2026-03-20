# SMFRegistrationsCollectionAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFRegistrationsCollectionAPI_querySmfRegList**](SMFRegistrationsCollectionAPI.md#SMFRegistrationsCollectionAPI_querySmfRegList) | **GET** /subscription-data/{ueId}/context-data/smf-registrations | Retrieves the SMF registration list of a UE


# **SMFRegistrationsCollectionAPI_querySmfRegList**
```c
// Retrieves the SMF registration list of a UE
//
list_t* SMFRegistrationsCollectionAPI_querySmfRegList(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[list_t](smf_registration.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

