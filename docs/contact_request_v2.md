# contact_request_v2_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**fki_contacttitle_id** | **int** | The unique ID of the Contacttitle.  Valid values:  |Value|Description| |-|-| |1|Ms.| |2|Mr.| |4|(Blank)| |5|Me (For Notaries)| | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**e_contact_type** | **field_e_contact_type_t \*** |  | 
**s_contact_firstname** | **char \*** | The First name of the contact | 
**s_contact_lastname** | **char \*** | The Last name of the contact | 
**s_contact_company** | **char \*** | The Company name of the contact | [optional] 
**dt_contact_birthdate** | **char \*** | The Birth Date of the contact | [optional] 
**s_contact_occupation** | **char \*** | The occupation of the Contact | [optional] 
**t_contact_note** | **char \*** | The note of the Contact | [optional] 
**b_contact_isactive** | **int** | Whether the contact is active or not | [optional] 
**obj_contactinformations** | [**contactinformations_request_compound_t**](contactinformations_request_compound.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


