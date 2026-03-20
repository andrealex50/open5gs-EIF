# SCPDomainRoutingInformationSubscriptionsCollectionAPI

All URIs are relative to *https://example.com/nnrf-disc/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SCPDomainRoutingInformationSubscriptionsCollectionAPI_scpDomainRoutingInfoSubscribe**](SCPDomainRoutingInformationSubscriptionsCollectionAPI.md#SCPDomainRoutingInformationSubscriptionsCollectionAPI_scpDomainRoutingInfoSubscribe) | **POST** /scp-domain-routing-info-subs | Create a new subscription


# **SCPDomainRoutingInformationSubscriptionsCollectionAPI_scpDomainRoutingInfoSubscribe**
```c
// Create a new subscription
//
scp_domain_routing_info_subscription_t* SCPDomainRoutingInformationSubscriptionsCollectionAPI_scpDomainRoutingInfoSubscribe(apiClient_t *apiClient, scp_domain_routing_info_subscription_t * scp_domain_routing_info_subscription, char * Content_Encoding, char * Accept_Encoding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**scp_domain_routing_info_subscription** | **[scp_domain_routing_info_subscription_t](scp_domain_routing_info_subscription.md) \*** |  | 
**Content_Encoding** | **char \*** | Content-Encoding, described in IETF RFC 7231 | [optional] 
**Accept_Encoding** | **char \*** | Accept-Encoding, described in IETF RFC 7231 | [optional] 

### Return type

[scp_domain_routing_info_subscription_t](scp_domain_routing_info_subscription.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

