# IndividualSCPDomainRoutingInformationSubscriptionDocumentAPI

All URIs are relative to *https://example.com/nnrf-disc/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**IndividualSCPDomainRoutingInformationSubscriptionDocumentAPI_scpDomainRoutingInfoUnsubscribe**](IndividualSCPDomainRoutingInformationSubscriptionDocumentAPI.md#IndividualSCPDomainRoutingInformationSubscriptionDocumentAPI_scpDomainRoutingInfoUnsubscribe) | **DELETE** /scp-domain-routing-info-subs/{subscriptionID} | Deletes a subscription


# **IndividualSCPDomainRoutingInformationSubscriptionDocumentAPI_scpDomainRoutingInfoUnsubscribe**
```c
// Deletes a subscription
//
void IndividualSCPDomainRoutingInformationSubscriptionDocumentAPI_scpDomainRoutingInfoUnsubscribe(apiClient_t *apiClient, char * subscriptionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subscriptionID** | **char \*** | Unique ID of the subscription to remove | 

### Return type

void

### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

