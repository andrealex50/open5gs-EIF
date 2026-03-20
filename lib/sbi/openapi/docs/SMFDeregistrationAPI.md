# SMFDeregistrationAPI

All URIs are relative to *https://example.com/nudm-uecm/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SMFDeregistrationAPI_smfDeregistration**](SMFDeregistrationAPI.md#SMFDeregistrationAPI_smfDeregistration) | **DELETE** /{ueId}/registrations/smf-registrations/{pduSessionId} | delete an SMF registration


# **SMFDeregistrationAPI_smfDeregistration**
```c
// delete an SMF registration
//
void SMFDeregistrationAPI_smfDeregistration(apiClient_t *apiClient, char * ueId, int pduSessionId, char * smf_set_id, char * smf_instance_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | Identifier of the UE | 
**pduSessionId** | **int** | Identifier of the PDU session | 
**smf_set_id** | **char \*** |  | [optional] 
**smf_instance_id** | **char \*** |  | [optional] 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

