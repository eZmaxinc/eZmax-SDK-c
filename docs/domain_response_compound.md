# domain_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_domain_id** | **int** | The unique ID of the Domain | 
**s_domain_name** | **char \*** | The name of the Domain | 
**b_domain_validdkim** | **int** | Whether the DKIM is valid or not | 
**b_domain_validmailfrom** | **int** | Whether the mail from is valid or not | 
**b_domain_validcustomer** | **int** | Whether the customer has access to it or not | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | 
**a_obj_dnsrecord** | [**list_t**](custom_dnsrecord_response.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


