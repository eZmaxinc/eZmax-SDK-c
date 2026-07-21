# ezmaxpartner_subscribe_v1_request_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pks_ezmaxcustomer_code** | **char \*** | The Ezmaxcustomer code | [optional] 
**s_infrastructureenvironmenttype_description** | **char \*** | The environment type Description | [optional] 
**s_company_name1** | **char \*** | The Name of the Company in French | [optional] 
**s_company_name2** | **char \*** | The Name of the Company in English | [optional] 
**fki_systemconfigurationtype_id** | **int** | The unique ID of the Systemconfigurationtype | [optional] 
**s_systemconfigurationtype_description1** | **char \*** | The description of the Systemconfigurationtype in the language of the requester | [optional] 
**s_systemconfigurationtype_description2** | **char \*** | The description of the Systemconfigurationtype in the language of the requester | [optional] 
**fki_ezmaxpartner_id** | **int** | The unique ID of the Ezmaxpartner | [optional] 
**s_ezmaxpartner_name1** | **char \*** | The name of the Ezmaxpartner in french | [optional] 
**s_ezmaxpartner_name2** | **char \*** | The name of the Ezmaxpartner in english | [optional] 
**fki_ezmaxpartnerproduct_id** | **int** | The unique ID of the Ezmaxpartnerproduct | [optional] 
**s_ezmaxpartnerproduct_name1** | **char \*** | The name1 of the Ezmaxpartnerproduct | [optional] 
**s_ezmaxpartnerproduct_name2** | **char \*** | The name2 of the Ezmaxpartnerproduct | [optional] 
**fki_ezmaxpartnerproductstage_id** | **int** | The unique ID of the Ezmaxpartnerproductstage | [optional] 
**s_ezmaxpartnerproductstage_code** | **char \*** | The code of the sEzmaxpartnerproductstage | [optional] 
**s_user_login_name** | **char \*** | The login name of the User. | [optional] 
**s_user_first_name** | **char \*** | The first name of the user | [optional] 
**s_user_last_name** | **char \*** | The last name of the user | [optional] 
**fki_user_id** | **int** | The unique ID of the User | [optional] 
**fki_language_id** | **int** | The unique ID of the Language.  Valid values:  |Value|Description| |-|-| |1|French| |2|English| | [optional] 
**obj_address** | [**address_request_compound_t**](address_request_compound.md) \* |  | [optional] 
**objphone** | [**phone_request_compound_v2_t**](phone_request_compound_v2.md) \* |  | [optional] 
**obj_email** | [**email_request_compound_t**](email_request_compound.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


