# SMSFDeregistrationForNon3GPPAccessAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMSFDeregistrationForNon3GPPAccessAPI_non3GppSmsfDeregistration**](SMSFDeregistrationForNon3GPPAccessAPI.md#SMSFDeregistrationForNon3GPPAccessAPI_non3GppSmsfDeregistration) | **DELETE** /{ueId}/registrations/smsf-non-3gpp-access | delete SMSF registration for non 3GPP access


# **SMSFDeregistrationForNon3GPPAccessAPI_non3GppSmsfDeregistration**
```c
// delete SMSF registration for non 3GPP access
//
void SMSFDeregistrationForNon3GPPAccessAPI_non3GppSmsfDeregistration(apiClient_t *apiClient, char * ueId, char * smsf_set_id, char * If_Match);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**smsf_set_id** | **char \*** |  | [optional] 
**If_Match** | **char \*** | Validator for conditional requests, as described in IETF RFC 7232, 3.1 | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

