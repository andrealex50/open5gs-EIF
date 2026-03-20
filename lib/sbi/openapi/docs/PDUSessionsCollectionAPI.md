# PDUSessionsCollectionAPI

All URIs are relative to *https://example.com/nsmf-pdusession/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PDUSessionsCollectionAPI_postPduSessions**](PDUSessionsCollectionAPI.md#PDUSessionsCollectionAPI_postPduSessions) | **POST** /pdu-sessions | Create


# **PDUSessionsCollectionAPI_postPduSessions**
```c
// Create
//
pdu_session_created_data_t* PDUSessionsCollectionAPI_postPduSessions(apiClient_t *apiClient, pdu_session_create_data_t * pdu_session_create_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pdu_session_create_data** | **[pdu_session_create_data_t](pdu_session_create_data.md) \*** | representation of the PDU session to be created in the H-SMF or SMF | 

### Return type

[pdu_session_created_data_t](pdu_session_created_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json, multipart/related
 - **Accept**: application/json, multipart/related, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

