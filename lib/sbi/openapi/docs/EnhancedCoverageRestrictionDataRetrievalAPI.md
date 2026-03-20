# EnhancedCoverageRestrictionDataRetrievalAPI

All URIs are relative to *https://example.com/nudm-sdm/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**EnhancedCoverageRestrictionDataRetrievalAPI_getEcrData**](EnhancedCoverageRestrictionDataRetrievalAPI.md#EnhancedCoverageRestrictionDataRetrievalAPI_getEcrData) | **GET** /{supi}/am-data/ecr-data | retrieve a UE&#39;s subscribed Enhanced Coverage Restriction Data


# **EnhancedCoverageRestrictionDataRetrievalAPI_getEcrData**
```c
// retrieve a UE's subscribed Enhanced Coverage Restriction Data
//
enhanced_coverage_restriction_data_t* EnhancedCoverageRestrictionDataRetrievalAPI_getEcrData(apiClient_t *apiClient, char * supi, char * supported_features, char * If_None_Match, char * If_Modified_Since);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**supi** | **char \*** | Identifier of the UE | 
**supported_features** | **char \*** | Supported Features | [optional] 
**If_None_Match** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.2 | [optional] 
**If_Modified_Since** | **char \*** | Validator for conditional requests, as described in RFC 7232, 3.3 | [optional] 

### Return type

[enhanced_coverage_restriction_data_t](enhanced_coverage_restriction_data.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

