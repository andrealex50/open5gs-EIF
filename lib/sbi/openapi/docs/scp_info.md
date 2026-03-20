# scp_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**scp_domain_info_list** | **list_t*** | A map (list of key-value pairs) where the key of the map shall be the string identifying an SCP domain  | [optional] 
**scp_prefix** | **char \*** |  | [optional] 
**scp_ports** | **list_t*** | Port numbers for HTTP and HTTPS. The key of the map shall be \&quot;http\&quot; or \&quot;https\&quot;.  | [optional] 
**address_domains** | **list_t \*** |  | [optional] 
**ipv4_addresses** | **list_t \*** |  | [optional] 
**ipv6_prefixes** | **list_t \*** |  | [optional] 
**ipv4_addr_ranges** | [**list_t**](ipv4_address_range.md) \* |  | [optional] 
**ipv6_prefix_ranges** | [**list_t**](ipv6_prefix_range.md) \* |  | [optional] 
**served_nf_set_id_list** | **list_t \*** |  | [optional] 
**remote_plmn_list** | [**list_t**](plmn_id.md) \* |  | [optional] 
**remote_snpn_list** | [**list_t**](plmn_id_nid.md) \* |  | [optional] 
**ip_reachability** | **ip_reachability_t \*** |  | [optional] 
**scp_capabilities** | [**list_t**](scp_capability.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


