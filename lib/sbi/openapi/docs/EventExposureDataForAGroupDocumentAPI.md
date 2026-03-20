# EventExposureDataForAGroupDocumentAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EventExposureDataForAGroupDocumentAPI_queryGroupEEData**](EventExposureDataForAGroupDocumentAPI.md#EventExposureDataForAGroupDocumentAPI_queryGroupEEData) | **GET** /subscription-data/group-data/{ueGroupId}/ee-profile-data | Retrieves the ee profile data profile data of a group or anyUE


# **EventExposureDataForAGroupDocumentAPI_queryGroupEEData**
```c
// Retrieves the ee profile data profile data of a group or anyUE
//
ee_group_profile_data_t* EventExposureDataForAGroupDocumentAPI_queryGroupEEData(apiClient_t *apiClient, char * ueGroupId, char * supported_features);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueGroupId** | **char \*** | Group of UEs or any UE | 
**supported_features** | **char \*** | Supported Features | [optional] 

### Return type

[ee_group_profile_data_t](ee_group_profile_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

