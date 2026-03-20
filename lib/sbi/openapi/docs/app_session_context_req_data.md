# app_session_context_req_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**af_app_id** | **char \*** | Contains an AF application identifier. | [optional] 
**af_charg_id** | **char \*** | Application provided charging identifier allowing correlation of charging information. | [optional] 
**af_req_data** | **af_requested_data_t \*** |  | [optional] 
**af_rout_req** | [**af_routing_requirement_t**](af_routing_requirement.md) \* |  | [optional] 
**asp_id** | **char \*** | Contains an identity of an application service provider. | [optional] 
**bdt_ref_id** | **char \*** | string identifying a BDT Reference ID as defined in clause 5.3.3 of 3GPP TS 29.154. | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**ev_subsc** | [**events_subsc_req_data_t**](events_subsc_req_data.md) \* |  | [optional] 
**mcptt_id** | **char \*** | Indication of MCPTT service request. | [optional] 
**mc_video_id** | **char \*** | Indication of MCVideo service request. | [optional] 
**med_components** | **list_t*** | Contains media component information. The key of the map is the medCompN attribute. | [optional] 
**ip_domain** | **char \*** |  | [optional] 
**mps_action** | **mps_action_t \*** |  | [optional] 
**mps_id** | **char \*** | Indication of MPS service request. | [optional] 
**mcs_id** | **char \*** | Indication of MCS service request. | [optional] 
**preempt_control_info** | **preemption_control_information_t \*** |  | [optional] 
**res_prio** | **reserv_priority_t \*** |  | [optional] 
**serv_inf_status** | **service_info_status_t \*** |  | [optional] 
**notif_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | 
**serv_urn** | **char \*** | Contains values of the service URN and may include subservices. | [optional] 
**slice_info** | [**snssai_t**](snssai.md) \* |  | [optional] 
**spon_id** | **char \*** | Contains an identity of a sponsor. | [optional] 
**spon_status** | **sponsoring_status_t \*** |  | [optional] 
**supi** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**gpsi** | **char \*** | String identifying a Gpsi shall contain either an External Id or an MSISDN.  It shall be formatted as follows -External Identifier&#x3D; \&quot;extid-&#39;extid&#39;, where &#39;extid&#39;  shall be formatted according to clause 19.7.2 of 3GPP TS 23.003 that describes an  External Identifier.   | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | 
**ue_ipv4** | **char \*** | String identifying a IPv4 address formatted in the &#39;dotted decimal&#39; notation as defined in RFC 1166.  | [optional] 
**ue_ipv6** | **char \*** | String identifying an IPv6 address formatted according to clause 4 of RFC5952. The mixed IPv4 IPv6 notation according to clause 5 of RFC5952 shall not be used.  | [optional] 
**ue_mac** | **char \*** | String identifying a MAC address formatted in the hexadecimal notation according to clause 1.1 and clause 2.1 of RFC 7042.  | [optional] 
**tsn_bridge_man_cont** | [**bridge_management_container_t**](bridge_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_dstt** | [**port_management_container_t**](port_management_container.md) \* |  | [optional] 
**tsn_port_man_cont_nwtts** | [**list_t**](port_management_container.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


