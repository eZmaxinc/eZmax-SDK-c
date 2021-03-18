# webhook_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_webhook_id** | **int** | The Webhook ID. This value is visible in the admin interface. | 
**e_webhook_module** | **ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e** | The Module generating the Event. | 
**e_webhook_ezsignevent** | **ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e** | This Ezsign Event. This property will be set only if the Module is \&quot;Ezsign\&quot;. | [optional] 
**pks_customer_code** | **char \*** | The customer code assigned to your account | 
**s_webhook_url** | **char \*** | The url being called | 
**s_webhook_emailfailed** | **char \*** | The email that will receive the webhook in case all attempts fail. | 
**e_webhook_managementevent** | **ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e** | This Management Event. This property will be set only if the Module is \&quot;Management\&quot;. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


