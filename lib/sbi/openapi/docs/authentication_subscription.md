# authentication_subscription_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**authentication_method** | **auth_method_t \*** |  | 
**enc_permanent_key** | **char \*** |  | [optional] 
**protection_parameter_id** | **char \*** |  | [optional] 
**sequence_number** | [**sequence_number_t**](sequence_number.md) \* |  | [optional] 
**authentication_management_field** | **char \*** |  | [optional] 
**algorithm_id** | **char \*** |  | [optional] 
**enc_opc_key** | **char \*** |  | [optional] 
**enc_topc_key** | **char \*** |  | [optional] 
**vector_generation_in_hss** | **int** |  | [optional] [default to false]
**hss_group_id** | **char \*** | Identifier of a group of NFs. | [optional] 
**n5gc_auth_method** | **auth_method_t \*** |  | [optional] 
**rg_authentication_ind** | **int** |  | [optional] [default to false]
**supi** | **char \*** | String identifying a Supi that shall contain either an IMSI, a network specific identifier, a Global Cable Identifier (GCI) or a Global Line Identifier (GLI) as specified in clause  2.2A of 3GPP TS 23.003. It shall be formatted as follows  - for an IMSI \&quot;imsi-&lt;imsi&gt;\&quot;, where &lt;imsi&gt; shall be formatted according to clause 2.2    of 3GPP TS 23.003 that describes an IMSI.  - for a network specific identifier \&quot;nai-&lt;nai&gt;, where &lt;nai&gt; shall be formatted    according to clause 28.7.2 of 3GPP TS 23.003 that describes an NAI.  - for a GCI \&quot;gci-&lt;gci&gt;\&quot;, where &lt;gci&gt; shall be formatted according to clause 28.15.2    of 3GPP TS 23.003.  - for a GLI \&quot;gli-&lt;gli&gt;\&quot;, where &lt;gli&gt; shall be formatted according to clause 28.16.2 of    3GPP TS 23.003.To enable that the value is used as part of an URI, the string shall    only contain characters allowed according to the \&quot;lower-with-hyphen\&quot; naming convention    defined in 3GPP TS 29.501.  | [optional] 
**akma_allowed** | **int** |  | [optional] [default to false]
**routing_id** | **char \*** |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


