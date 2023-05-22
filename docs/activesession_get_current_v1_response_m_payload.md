# activesession_get_current_v1_response_m_payload_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**e_activesession_usertype** | **field_e_activesession_usertype_t \*** |  | 
**e_activesession_origin** | **field_e_activesession_origin_t \*** |  | 
**e_activesession_weekdaystart** | **field_e_activesession_weekdaystart_t \*** |  | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**s_company_name_x** | **char \*** | The Name of the Company in the language of the requester | 
**s_department_name_x** | **char \*** | The Name of the Department in the language of the requester | 
**b_activesession_debug** | **int** | Whether the active session is in debug or not | 
**b_activesession_issuperadmin** | **int** | Whether the active session is superadmin or not | 
**pks_customer_code** | **char \*** | The customer code assigned to your account | 
**fki_systemconfigurationtype_id** | **int** | The unique ID of the Systemconfigurationtype | [optional] 
**a_pki_permission_id** | **list_t \*** | An array of permissions granted to the user or api key | 
**obj_user_real** | [**activesession_response_compound_user_t**](activesession_response_compound_user.md) \* |  | 
**obj_user_cloned** | [**activesession_response_compound_user_t**](activesession_response_compound_user.md) \* |  | [optional] 
**obj_apikey** | [**activesession_response_compound_apikey_t**](activesession_response_compound_apikey.md) \* |  | [optional] 
**a_e_module_internalname** | **list_t \*** | An Array of Registered modules.  These are the modules that are Licensed to be used by the User or the API Key. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


