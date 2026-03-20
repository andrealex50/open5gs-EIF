# ParameterExchangeAPI

All URIs are relative to *https://example.com/n32c-handshake/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ParameterExchangeAPI_postExchangeParams**](ParameterExchangeAPI.md#ParameterExchangeAPI_postExchangeParams) | **POST** /exchange-params | Parameter Exchange


# **ParameterExchangeAPI_postExchangeParams**
```c
// Parameter Exchange
//
sec_param_exch_rsp_data_t* ParameterExchangeAPI_postExchangeParams(apiClient_t *apiClient, sec_param_exch_req_data_t * sec_param_exch_req_data);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sec_param_exch_req_data** | **[sec_param_exch_req_data_t](sec_param_exch_req_data.md) \*** | Custom operation for parameter exchange | 

### Return type

[sec_param_exch_rsp_data_t](sec_param_exch_rsp_data.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

