# N32FContextTerminateAPI

All URIs are relative to *https://example.com/n32c-handshake/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**N32FContextTerminateAPI_postN32fTerminate**](N32FContextTerminateAPI.md#N32FContextTerminateAPI_postN32fTerminate) | **POST** /n32f-terminate | N32-f Context Terminate


# **N32FContextTerminateAPI_postN32fTerminate**
```c
// N32-f Context Terminate
//
n32f_context_info_t* N32FContextTerminateAPI_postN32fTerminate(apiClient_t *apiClient, n32f_context_info_t * n32f_context_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**n32f_context_info** | **[n32f_context_info_t](n32f_context_info.md) \*** | Custom operation for n32-f context termination | 

### Return type

[n32f_context_info_t](n32f_context_info.md) *


### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

