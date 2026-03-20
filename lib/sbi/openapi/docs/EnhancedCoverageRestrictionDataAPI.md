# EnhancedCoverageRestrictionDataAPI

All URIs are relative to *https://example.com/nudr-dr/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EnhancedCoverageRestrictionDataAPI_queryCoverageRestrictionData**](EnhancedCoverageRestrictionDataAPI.md#EnhancedCoverageRestrictionDataAPI_queryCoverageRestrictionData) | **GET** /subscription-data/{ueId}/coverage-restriction-data | Retrieves the subscribed enhanced Coverage Restriction Data of a UE


# **EnhancedCoverageRestrictionDataAPI_queryCoverageRestrictionData**
```c
// Retrieves the subscribed enhanced Coverage Restriction Data of a UE
//
enhanced_coverage_restriction_data_t* EnhancedCoverageRestrictionDataAPI_queryCoverageRestrictionData(apiClient_t *apiClient, char * ueId, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ueId** | **char \*** | UE id | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[enhanced_coverage_restriction_data_t](enhanced_coverage_restriction_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

