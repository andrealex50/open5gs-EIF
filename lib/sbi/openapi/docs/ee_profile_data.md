# ee_profile_data_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**restricted_event_types** | [**list_t**](event_type.md) \* |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**allowed_mtc_provider** | **list_t*** | A map (list of key-value pairs where EventType serves as key) of MTC provider lists. In addition to defined EventTypes, the key value \&quot;ALL\&quot; may be used to identify a map entry which contains a list of MtcProviders that are allowed monitoring all Event Types. | [optional] 
**iwk_epc_restricted** | **int** |  | [optional] [default to false]
**imsi** | **char \*** |  | [optional] 
**hss_group_id** | **char \*** | Identifier of a group of NFs. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


