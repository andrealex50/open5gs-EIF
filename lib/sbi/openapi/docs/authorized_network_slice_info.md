# authorized_network_slice_info_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**allowed_nssai_list** | [**list_t**](allowed_nssai.md) \* |  | [optional] 
**configured_nssai** | [**list_t**](configured_snssai.md) \* |  | [optional] 
**target_amf_set** | **char \*** |  | [optional] 
**candidate_amf_list** | **list_t \*** |  | [optional] 
**rejected_nssai_in_plmn** | [**list_t**](snssai.md) \* |  | [optional] 
**rejected_nssai_in_ta** | [**list_t**](snssai.md) \* |  | [optional] 
**nsi_information** | [**nsi_information_t**](nsi_information.md) \* |  | [optional] 
**supported_features** | **char \*** | A string used to indicate the features supported by an API that is used as defined in clause  6.6 in 3GPP TS 29.500. The string shall contain a bitmask indicating supported features in  hexadecimal representation Each character in the string shall take a value of \&quot;0\&quot; to \&quot;9\&quot;,  \&quot;a\&quot; to \&quot;f\&quot; or \&quot;A\&quot; to \&quot;F\&quot; and shall represent the support of 4 features as described in  table 5.2.2-3. The most significant character representing the highest-numbered features shall  appear first in the string, and the character representing features 1 to 4 shall appear last  in the string. The list of features and their numbering (starting with 1) are defined  separately for each API. If the string contains a lower number of characters than there are  defined features for an API, all features that would be represented by characters that are not  present in the string are not supported.  | [optional] 
**nrf_amf_set** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**nrf_amf_set_nf_mgt_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**nrf_amf_set_access_token_uri** | **char \*** | String providing an URI formatted according to RFC 3986. | [optional] 
**nrf_oauth2_required** | **list_t*** | Map indicating whether the NRF requires Oauth2-based authorization for accessing its services. The key of the map shall be the name of an NRF service, e.g. \&quot;nnrf-nfm\&quot; or \&quot;nnrf-disc\&quot;  | [optional] 
**target_amf_service_set** | **char \*** | NF Service Set Identifier (see clause 28.12 of 3GPP TS 23.003) formatted as the following  string \&quot;set&lt;Set ID&gt;.sn&lt;Service Name&gt;.nfi&lt;NF Instance ID&gt;.5gc.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot;, or  \&quot;set&lt;SetID&gt;.sn&lt;ServiceName&gt;.nfi&lt;NFInstanceID&gt;.5gc.nid&lt;NID&gt;.mnc&lt;MNC&gt;.mcc&lt;MCC&gt;\&quot; with  &lt;MCC&gt; encoded as defined in clause 5.4.2 (\&quot;Mcc\&quot; data type definition)   &lt;MNC&gt; encoding the Mobile Network Code part of the PLMN, comprising 3 digits.    If there are only 2 significant digits in the MNC, one \&quot;0\&quot; digit shall be inserted    at the left side to fill the 3 digits coding of MNC.  Pattern: &#39;^[0-9]{3}$&#39; &lt;NID&gt; encoded as defined in clause 5.4.2 (\&quot;Nid\&quot; data type definition)  &lt;NFInstanceId&gt; encoded as defined in clause 5.3.2  &lt;ServiceName&gt; encoded as defined in 3GPP TS 29.510  &lt;Set ID&gt; encoded as a string of characters consisting of alphabetic    characters (A-Z and a-z), digits (0-9) and/or the hyphen (-) and that shall end    with either an alphabetic character or a digit.  | [optional] 
**target_nssai** | [**list_t**](snssai.md) \* |  | [optional] 
**nsag_infos** | [**list_t**](nsag_info.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


