# apikey_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_apikey_id** | **int** | The unique ID of the Apikey | 
**fki_user_id** | **int** | The unique ID of the User | 
**obj_apikey_description** | [**multilingual_apikey_description_t**](multilingual_apikey_description.md) \* |  | 
**s_computed_token** | **char \*** | The secret token for the API key.  This will be returned only on creation. | [optional] 
**b_apikey_isactive** | **int** | Whether the apikey is active or not | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


