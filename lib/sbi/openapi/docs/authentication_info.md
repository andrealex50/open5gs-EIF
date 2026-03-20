# authentication_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**supi_or_suci** | **char \*** | String identifying a SUPI or a SUCI. | 
**serving_network_name** | **char \*** |  | 
**resynchronization_info** | [**resynchronization_info_t**](resynchronization_info.md) \* |  | [optional] 
**pei** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**trace_data** | [**trace_data_t**](trace_data.md) \* |  | [optional] 
**udm_group_id** | **char \*** | Identifier of a group of NFs. | [optional] 
**routing_indicator** | **char \*** |  | [optional] 
**cell_cag_info** | **list_t \*** |  | [optional] 
**n5gc_ind** | **int** |  | [optional] [default to false]
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**nswo_ind** | **int** |  | [optional] [default to false]
**disaster_roaming_ind** | **int** |  | [optional] [default to false]
**onboarding_ind** | **int** |  | [optional] [default to false]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


