# webhook_list_element_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_webhook_id** | **int** | The unique ID of the Webhook | 
**s_webhook_description** | **char \*** | The description of the Webhook | 
**s_webhook_url** | **char \*** | The URL of the Webhook callback | 
**s_webhook_event** | **char \*** | The concatenated string to describe the Webhook event | 
**s_webhook_emailfailed** | **char \*** | The email that will receive the Webhook in case all attempts fail | 
**e_webhook_module** | **field_e_webhook_module_t \*** |  | 
**e_webhook_ezsignevent** | **field_e_webhook_ezsignevent_t \*** |  | [optional] 
**e_webhook_managementevent** | **field_e_webhook_managementevent_t \*** |  | [optional] 
**b_webhook_isactive** | **int** | Whether the Webhook is active or not | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


