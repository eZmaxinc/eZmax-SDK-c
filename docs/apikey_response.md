# apikey_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_apikey_id** | **int** | The unique ID of the Apikey | 
**fki_user_id** | **int** | The unique ID of the User | 
**obj_apikey_description** | [**multilingual_apikey_description_t**](multilingual_apikey_description.md) \* |  | 
**obj_contact_name** | [**custom_contact_name_response_t**](custom_contact_name_response.md) \* |  | 
**s_apikey_apikey** | **char \*** | The Apikey for the API key.  This will be hidden if we are not creating or regenerating the Apikey. | [optional] 
**s_apikey_secret** | **char \*** | The Secret for the API key.  This will be hidden if we are not creating or regenerating the Apikey. | [optional] 
**b_apikey_isactive** | **int** | Whether the apikey is active or not | 
**b_apikey_issigned** | **int** | Whether the apikey is signed or not | [optional] 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


