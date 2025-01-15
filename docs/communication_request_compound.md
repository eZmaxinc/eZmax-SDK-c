# communication_request_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_communication_id** | **int** | The unique ID of the Communication. | [optional] 
**e_communication_importance** | **field_e_communication_importance_t \*** |  | [optional] 
**e_communication_type** | **field_e_communication_type_t \*** |  | 
**obj_communicationsender** | [**custom_communicationsender_request_t**](custom_communicationsender_request.md) \* |  | [optional] 
**s_communication_subject** | **char \*** | The subject of the Communication | [optional] 
**t_communication_body** | **char \*** | The Body of the Communication | 
**b_communication_private** | **int** | Whether the Communication is private or not | 
**e_communication_attachmenttype** | **ezmax_api_definition__full_communication_request_compound_ECOMMUNICATIONATTACHMENTTYPE_e** | How the attachment should be included in the email.   Only used if eCommunicationType is **Email** | [optional] 
**i_communication_attachmentlinkexpiration** | **int** | The number of days before the attachment link expired.   Only used if eCommunicationType is **Email** and eCommunicationattachmentType is **Link** | [optional] 
**b_communication_readreceipt** | **int** | Whether we ask for a read receipt or not. | [optional] 
**a_obj_communicationattachment** | [**list_t**](custom_communicationattachment_request.md) \* |  | 
**a_obj_communicationrecipient** | [**list_t**](communicationrecipient_request_compound.md) \* |  | 
**a_obj_communicationreference** | [**list_t**](communicationreference_request.md) \* |  | 
**a_obj_communicationexternalrecipient** | [**list_t**](communicationexternalrecipient_request_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


