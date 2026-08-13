# custom_ezmaxpartnerproduct_subscribe_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pks_ezmaxcustomer_code** | **char \*** | The Ezmaxcustomer code | 
**s_infrastructureenvironmenttype_description** | **char \*** | The environment type Description | 
**s_company_name1** | **char \*** | The Name of the Company in French | 
**s_company_name2** | **char \*** | The Name of the Company in English | 
**fki_systemconfigurationtype_id** | **int** | The unique ID of the Systemconfigurationtype | 
**s_systemconfigurationtype_description1** | **char \*** | The description of the Systemconfigurationtype in the language of the requester | 
**s_systemconfigurationtype_description2** | **char \*** | The description of the Systemconfigurationtype in the language of the requester | 
**fki_ezmaxpartner_id** | **int** | The unique ID of the Ezmaxpartner | 
**s_ezmaxpartner_name1** | **char \*** | The name of the Ezmaxpartner in french | 
**s_ezmaxpartner_name2** | **char \*** | The name of the Ezmaxpartner in english | 
**fki_ezmaxpartnerproduct_id** | **int** | The unique ID of the Ezmaxpartnerproduct | 
**s_ezmaxpartnerproduct_name1** | **char \*** | The name1 of the Ezmaxpartnerproduct | 
**s_ezmaxpartnerproduct_name2** | **char \*** | The name2 of the Ezmaxpartnerproduct | 
**fki_ezmaxpartnerproductstage_id** | **int** | The unique ID of the Ezmaxpartnerproductstage | 
**s_ezmaxpartnerproductstage_code** | **char \*** | The code of the sEzmaxpartnerproductstage | 
**s_user_login_name** | **char \*** | The login name of the User. | 
**s_user_first_name** | **char \*** | The first name of the user | 
**s_user_last_name** | **char \*** | The last name of the user | 
**fki_user_id** | **int** | The unique ID of the User | 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | 
**obj_address** | [**address_request_compound_t**](address_request_compound.md) \* |  | [optional] 
**objphone** | [**phone_request_compound_v2_t**](phone_request_compound_v2.md) \* |  | [optional] 
**obj_email** | [**email_request_compound_t**](email_request_compound.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


