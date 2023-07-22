# communication_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_communication_id** | **int** | The unique ID of the Communication. | 
**e_communication_importance** | **field_e_communication_importance_t \*** |  | 
**e_communication_type** | **field_e_communication_type_t \*** |  | 
**s_communication_subject** | **char \*** | The subject of the Communication | 
**s_communication_bodyurl** | **char \*** | The url of the body used as body in the Communication | [optional] 
**e_communication_direction** | **computed_e_communication_direction_t \*** |  | 
**i_communicationrecipient_count** | **int** | The count of Communicationrecipient | 
**b_communication_private** | **int** | Whether the Communication is private or not | 
**obj_descriptionstatic_sender** | [**descriptionstatic_response_t**](descriptionstatic_response.md) \* |  | [optional] 
**obj_emailstatic_sender** | [**emailstatic_response_t**](emailstatic_response.md) \* |  | [optional] 
**obj_phonestatic_sender** | [**phonestatic_response_t**](phonestatic_response.md) \* |  | [optional] 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 
**a_obj_communicationattachment** | [**list_t**](communicationattachment_response_compound.md) \* |  | 
**a_obj_communicationrecipient** | [**list_t**](communicationrecipient_response_compound.md) \* |  | 
**a_obj_communicationexternalrecipient** | [**list_t**](communicationexternalrecipient_response_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


