# IndividualAuthenticationStatusDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualAuthenticationStatusDocumentAPI_createIndividualAuthenticationStatus**](IndividualAuthenticationStatusDocumentAPI.md#IndividualAuthenticationStatusDocumentAPI_createIndividualAuthenticationStatus) | **PUT** /subscription-data/{ueId}/authentication-data/authentication-status/{servingNetworkName} | To store the individual Authentication Status data of a UE


# **IndividualAuthenticationStatusDocumentAPI_createIndividualAuthenticationStatus**
```c
// To store the individual Authentication Status data of a UE
//
void IndividualAuthenticationStatusDocumentAPI_createIndividualAuthenticationStatus(apiClient_t *apiClient, char * ueId, char * servingNetworkName, auth_event_t * auth_event);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**servingNetworkName** | **char \*** | Serving Network Name | 
**auth_event** | **[auth_event_t](auth_event.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

