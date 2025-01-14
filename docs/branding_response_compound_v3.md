# branding_response_compound_v3_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_branding_id** | **int** | The unique ID of the Branding | 
**fki_email_id** | **int** | The unique ID of the Email | [optional] 
**obj_branding_description** | [**multilingual_branding_description_t**](multilingual_branding_description.md) \* |  | 
**s_branding_description_x** | **char \*** | The Description of the Branding in the language of the requester | 
**s_branding_name** | **char \*** | The name of the Branding  This value will only be set if you wish to overwrite the default name. If you want to keep the default name, leave this property empty | [optional] 
**s_email_address** | **char \*** | The email address. | [optional] 
**e_branding_logo** | **field_e_branding_logo_t \*** |  | 
**e_branding_alignlogo** | **field_e_branding_alignlogo_t \*** |  | 
**i_branding_color** | **int** | The primary color. This is a RGB color converted into integer | 
**b_branding_isactive** | **int** | Whether the Branding is active or not | 
**s_branding_logourl** | **char \*** | The url of the picture used as logo in the Branding | [optional] 
**s_branding_logoemailurl** | **char \*** | The url of the picture used in email as logo in the Branding | [optional] 
**s_branding_logointerfaceurl** | **char \*** | The url of the picture used as logo in the Branding | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


