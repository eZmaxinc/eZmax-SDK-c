# user_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_user_id** | **int** | The unique ID of the User | 
**fki_agent_id** | **int** | The unique ID of the Agent. | [optional] 
**fki_broker_id** | **int** | The unique ID of the Broker. | [optional] 
**fki_assistant_id** | **int** | The unique ID of the Assistant. | [optional] 
**fki_employee_id** | **int** | The unique ID of the Employee. | [optional] 
**fki_company_id_default** | **int** | The unique ID of the Company | 
**s_company_name_x** | **char \*** | The Name of the Company in the language of the requester | 
**fki_department_id_default** | **int** | The unique ID of the Department | 
**s_department_name_x** | **char \*** | The Name of the Department in the language of the requester | 
**fki_timezone_id** | **int** | The unique ID of the Timezone | 
**s_timezone_name** | **char \*** | The description of the Timezone | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**s_language_name_x** | **char \*** | The Name of the Language in the language of the requester | 
**obj_email** | [**email_response_compound_t**](email_response_compound.md) \* |  | 
**fki_billingentityinternal_id** | **int** | The unique ID of the Billingentityinternal. | 
**s_billingentityinternal_description_x** | **char \*** | The description of the Billingentityinternal in the language of the requester | 
**obj_phone_home** | [**phone_response_compound_t**](phone_response_compound.md) \* |  | [optional] 
**obj_phone_sms** | [**phone_response_compound_t**](phone_response_compound.md) \* |  | [optional] 
**fki_secretquestion_id** | **int** | The unique ID of the Secretquestion.  Valid values:  |Value|Description| |-|-| |1|The name of the hospital in which you were born| |2|The name of your grade school| |3|The last name of your favorite teacher| |4|Your favorite sports team| |5|Your favorite TV show| |6|Your favorite movie| |7|The name of the street on which you grew up| |8|The name of your first employer| |9|Your first car| |10|Your favorite food| |11|The name of your first pet| |12|Favorite musician/band| |13|What instrument you play| |14|Your father&#39;s middle name| |15|Your mother&#39;s maiden name| |16|Name of your eldest child| |17|Your spouse&#39;s middle name| |18|Favorite restaurant| |19|Childhood nickname| |20|Favorite vacation destination| |21|Your boat&#39;s name| |22|Date of Birth (YYYY-MM-DD)| |22|Secret Code| |22|Your reference code| | [optional] 
**fki_module_id_form** | **int** | The unique ID of the Module | [optional] 
**s_module_name_x** | **char \*** | The Name of the Module in the language of the requester | [optional] 
**e_user_origin** | **field_e_user_origin_t \*** |  | 
**e_user_type** | **field_e_user_type_t \*** |  | 
**e_user_logintype** | **field_e_user_logintype_t \*** |  | 
**s_user_firstname** | **char \*** | The first name of the user | 
**s_user_lastname** | **char \*** | The last name of the user | 
**s_user_loginname** | **char \*** | The login name of the User. | 
**e_user_ezsignaccess** | **field_e_user_ezsignaccess_t \*** |  | 
**dt_user_lastlogondate** | **char \*** | The last logon date of the User | [optional] 
**dt_user_passwordchanged** | **char \*** | The date at which the User&#39;s password was last changed | [optional] 
**dt_user_ezsignprepaidexpiration** | **char \*** | The eZsign prepaid expiration date | [optional] 
**b_user_isactive** | **int** | Whether the User is active or not | 
**b_user_validatebyadministration** | **int** | Whether if the transactions in which the User is implicated must be validated by administrative personnel or not | [optional] 
**b_user_validatebydirector** | **int** | Whether if the transactions in which the User is implicated must be validated by a director or not | [optional] 
**b_user_attachmentautoverified** | **int** | Whether if Attachments uploaded by the User must be validated or not | [optional] 
**b_user_changepassword** | **int** | Whether if the User is forced to change its password | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


