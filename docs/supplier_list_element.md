# supplier_list_element_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_supplier_id** | **int** | The unique ID of the Supplier. | 
**fki_paymentmethod_id** | **int** | The unique ID of the Paymentmethod | [optional] 
**s_supplier_name** | **char \*** | The name of the Supplier | 
**s_supplier_code** | **char \*** | The code of the Supplier | 
**s_supplier_account** | **char \*** | The account of the Supplier | 
**b_supplier_isactive** | **int** | Whether the supplier is active or not | 
**s_phone_e164** | **char \*** | A phone number in E.164 Format | [optional] 
**s_email_address** | **char \*** | The email address. | [optional] 
**s_address_civic** | **char \*** | The Civic number. | [optional] 
**s_address_street** | **char \*** | The Street Name | [optional] 
**s_address_suite** | **char \*** | The Suite or appartment number | [optional] 
**s_address_city** | **char \*** | The City name | [optional] 
**s_address_zip** | **char \*** | The Postal/Zip Code  The value must be entered without spaces | [optional] 
**fki_province_id** | **int** | The unique ID of the Province.  Here are some common values (Complete list must be retrieved from API):  |Value|Description| |-|-| |1|(Canada) Alberta |2|(Canada) British Columbia| |3|(Canada) Manitoba| |3|(Canada) Manitoba| |4|(Canada) New Brunswick| |5|(Canada) Newfoundland| |6|(Canada) Northwest Territories| |7|(Canada) Nova Scotia| |8|(Canada) Nunavut| |9|(Canada) Ontario| |10|(Canada) Prince Edward Island| |11|(Canada) Quebec| |12|(Canada) Saskatchewan| |13|(Canada) Yukon| |14|(United-States) Alabama| |15|(United-States) Alaska| |16|(United-States) Arizona| |17|(United-States) Arkansas| |18|(United-States) California| |19|(United-States) Colorado| |20|(United-States) Connecticut| |21|(United-States) Delaware| |22|(United-States) District of Columbia| |23|(United-States) Florida| |24|(United-States) Georgia| |25|(United-States) Hawaii| |26|(United-States) Idaho| |27|(United-States) Illinois| |28|(United-States) Indiana| |29|(United-States) Iowa| |30|(United-States) Kansas| |31|(United-States) Kentucky| |32|(United-States) Louisiane| |33|(United-States) Maine| |34|(United-States) Maryland| |35|(United-States) Massachusetts| |36|(United-States) Michigan| |37|(United-States) Minnesota| |38|(United-States) Mississippi| |39|(United-States) Missouri| |40|(United-States) Montana| |41|(United-States) Nebraska| |42|(United-States) Nevada| |43|(United-States) New Hampshire| |44|(United-States) New Jersey| |45|(United-States) New Mexico| |46|(United-States) New York| |47|(United-States) North Carolina| |48|(United-States) North Dakota| |49|(United-States) Ohio| |50|(United-States) Oklahoma| |51|(United-States) Oregon| |52|(United-States) Pennsylvania| |53|(United-States) Rhode Island| |54|(United-States) South Carolina| |55|(United-States) South Dakota| |56|(United-States) Tennessee| |57|(United-States) Texas| |58|(United-States) Utah| |60|(United-States) Vermont| |59|(United-States) Virginia| |61|(United-States) Washington| |62|(United-States) West Virginia| |63|(United-States) Wisconsin| |64|(United-States) Wyoming| | [optional] 
**s_province_name_x** | **char \*** | The name of the Province in the language of the requester | [optional] 
**fki_country_id** | **int** | The unique ID of the Country.  Here are some common values (Complete list must be retrieved from API):  |Value|Description| |-|-| |1|Canada| |2|United-States| | [optional] 
**s_country_name_x** | **char \*** | The name of the Country in the language of the requester | [optional] 
**s_paymentmethod_description_x** | **char \*** | The description of the Paymentmethod in the language of the requester | [optional] 
**s_electronicfundstransferbankaccount_transit** | **char \*** | The transit of the Electronicfundstransferbankaccount | [optional] 
**s_electronicfundstransferbankaccount_institution** | **char \*** | The institution of the Electronicfundstransferbankaccount | [optional] 
**s_electronicfundstransferbankaccount_account** | **char \*** | The account of the Electronicfundstransferbankaccount | [optional] 
**s_glaccountcontainer_longcode** | **char \*** | The Code for the Glaccountcontainer | 
**s_glaccountcontainer_longdescription_x** | **char \*** | The Description for the Glaccountcontainer in the language of the requester | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


