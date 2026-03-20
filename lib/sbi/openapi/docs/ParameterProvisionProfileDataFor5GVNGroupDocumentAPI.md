# ParameterProvisionProfileDataFor5GVNGroupDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ParameterProvisionProfileDataFor5GVNGroupDocumentAPI_query5GVNGroupPPData**](ParameterProvisionProfileDataFor5GVNGroupDocumentAPI.md#ParameterProvisionProfileDataFor5GVNGroupDocumentAPI_query5GVNGroupPPData) | **GET** /subscription-data/group-data/5g-vn-groups/pp-profile-data | Retrieves the parameter provision profile data for 5G VN Group


# **ParameterProvisionProfileDataFor5GVNGroupDocumentAPI_query5GVNGroupPPData**
```c
// Retrieves the parameter provision profile data for 5G VN Group
//
pp5g_vn_group_profile_data_t* ParameterProvisionProfileDataFor5GVNGroupDocumentAPI_query5GVNGroupPPData(apiClient_t *apiClient, list_t * ext_group_ids, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ext_group_ids** | **[list_t](char.md) \*** | List of external VN group identifiers | [optional] 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[pp5g_vn_group_profile_data_t](pp5g_vn_group_profile_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

