# custom_webhook_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_webhook_id** | **int** | The unique ID of the Webhook | 
**s_webhook_description** | **char \*** | The description of the Webhook | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | [optional] 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | [optional] 
**e_webhook_module** | **field_e_webhook_module_t \*** |  | 
**e_webhook_ezsignevent** | **field_e_webhook_ezsignevent_t \*** |  | [optional] 
**e_webhook_managementevent** | **field_e_webhook_managementevent_t \*** |  | [optional] 
**s_webhook_url** | **char \*** | The URL of the Webhook callback | 
**s_webhook_emailfailed** | **char \*** | The email that will receive the Webhook in case all attempts fail | 
**b_webhook_isactive** | **int** | Whether the Webhook is active or not | [optional] 
**b_webhook_skipsslvalidation** | **int** | Wheter the server&#39;s SSL certificate should be validated or not. Not recommended to skip for production use | 
**pks_customer_code** | **char \*** | The customer code assigned to your account | 
**b_webhook_test** | **int** | Wheter the webhook received is a manual test or a real event | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


