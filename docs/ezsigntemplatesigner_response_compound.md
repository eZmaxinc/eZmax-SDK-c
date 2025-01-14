# ezsigntemplatesigner_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezsigntemplatesigner_id** | **int** | The unique ID of the Ezsigntemplatesigner | 
**fki_ezsigntemplate_id** | **int** | The unique ID of the Ezsigntemplate | 
**fki_user_id** | **int** | The unique ID of the User | [optional] 
**fki_usergroup_id** | **int** | The unique ID of the Usergroup | [optional] 
**fki_ezdoctemplatedocument_id** | **int** | The unique ID of the Ezdoctemplatedocument | [optional] 
**b_ezsigntemplatesigner_receivecopy** | **int** | If this flag is true. The signatory will receive a copy of every signed Ezsigndocument even if it ain&#39;t required to sign the document. | [optional] 
**e_ezsigntemplatesigner_mapping** | **field_e_ezsigntemplatesigner_mapping_t \*** |  | [optional] 
**s_ezsigntemplatesigner_description** | **char \*** | The description of the Ezsigntemplatesigner | 
**s_user_name** | **char \*** | The description of the User in the language of the requester | [optional] 
**s_usergroup_name_x** | **char \*** | The Name of the Usergroup in the language of the requester | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


