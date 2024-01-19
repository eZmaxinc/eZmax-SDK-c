# discussionmessage_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_discussionmessage_id** | **int** | The unique ID of the Discussionmessage | 
**fki_discussion_id** | **int** | The unique ID of the Discussion | 
**fki_discussionmembership_id** | **int** | The unique ID of the Discussionmembership | [optional] 
**fki_discussionmembership_id_actionrequired** | **int** | The unique ID of the Discussionmembership | [optional] 
**e_discussionmessage_status** | **field_e_discussionmessage_status_t \*** |  | 
**t_discussionmessage_content** | **char \*** | The content of the Discussionmessage | 
**s_discussionmessage_creatorname** | **char \*** | The name the creator of the Discussionmessage. | 
**s_discussionmessage_actionrequiredname** | **char \*** | The name the Actionrequired of the Discussionmessage. | [optional] 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


