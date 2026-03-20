# QueryODBDataBySUPIOrGPSIDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**QueryODBDataBySUPIOrGPSIDocumentAPI_getOdbData**](QueryODBDataBySUPIOrGPSIDocumentAPI.md#QueryODBDataBySUPIOrGPSIDocumentAPI_getOdbData) | **GET** /subscription-data/{ueId}/operator-determined-barring-data | Retrieve ODB Data data by SUPI or GPSI


# **QueryODBDataBySUPIOrGPSIDocumentAPI_getOdbData**
```c
// Retrieve ODB Data data by SUPI or GPSI
//
odb_data_t* QueryODBDataBySUPIOrGPSIDocumentAPI_getOdbData(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE ID | 

### Return type

[odb_data_t](odb_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

