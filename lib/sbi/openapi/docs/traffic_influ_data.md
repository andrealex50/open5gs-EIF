# traffic_influ_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**up_path_chg_notif_corre_id** | **char \*** | Contains the Notification Correlation Id allocated by the NEF for the UP path change notification.  | [optional] 
**app_relo_ind** | **int** | Identifies whether an application can be relocated once a location of the application has been selected.  | [optional] 
**af_app_id** | **char \*** | Identifies an application. | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**eth_traffic_filters** | [**list_t**](eth_flow_description.md) \* | Identifies Ethernet packet filters. Either \&quot;trafficFilters\&quot; or \&quot;ethTrafficFilters\&quot; shall be included if applicable.  | [optional] 
**snssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**inter_group_id** | **char \*** | String identifying a group of devices network internal globally unique ID which identifies a set of IMSIs, as specified in clause 19.9 of 3GPP TS 23.003.   | [optional] 
**supi** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**traffic_filters** | [**list_t**](flow_info.md) \* | Identifies IP packet filters. Either \&quot;trafficFilters\&quot; or \&quot;ethTrafficFilters\&quot; shall be included if applicable.  | [optional] 
**traffic_routes** | [**list_t**](route_to_location.md) \* | Identifies the N6 traffic routing requirement. | [optional] 
**traff_corre_ind** | **int** |  | [optional] 
**valid_start_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**valid_end_time** | **char \*** | string with format &#39;date-time&#39; as defined in OpenAPI. | [optional] 
**temp_validities** | [**list_t**](temporal_validity.md) \* | Identifies the temporal validities for the N6 traffic routing requirement. | [optional] 
**nw_area_info** | [**network_area_info_2_t**](network_area_info_2.md) \* |  | [optional] 
**up_path_chg_notif_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**headers** | **list_t \*** |  | [optional] 
**subscribed_events** | [**list_t**](subscribed_event.md) \* |  | [optional] 
**dnai_chg_type** | **dnai_change_type_t \*** |  | [optional] 
**af_ack_ind** | **int** |  | [optional] 
**addr_preser_ind** | **int** |  | [optional] 
**max_allowed_up_lat** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**sim_conn_ind** | **int** | Indicates whether simultaneous connectivity should be temporarily maintained for the source and target PSA.  | [optional] 
**sim_conn_term** | **int** | indicating a time in seconds. | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**res_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


