# webhook_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_webhook_id** | **int** | The unique ID of the Webhook | [optional] 
**fki_authenticationexternal_id** | **int** | The unique ID of the Authenticationexternal | [optional] 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | [optional] 
**s_webhook_description** | **char \*** | The description of the Webhook | 
**e_webhook_module** | **field_e_webhook_module_t \*** |  | 
**e_webhook_ezsignevent** | **field_e_webhook_ezsignevent_t \*** |  | [optional] 
**e_webhook_managementevent** | **field_e_webhook_managementevent_t \*** |  | [optional] 
**s_webhook_url** | **char \*** | The URL of the Webhook callback | 
**s_webhook_emailfailed** | **char \*** | The email that will receive the Webhook in case all attempts fail | 
**b_webhook_isactive** | **int** | Whether the Webhook is active or not | 
**b_webhook_issigned** | **int** | Whether the requests will be signed or not | [optional] 
**b_webhook_skipsslvalidation** | **int** | Wheter the server&#39;s SSL certificate should be validated or not. Not recommended to skip for production use | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


