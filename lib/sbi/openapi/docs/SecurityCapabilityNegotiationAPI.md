# SecurityCapabilityNegotiationAPI

All URIs are relative to *https://example.com/n32c-handshake/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SecurityCapabilityNegotiationAPI_postExchangeCapability**](SecurityCapabilityNegotiationAPI.md#SecurityCapabilityNegotiationAPI_postExchangeCapability) | **POST** /exchange-capability | Security Capability Negotiation


# **SecurityCapabilityNegotiationAPI_postExchangeCapability**
```c
// Security Capability Negotiation
//
sec_negotiate_rsp_data_t* SecurityCapabilityNegotiationAPI_postExchangeCapability(apiClient_t *apiClient, sec_negotiate_req_data_t * sec_negotiate_req_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sec_negotiate_req_data** | **[sec_negotiate_req_data_t](sec_negotiate_req_data.md) \*** | Custom operation for security capability negotiation | 

### Return type

[sec_negotiate_rsp_data_t](sec_negotiate_rsp_data.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

