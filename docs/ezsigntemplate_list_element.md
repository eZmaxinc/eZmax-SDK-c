# ezsigntemplate_list_element_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsigntemplate_id** | **int** | The unique ID of the Ezsigntemplate | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | [optional] 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**s_ezsigntemplate_description** | **char \*** | The description of the Ezsigntemplate | 
**i_ezsigntemplatedocument_pagetotal** | **int** | The number of pages in the Ezsigntemplatedocument. | [optional] 
**i_ezsigntemplate_signaturetotal** | **int** | The number of total signatures in the Ezsigntemplate. | [optional] 
**i_ezsigntemplate_formfieldtotal** | **int** | The number of total form fields in the Ezsigntemplate. | [optional] 
**b_ezsigntemplate_incomplete** | **int** | Indicate the Ezsigntemplate is incomplete and cannot be used | 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | [optional] 
**e_ezsigntemplate_type** | **field_e_ezsigntemplate_type_t \*** |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


