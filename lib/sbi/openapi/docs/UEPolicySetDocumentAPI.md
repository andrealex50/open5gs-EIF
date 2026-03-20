# UEPolicySetDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**UEPolicySetDocumentAPI_createOrReplaceUEPolicySet**](UEPolicySetDocumentAPI.md#UEPolicySetDocumentAPI_createOrReplaceUEPolicySet) | **PUT** /policy-data/ues/{ueId}/ue-policy-set | Create or modify the UE policy set data for a subscriber
[**UEPolicySetDocumentAPI_readUEPolicySet**](UEPolicySetDocumentAPI.md#UEPolicySetDocumentAPI_readUEPolicySet) | **GET** /policy-data/ues/{ueId}/ue-policy-set | Retrieves the UE policy set data for a subscriber
[**UEPolicySetDocumentAPI_updateUEPolicySet**](UEPolicySetDocumentAPI.md#UEPolicySetDocumentAPI_updateUEPolicySet) | **PATCH** /policy-data/ues/{ueId}/ue-policy-set | Modify the UE policy set data for a subscriber


# **UEPolicySetDocumentAPI_createOrReplaceUEPolicySet**
```c
// Create or modify the UE policy set data for a subscriber
//
ue_policy_set_t* UEPolicySetDocumentAPI_createOrReplaceUEPolicySet(apiClient_t *apiClient, char * ueId, ue_policy_set_t * ue_policy_set);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**ue_policy_set** | **[ue_policy_set_t](ue_policy_set.md) \*** |  | 

### Return type

[ue_policy_set_t](ue_policy_set.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UEPolicySetDocumentAPI_readUEPolicySet**
```c
// Retrieves the UE policy set data for a subscriber
//
ue_policy_set_t* UEPolicySetDocumentAPI_readUEPolicySet(apiClient_t *apiClient, char * ueId, char * supp_feat);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**supp_feat** | **char \*** | Supported Features | [optional] 

### Return type

[ue_policy_set_t](ue_policy_set.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **UEPolicySetDocumentAPI_updateUEPolicySet**
```c
// Modify the UE policy set data for a subscriber
//
void UEPolicySetDocumentAPI_updateUEPolicySet(apiClient_t *apiClient, char * ueId, ue_policy_set_patch_t * ue_policy_set_patch);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** |  | 
**ue_policy_set_patch** | **[ue_policy_set_patch_t](ue_policy_set_patch.md) \*** |  | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/merge-patch+json
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

