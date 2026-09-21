# attachment_validate_v1_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**fki_attachmentrejectreason_id** | **int** | The unique ID of the Attachmentrejectreason | [optional] 
**e_attachment_verified** | **field_e_attachment_verified_t \*** |  | 
**t_attachment_rejectioncomment** | **char \*** | The rejectioncomment of the Attachment | [optional] 
**a_s_notification_email_address** | **list_t \*** | A list of email addresses to send a rejection notification to. | [optional] 
**t_notification_message** | **char \*** | The email body to send to the notification recipients. | [optional] 
**b_notification_include_attachment** | **int** | Should a copy of the attachment be included in the email. | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


