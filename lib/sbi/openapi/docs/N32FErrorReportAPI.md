# N32FErrorReportAPI

All URIs are relative to *https://example.com/n32c-handshake/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**N32FErrorReportAPI_postN32fError**](N32FErrorReportAPI.md#N32FErrorReportAPI_postN32fError) | **POST** /n32f-error | N32-f Error Reporting Procedure


# **N32FErrorReportAPI_postN32fError**
```c
// N32-f Error Reporting Procedure
//
void N32FErrorReportAPI_postN32fError(apiClient_t *apiClient, n32f_error_info_t * n32f_error_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**n32f_error_info** | **[n32f_error_info_t](n32f_error_info.md) \*** | Custom operation for n32-f error reporting procedure | 

### Return type

void

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

