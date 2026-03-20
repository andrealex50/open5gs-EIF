# traffic_influ_data_patch_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**up_path_chg_notif_corre_id** | **char \*** | Contains the Notification Correlation Id allocated by the NEF for the UP path change notification.  | [optional] 
**app_relo_ind** | **int** | Identifies whether an application can be relocated once a location of the application has been selected.  | [optional] 
**eth_traffic_filters** | [**list_t**](eth_flow_description.md) \* | Identifies Ethernet packet filters. Either \&quot;trafficFilters\&quot; or \&quot;ethTrafficFilters\&quot; shall be included if applicable.  | [optional] 
**traffic_filters** | [**list_t**](flow_info.md) \* | Identifies IP packet filters. Either \&quot;trafficFilters\&quot; or \&quot;ethTrafficFilters\&quot; shall be included if applicable.  | [optional] 
**traffic_routes** | [**list_t**](route_to_location.md) \* | Identifies the N6 traffic routing requirement. | [optional] 
**traff_corre_ind** | **int** |  | [optional] 
**valid_start_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**valid_end_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**temp_validities** | [**list_t**](temporal_validity.md) \* | Identifies the temporal validities for the N6 traffic routing requirement. | [optional] 
**nw_area_info** | [**network_area_info_2_t**](network_area_info_2.md) \* |  | [optional] 
**up_path_chg_notif_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**headers** | **list_t \*** |  | [optional] 
**af_ack_ind** | **int** |  | [optional] 
**addr_preser_ind** | **int** |  | [optional] 
**max_allowed_up_lat** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible with the OpenAPI &#39;nullable: true&#39; property.  | [optional] 
**sim_conn_ind** | **int** | Indicates whether simultaneous connectivity should be temporarily maintained for the source and target PSA.  | [optional] 
**sim_conn_term** | **int** | indicating a time in seconds with OpenAPI defined &#39;nullable: true&#39; property. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


