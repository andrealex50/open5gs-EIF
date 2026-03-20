# route_selection_parameter_set_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**dnn** | **char \*** | String representing a Data Network as defined in clause 9A of 3GPP TS 23.003;  it shall contain either a DNN Network Identifier, or a full DNN with both the Network  Identifier and Operator Identifier, as specified in 3GPP TS 23.003 clause 9.1.1 and 9.1.2. It shall be coded as string in which the labels are separated by dots  (e.g. \&quot;Label1.Label2.Label3\&quot;).  | [optional] 
**snssai** | [**snssai_t**](snssai.md) \* |  | [optional] 
**precedence** | **int** | Unsigned Integer, i.e. only value 0 and integers above 0 are permissible. | [optional] 
**spatial_validity_areas** | [**list_t**](geographical_area.md) \* | Indicates where the route selection parameters apply. It may correspond to a geographical area, for example using a geographic shape that is known to the AF and is configured by the operator to correspond to a list of or TAIs.  | [optional] 
**spatial_validity_tais** | [**list_t**](tai_1.md) \* | Indicates the TAIs in which the route selection parameters apply. This attribute is  applicable only within the 5GC and it shall not be included in the request messages of  untrusted AFs for URSP guidance.  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


