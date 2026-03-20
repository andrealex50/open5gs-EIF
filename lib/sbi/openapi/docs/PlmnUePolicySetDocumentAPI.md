# PlmnUePolicySetDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**PlmnUePolicySetDocumentAPI_readPlmnUePolicySet**](PlmnUePolicySetDocumentAPI.md#PlmnUePolicySetDocumentAPI_readPlmnUePolicySet) | **GET** /policy-data/plmns/{plmnId}/ue-policy-set | Retrieve the UE policy set data for an H-PLMN


# **PlmnUePolicySetDocumentAPI_readPlmnUePolicySet**
```c
// Retrieve the UE policy set data for an H-PLMN
//
ue_policy_set_t* PlmnUePolicySetDocumentAPI_readPlmnUePolicySet(apiClient_t *apiClient, char * plmnId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**plmnId** | **char \*** |  | 

### Return type

[ue_policy_set_t](ue_policy_set.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

