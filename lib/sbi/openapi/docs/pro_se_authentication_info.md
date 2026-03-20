# pro_se_authentication_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**supi_or_suci** | **char \*** | String identifying a SUPI or a SUCI. | [optional] 
**_5g_pruk_id** | **char \*** | A string carrying the CP-PRUK ID of the remote UE. The CP-PRUK ID is a string in NAI format as specified in clause 28.7.11 of 3GPP TS 23.003.  | [optional] 
**relay_service_code** | **int** | Relay Service Code to identify a connectivity service provided by the UE-to-Network relay.  | 
**nonce1** | **char \*** | contains an Nonce1 | 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


