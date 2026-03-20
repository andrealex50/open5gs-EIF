# sms_router_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**nf_instance_id** | **char \*** | String uniquely identifying a NF instance. The format of the NF Instance ID shall be a  Universally Unique Identifier (UUID) version 4, as described in IETF RFC 4122.   | [optional] 
**diameter_address** | [**network_node_diameter_address_t**](network_node_diameter_address.md) \* |  | [optional] 
**map_address** | **char \*** |  | [optional] 
**router_ipv4** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**router_ipv6** | **char \*** | String identifying an IPv6 address formatted according to clause 4 of RFC5952. The mixed IPv4 IPv6 notation according to clause 5 of RFC5952 shall not be used.  | [optional] 
**router_fqdn** | **char \*** | Fully Qualified Domain Name | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


