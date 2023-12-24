# ezsignsignature_sign_v1_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**fki_ezsignsigningreason_id** | **int** | The unique ID of the Ezsignsigningreason | [optional] 
**s_value** | **char \*** | The value required for the Ezsignsignature.  This can only be set if eEzsignsignatureType is **City**, **FieldText** or **FieldTextarea** | [optional] 
**e_attachments_confirmation_decision** | **ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e** | Whether the attachment are accepted or refused.  This can only be set if eEzsignsignatureType is **AttachmentsConfirmation** | [optional] 
**s_attachments_refusal_reason** | **char \*** | The reason of refused.  This can only be set if eEzsignsignatureType is **AttachmentsConfirmation** | [optional] 
**s_svg** | **char \*** | The SVG of the handwritten signature.  This can only be set if eEzsignsignatureType is **Handwritten** and **bIsAutomatic** is false | [optional] 
**a_obj_file** | [**list_t**](common_file.md) \* |  | [optional] 
**b_is_automatic** | **int** | Indicates if the Ezsignsignature was part of an automatic process or not.  This can only be true if eEzsignsignatureType is **Acknowledgement**, **City**, **Handwritten**, **Initials**, **Name** or **Stamp**.  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


