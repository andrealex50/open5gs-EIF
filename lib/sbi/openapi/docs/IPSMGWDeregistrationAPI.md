# IPSMGWDeregistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IPSMGWDeregistrationAPI_ipSmGwDeregistration**](IPSMGWDeregistrationAPI.md#IPSMGWDeregistrationAPI_ipSmGwDeregistration) | **DELETE** /{ueId}/registrations/ip-sm-gw | Delete the IP-SM-GW registration


# **IPSMGWDeregistrationAPI_ipSmGwDeregistration**
```c
// Delete the IP-SM-GW registration
//
void IPSMGWDeregistrationAPI_ipSmGwDeregistration(apiClient_t *apiClient, char * ueId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

