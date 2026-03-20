# SendRoutingInfoSMCustomOperationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SendRoutingInfoSMCustomOperationAPI_sendRoutingInfoSm**](SendRoutingInfoSMCustomOperationAPI.md#SendRoutingInfoSMCustomOperationAPI_sendRoutingInfoSm) | **POST** /{ueId}/registrations/send-routing-info-sm | Retreive addressing information for SMS delivery


# **SendRoutingInfoSMCustomOperationAPI_sendRoutingInfoSm**
```c
// Retreive addressing information for SMS delivery
//
routing_info_sm_response_t* SendRoutingInfoSMCustomOperationAPI_sendRoutingInfoSm(apiClient_t *apiClient, char * ueId, routing_info_sm_request_t * routing_info_sm_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**routing_info_sm_request** | **[routing_info_sm_request_t](routing_info_sm_request.md) \*** |  | 

### Return type

[routing_info_sm_response_t](routing_info_sm_response.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

