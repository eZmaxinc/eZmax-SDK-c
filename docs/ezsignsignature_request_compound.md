# ezsignsignature_request_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**b_ezsignsignature_customdate** | **int** | Whether the Ezsignsignature has a custom date format or not. (Only possible when eEzsignsignatureType is \&quot;Name\&quot; or \&quot;Handwritten\&quot;) | [optional] 
**a_obj_ezsignsignaturecustomdate** | [**list_t**](ezsignsignaturecustomdate_request.md) \* | An array of custom date blocks that will be filled at the time of signature.  Can only be used if bEzsignsignatureCustomdate is true.  Use an empty array if you don&#39;t want to have a date at all. | [optional] 
**fki_ezsignfoldersignerassociation_id** | **int** | The unique ID of the Ezsignfoldersignerassociation | 
**i_ezsignpage_pagenumber** | **int** | The page number in the Ezsigndocument | 
**i_ezsignsignature_x** | **int** | The X coordinate (Horizontal) where to put the signature block on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the signature block 2 inches from the left border of the page, you would use \&quot;200\&quot; for the X coordinate. | 
**i_ezsignsignature_y** | **int** | The Y coordinate (Vertical) where to put the signature block on the page.  Coordinate is calculated at 100dpi (dot per inch). So for example, if you want to put the signature block 3 inches from the top border of the page, you would use \&quot;300\&quot; for the Y coordinate. | 
**i_ezsignsignature_step** | **int** | The step when the Ezsignsigner will be invited to sign or fill form fields | 
**e_ezsignsignature_type** | **field_e_ezsignsignature_type_t \*** |  | 
**fki_ezsigndocument_id** | **int** | The unique ID of the Ezsigndocument | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


