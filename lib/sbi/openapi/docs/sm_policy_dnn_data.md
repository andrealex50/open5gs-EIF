# sm_policy_dnn_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | 
**allowed_services** | **list_t \*** |  | [optional] 
**subsc_cats** | **list_t \*** |  | [optional] 
**gbr_ul** | **char \*** | String representing a bit rate; the prefixes follow the standard symbols from The International System of Units, and represent x1000 multipliers, with the exception that prefix \&quot;K\&quot; is used to represent the standard symbol \&quot;k\&quot;.  | [optional] 
**gbr_dl** | **char \*** | String representing a bit rate; the prefixes follow the standard symbols from The International System of Units, and represent x1000 multipliers, with the exception that prefix \&quot;K\&quot; is used to represent the standard symbol \&quot;k\&quot;.  | [optional] 
**adc_support** | **int** |  | [optional] 
**subsc_spending_limits** | **int** |  | [optional] 
**ipv4_index** | **int** | Represents information that identifies which IP pool or external server is used to allocate the IP address.  | [optional] 
**ipv6_index** | **int** | Represents information that identifies which IP pool or external server is used to allocate the IP address.  | [optional] 
**offline** | **int** |  | [optional] 
**online** | **int** |  | [optional] 
**chf_info** | [**charging_information_t**](charging_information.md) \* |  | [optional] 
**ref_um_data_limit_ids** | **list_t*** | A reference to the UsageMonitoringDataLimit or UsageMonitoringData instances for this DNN and SNSSAI that may also include the related monitoring key(s). The key of the map is the limit identifier.  | [optional] 
**mps_priority** | **int** |  | [optional] 
**mcs_priority** | **int** |  | [optional] 
**ims_signalling_prio** | **int** |  | [optional] 
**mps_priority_level** | **int** |  | [optional] 
**mcs_priority_level** | **int** |  | [optional] 
**pra_infos** | **list_t*** | Contains Presence reporting area information. The praId attribute within the PresenceInfo data type is the key of the map.  | [optional] 
**bdt_ref_ids** | **list_t*** | Identifies transfer policies of background data transfer. Any string value can be used as a key of the map.  | [optional] 
**loc_rout_not_allowed** | **int** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


