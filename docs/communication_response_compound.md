# communication_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_communication_id** | **int** | The unique ID of the Communication. | 
**e_communication_emailimportance** | **field_e_communication_emailimportance_t \*** |  | [optional] 
**e_communication_type** | **field_e_communication_type_t \*** |  | 
**s_communication_subject** | **char \*** | The Subject of the Communication | 
**dt_communication_sentdate** | **char \*** | The send date and time at which the Communication was sent. | 
**obj_contact_from** | [**custom_contact_name_response_t**](custom_contact_name_response.md) \* |  | 
**a_obj_communicationattachment** | [**list_t**](communicationattachment_response_compound.md) \* |  | 
**a_obj_communicationrecipient** | [**list_t**](communicationrecipient_response_compound.md) \* |  | 
**a_obj_communicationexternalrecipient** | [**list_t**](communicationexternalrecipient_response_compound.md) \* |  | 
**a_obj_communicationimage** | [**list_t**](communicationimage_response_compound.md) \* |  | 
**a_obj_communicationexternalimage** | [**list_t**](communicationexternalimage_response_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


