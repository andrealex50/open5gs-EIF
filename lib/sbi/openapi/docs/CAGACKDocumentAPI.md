# CAGACKDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CAGACKDocumentAPI_queryCagAck**](CAGACKDocumentAPI.md#CAGACKDocumentAPI_queryCagAck) | **GET** /subscription-data/{ueId}/ue-update-confirmation-data/subscribed-cag | Retrieves the CAG acknowledgement information of a UE


# **CAGACKDocumentAPI_queryCagAck**
```c
// Retrieves the CAG acknowledgement information of a UE
//
cag_ack_data_t* CAGACKDocumentAPI_queryCagAck(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[cag_ack_data_t](cag_ack_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

