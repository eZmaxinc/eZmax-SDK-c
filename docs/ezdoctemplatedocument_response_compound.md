# ezdoctemplatedocument_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezdoctemplatedocument_id** | **int** | The unique ID of the Ezdoctemplatedocument | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**fki_ezsignfoldertype_id** | **int** | The unique ID of the Ezsignfoldertype. | [optional] 
**fki_ezdoctemplatetype_id** | **int** | The unique ID of the Ezdoctemplatetype | 
**fki_ezdoctemplatefieldtypecategory_id** | **int** | The unique ID of the Ezdoctemplatefieldtypecategory | 
**e_ezdoctemplatedocument_privacylevel** | **field_e_ezdoctemplatedocument_privacylevel_t \*** |  | [optional] 
**b_ezdoctemplatedocument_isactive** | **int** | Whether the ezdoctemplatedocument is active or not | 
**obj_ezdoctemplatedocument_name** | [**multilingual_ezdoctemplatedocument_name_t**](multilingual_ezdoctemplatedocument_name.md) \* |  | 
**s_ezdoctemplatedocument_name_x** | **char \*** | The name of the Ezdoctemplatedocument in the language of the requester | [optional] 
**s_ezsignfoldertype_name_x** | **char \*** | The name of the Ezsignfoldertype in the language of the requester | [optional] 
**s_ezdoctemplatefieldtypecategory_description_x** | **char \*** | The description of the Ezdoctemplatefieldtypecategory in the language of the requester | 
**s_ezdoctemplatetype_description_x** | **char \*** | The description of the Ezdoctemplatetype in the language of the requester | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


