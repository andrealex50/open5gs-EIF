# NSSAIUpdateAckDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**NSSAIUpdateAckDocumentAPI_createOrUpdateNssaiAck**](NSSAIUpdateAckDocumentAPI.md#NSSAIUpdateAckDocumentAPI_createOrUpdateNssaiAck) | **PUT** /subscription-data/{ueId}/ue-update-confirmation-data/subscribed-snssais | To store the NSSAI update acknowledgement information of a UE


# **NSSAIUpdateAckDocumentAPI_createOrUpdateNssaiAck**
```c
// To store the NSSAI update acknowledgement information of a UE
//
void NSSAIUpdateAckDocumentAPI_createOrUpdateNssaiAck(apiClient_t *apiClient, char * ueId, nssai_ack_data_t * nssai_ack_data, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**nssai_ack_data** | **[nssai_ack_data_t](nssai_ack_data.md) \*** |  | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

