# bdt_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**asp_id** | **char \*** |  | 
**trans_policy** | [**transfer_policy_t**](transfer_policy.md) \* |  | 
**bdt_ref_id** | **char \*** | string identifying a BDT Reference ID as defined in clause 5.3.3 of 3GPP TS 29.154. | [optional] 
**nw_area_info** | [**network_area_info_2_t**](network_area_info_2.md) \* |  | [optional] 
**num_of_ues** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**vol_per_ue** | [**usage_threshold_t**](usage_threshold.md) \* |  | [optional] 
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**snssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**traffic_des** | **char \*** | Identify a traffic descriptor as defined in Figure 5.2.2 of 3GPP TS 24.526, octets v+5 to w. | [optional] 
**bdtp_status** | [**bdt_policy_status_t**](bdt_policy_status.md) \* |  | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


