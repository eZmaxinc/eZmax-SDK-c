# ezsigntemplatepublic_response_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsigntemplatepublic_id** | **int** | The unique ID of the Ezsigntemplatepublic | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | 
**fki_userlogintype_id** | **int** | The unique ID of the Userlogintype  Valid values:  |Value|Description|Detail| |-|-|-| |1|**Email Only**|The Ezsignsigner will receive a secure link by email| |2|**Email and phone or SMS**|The Ezsignsigner will receive a secure link by email and will need to authenticate using SMS or Phone call. **Additional fee applies**| |3|**Email and secret question**|The Ezsignsigner will receive a secure link by email and will need to authenticate using a predefined question and answer| |4|**In person only**|The Ezsignsigner will only be able to sign \&quot;In-Person\&quot; and there won&#39;t be any authentication. No email will be sent for invitation to sign. Make sure you evaluate the risk of signature denial and at minimum, we recommend you use a handwritten signature type| |5|**In person with phone or SMS**|The Ezsignsigner will only be able to sign \&quot;In-Person\&quot; and will need to authenticate using SMS or Phone call. No email will be sent for invitation to sign. **Additional fee applies**| |6|**Embedded**|The Ezsignsigner will only be able to sign in the embedded solution. No email will be sent for invitation to sign. **Additional fee applies**|   |7|**Embedded with phone or SMS**|The Ezsignsigner will only be able to sign in the embedded solution and will need to authenticate using SMS or Phone call. No email will be sent for invitation to sign. **Additional fee applies**|   |8|**No validation**|The Ezsignsigner will not receive an email and won&#39;t have to validate his connection using 2 factor. **Additional fee applies**|      |9|**Sms only**|The Ezsignsigner will not receive an email but will will need to authenticate using SMS. **Additional fee applies**|      | 
**s_userlogintype_description_x** | **char \*** | The description of the Userlogintype in the language of the requester | 
**fki_ezsigntemplate_id** | **int** | The unique ID of the Ezsigntemplate | [optional] 
**fki_ezsigntemplatepackage_id** | **int** | The unique ID of the Ezsigntemplatepackage | [optional] 
**s_ezsigntemplatepublic_description** | **char \*** | The description of the Ezsigntemplatepublic | 
**s_ezsigntemplatepublic_referenceid** | **char \*** | The referenceid of the Ezsigntemplatepublic | 
**b_ezsigntemplatepublic_isactive** | **int** | Whether the ezsigntemplatepublic is active or not | 
**t_ezsigntemplatepublic_note** | **char \*** | The note of the Ezsigntemplatepublic | 
**e_ezsigntemplatepublic_limittype** | **field_e_ezsigntemplatepublic_limittype_t \*** |  | 
**i_ezsigntemplatepublic_limit** | **int** | The limit of the Ezsigntemplatepublic | 
**i_ezsigntemplatepublic_limitexceeded** | **int** | The limitexceeded of the Ezsigntemplatepublic | 
**dt_ezsigntemplatepublic_limitexceededsince** | **char \*** | The limitexceededsince of the Ezsigntemplatepublic | 
**s_ezsigntemplatepublic_url** | **char \*** | The url of the Ezsigntemplatepublic  You can add these value as query parameters to prefill the corresponding role  |Parameter|Description| |-|-| |sEzsigntemplatesignerDescription|The role to fill| |sContactFirstname|The contact firstname| |sContactLastname|The contact lastname| |sEmailAddress|The contact email| |sPhoneE164|The contact phone number| |sPhoneE164Cell|The contact cell phone number| | 
**s_ezsigntemplatepublic_ezsigntemplatedescription** | **char \*** | The Ezsigntemplate/Ezsigntemplatepackage description | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


