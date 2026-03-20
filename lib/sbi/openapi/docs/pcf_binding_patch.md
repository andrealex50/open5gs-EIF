# pcf_binding_patch_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ipv4_addr** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166 with the OpenAPI defined &#39;nullable: true&#39; property.  | [optional] 
**ip_domain** | **char \*** |  | [optional] 
**ipv6_prefix** | **char \*** | String identifying an IPv6 address prefix formatted according to clause 4 of RFC 5952 with the OpenAPI &#39;nullable: true&#39; property. IPv6Prefix data type may contain an individual /128 IPv6 address.  | [optional] 
**add_ipv6_prefixes** | **list_t \*** | The additional IPv6 Address Prefixes of the served UE. | [optional] 
**mac_addr48** | **char \*** | \&quot;String identifying a MAC address formatted in the hexadecimal notation according to clause 1.1 and clause 2.1 of RFC 7042 with the OpenAPI &#39;nullable: true&#39; property.\&quot;  | [optional] 
**add_mac_addrs** | **list_t \*** | The additional MAC Addresses of the served UE. | [optional] 
**pcf_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**pcf_fqdn** | **char \*** | Fully Qualified Domain Name | [optional] 
**pcf_ip_end_points** | [**list_t**](ip_end_point.md) \* | IP end points of the PCF hosting the Npcf_PolicyAuthorization service. | [optional] 
**pcf_diam_host** | **char \*** | Fully Qualified Domain Name | [optional] 
**pcf_diam_realm** | **char \*** | Fully Qualified Domain Name | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


