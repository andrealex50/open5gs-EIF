# service_parameter_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**app_id** | **char \*** | Identifies an application. | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**snssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**inter_group_id** | **char \*** | String identifying a group of devices network internal globally unique ID which identifies a set of IMSIs, as specified in clause 19.9 of 3GPP TS 23.003.   | [optional] 
**supi** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**ue_ipv4** | **char \*** | string identifying a Ipv4 address formatted in the \&quot;dotted decimal\&quot; notation as defined in IETF RFC 1166. | [optional] 
**ue_ipv6** | **char \*** | string identifying a Ipv6 address formatted according to clause 4 in IETF RFC 5952. The mixed Ipv4 Ipv6 notation according to clause 5 of IETF RFC 5952 shall not be used. | [optional] 
**ue_mac** | **char \*** | String identifying a MAC address formatted in the hexadecimal notation according to clause 1.1 and clause 2.1 of RFC 7042.  | [optional] 
**any_ue_ind** | **int** |  | [optional] 
**param_over_pc5** | **char \*** | Represents configuration parameters for V2X communications over PC5 reference point.  | [optional] 
**param_over_uu** | **char \*** | Represents configuration parameters for V2X communications over Uu reference point.  | [optional] 
**param_for_pro_se_dd** | **char \*** | Represents the service parameters for 5G ProSe direct discovery. | [optional] 
**param_for_pro_se_dc** | **char \*** | Represents the service parameters for 5G ProSe direct communications. | [optional] 
**param_for_pro_se_u2_n_rel_ue** | **char \*** | Represents the service parameters for 5G ProSe UE-to-network relay UE. | [optional] 
**param_for_pro_se_rem_ue** | **char \*** | Represents the service parameters for 5G ProSe Remate UE. | [optional] 
**ursp_guidance** | [**list_t**](ursp_rule_request.md) \* | Contains the service parameter used to guide the URSP. | [optional] 
**delivery_events** | [**list_t**](event.md) \* | Contains the outcome of the UE Policy Delivery. | [optional] 
**polic_deliv_notif_corre_id** | **char \*** | Contains the Notification Correlation Id allocated by the NEF for the notification of UE Policy delivery outcome.  | [optional] 
**polic_deliv_notif_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**res_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**headers** | **list_t \*** |  | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


