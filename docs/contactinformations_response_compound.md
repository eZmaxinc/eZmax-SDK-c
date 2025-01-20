# contactinformations_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_contactinformations_id** | **int** | The unique ID of the Contactinformations | 
**fki_address_id_default** | **int** | The unique ID of the Address | [optional] 
**fki_phone_id_default** | **int** | The unique ID of the Phone. | [optional] 
**fki_email_id_default** | **int** | The unique ID of the Email | [optional] 
**fki_website_id_default** | **int** | The unique ID of the Website Default | [optional] 
**e_contactinformations_type** | **field_e_contactinformations_type_t \*** |  | 
**s_contactinformations_url** | **char \*** | The url of the Contactinformations | [optional] 
**obj_address_default** | [**address_response_compound_t**](address_response_compound.md) \* |  | [optional] 
**obj_phone_default** | [**phone_response_compound_t**](phone_response_compound.md) \* |  | [optional] 
**obj_email_default** | [**email_response_compound_t**](email_response_compound.md) \* |  | [optional] 
**obj_website_default** | [**website_response_compound_t**](website_response_compound.md) \* |  | [optional] 
**a_obj_address** | [**list_t**](address_response_compound.md) \* |  | 
**a_obj_phone** | [**list_t**](phone_response_compound.md) \* |  | 
**a_obj_email** | [**list_t**](email_response_compound.md) \* |  | 
**a_obj_website** | [**list_t**](website_response_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


