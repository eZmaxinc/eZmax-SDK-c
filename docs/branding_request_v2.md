# branding_request_v2_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_branding_id** | **int** | The unique ID of the Branding | [optional] 
**obj_branding_description** | [**multilingual_branding_description_t**](multilingual_branding_description.md) \* |  | 
**e_branding_logo** | **field_e_branding_logo_t \*** |  | 
**e_branding_alignlogo** | **field_e_branding_alignlogo_t \*** |  | [optional] 
**s_branding_base64** | **char \*** | The Base64 encoded binary content of the branding logo. This need to match image type selected in eBrandingLogo if you supply an image. If you select &#39;Default&#39;, the logo will be deleted and the default one will be used. | [optional] 
**i_branding_color** | **int** | The primary color. This is a RGB color converted into integer | 
**s_branding_name** | **char \*** | The name of the Branding  This value will only be set if you wish to overwrite the default name. If you want to keep the default name, leave this property empty | [optional] 
**s_email_address** | **char \*** | The email address. | [optional] 
**b_branding_isactive** | **int** | Whether the Branding is active or not | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


