# colleague_response_compound_v2_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_colleague_id** | **int** | The unique ID of the Colleague | 
**fki_user_id** | **int** | The unique ID of the User | 
**fki_user_id_colleague** | **int** | The unique ID of the User | 
**b_colleague_ezsignemail** | **int** | Whether the email can be used by the cloning user in Ezsign | 
**b_colleague_financial** | **int** | Whether the cloning user has access to the financial | 
**b_colleague_usecloneemail** | **int** | Whether the cloning user has access to the cloned user email to send communications | 
**b_colleague_attachment** | **int** | Whether the cloning user has access to the attachment | 
**b_colleague_canafe** | **int** | Whether the cloning user has access to canafe | 
**b_colleague_permission** | **int** | Whether the cloning user copies the permission of the cloned user | 
**b_colleague_realestatecompleted** | **int** | Whether if the cloning user has access to the completed folders in real estate | 
**dt_colleague_from** | **char \*** | The from of the Colleague | [optional] 
**dt_colleague_to** | **char \*** | The to of the Colleague | [optional] 
**e_colleague_ezsign** | **field_e_colleague_ezsign_t \*** |  | 
**e_colleague_realestateinprogress** | **field_e_colleague_realestateinprogess_t \*** |  | 
**obj_user_name** | [**custom_user_name_response_t**](custom_user_name_response.md) \* |  | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


