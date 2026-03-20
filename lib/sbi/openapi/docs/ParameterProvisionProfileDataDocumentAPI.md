# ParameterProvisionProfileDataDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ParameterProvisionProfileDataDocumentAPI_queryPPData**](ParameterProvisionProfileDataDocumentAPI.md#ParameterProvisionProfileDataDocumentAPI_queryPPData) | **GET** /subscription-data/{ueId}/pp-profile-data | Retrieves the parameter provision profile data of a UE


# **ParameterProvisionProfileDataDocumentAPI_queryPPData**
```c
// Retrieves the parameter provision profile data of a UE
//
pp_profile_data_t* ParameterProvisionProfileDataDocumentAPI_queryPPData(apiClient_t *apiClient, char * ueId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[pp_profile_data_t](pp_profile_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

