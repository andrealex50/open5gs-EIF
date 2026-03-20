# ue_policy_set_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pra_infos** | **list_t*** | Contains Presence reporting area information. The praId attribute within the PresenceInfo data type is the key of the map.  | [optional] 
**subsc_cats** | **list_t \*** |  | [optional] 
**ue_policy_sections** | **list_t*** | Contains the UE Policy Sections. The UE Policy Section Identifier is used as the key of the map.  | [optional] 
**upsis** | **list_t \*** |  | [optional] 
**allowed_route_sel_descs** | **list_t*** | Contains allowed route selection descriptors per serving PLMN for a UE. The serving PLMN identifier is the key of the map.  | [optional] 
**andsp_ind** | **int** |  | [optional] 
**pei** | **char \*** | String representing a Permanent Equipment Identifier that may contain - an IMEI or IMEISV, as  specified in clause 6.2 of 3GPP TS 23.003; a MAC address for a 5G-RG or FN-RG via  wireline  access, with an indication that this address cannot be trusted for regulatory purpose if this  address cannot be used as an Equipment Identifier of the FN-RG, as specified in clause 4.7.7  of 3GPP TS23.316. Examples are imei-012345678901234 or imeisv-0123456789012345.   | [optional] 
**os_ids** | **list_t \*** |  | [optional] 
**supp_feat** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**reset_ids** | **list_t \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


