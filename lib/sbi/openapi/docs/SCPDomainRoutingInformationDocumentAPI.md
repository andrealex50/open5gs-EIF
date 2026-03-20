# SCPDomainRoutingInformationDocumentAPI

All URIs are relative to *https://example.com/nnrf-disc/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SCPDomainRoutingInformationDocumentAPI_sCPDomainRoutingInfoGet**](SCPDomainRoutingInformationDocumentAPI.md#SCPDomainRoutingInformationDocumentAPI_sCPDomainRoutingInfoGet) | **GET** /scp-domain-routing-info | 


# **SCPDomainRoutingInformationDocumentAPI_sCPDomainRoutingInfoGet**
```c
scp_domain_routing_information_t* SCPDomainRoutingInformationDocumentAPI_sCPDomainRoutingInfoGet(apiClient_t *apiClient, int local, char * Accept_Encoding);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**local** | **int** | Indication of local SCP Domain Routing Information | [optional] [default to false]
**Accept_Encoding** | **char \*** | Accept-Encoding, described in IETF RFC 7231 | [optional] 

### Return type

[scp_domain_routing_information_t](scp_domain_routing_information.md) *


### Authorization

[oAuth2ClientCredentials](../README.md#oAuth2ClientCredentials)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/problem+json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

