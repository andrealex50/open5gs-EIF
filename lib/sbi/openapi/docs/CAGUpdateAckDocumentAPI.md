# CAGUpdateAckDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**CAGUpdateAckDocumentAPI_createCagUpdateAck**](CAGUpdateAckDocumentAPI.md#CAGUpdateAckDocumentAPI_createCagUpdateAck) | **PUT** /subscription-data/{ueId}/ue-update-confirmation-data/subscribed-cag | To store the CAG update acknowledgement information of a UE


# **CAGUpdateAckDocumentAPI_createCagUpdateAck**
```c
// To store the CAG update acknowledgement information of a UE
//
void CAGUpdateAckDocumentAPI_createCagUpdateAck(apiClient_t *apiClient, char * ueId, cag_ack_data_t * cag_ack_data, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**cag_ack_data** | **[cag_ack_data_t](cag_ack_data.md) \*** |  | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

