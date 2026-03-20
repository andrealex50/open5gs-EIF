# TraceDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**TraceDataDocumentAPI_queryTraceData**](TraceDataDocumentAPI.md#TraceDataDocumentAPI_queryTraceData) | **GET** /subscription-data/{ueId}/{servingPlmnId}/provisioned-data/trace-data | Retrieves the trace configuration data of a UE


# **TraceDataDocumentAPI_queryTraceData**
```c
// Retrieves the trace configuration data of a UE
//
trace_data_t* TraceDataDocumentAPI_queryTraceData(apiClient_t *apiClient, char * ueId, char * servingPlmnId, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingPlmnId** | **char \*** | PLMN ID | 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[trace_data_t](trace_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

