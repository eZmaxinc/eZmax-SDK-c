# ezmaxinvoicing_response_compound_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**pki_ezmaxinvoicing_id** | **int** | The unique ID of the Ezmaxinvoicing | [optional] 
**fki_ezmaxinvoicingcontract_id** | **int** | The unique ID of the Ezmaxinvoicingcontract | 
**fki_ezmaxpricing_id** | **int** | The unique ID of the Ezmaxpricing | 
**fki_systemconfigurationtype_id** | **int** | The unique ID of the Systemconfigurationtype | 
**s_systemconfigurationtype_description_x** | **char \*** | The description of the Systemconfigurationtype in the language of the requester | 
**yyyymm_ezmaxinvoicing** | **char \*** | The YYYYMM period of the Ezmaxinvoicing | 
**i_ezmaxinvoicing_days** | **int** | The number of days invoiced | 
**e_ezmaxinvoicing_paymenttype** | **field_e_ezmaxinvoicing_paymenttype_t \*** |  | 
**d_ezmaxinvoicing_rebatepaymenttype** | **char \*** | The percentage of rebate depending of the payment type | 
**i_ezmaxinvoicing_contractlength** | **int** | The length of the contract in years | 
**d_ezmaxinvoicing_rebatecontractlength** | **char \*** | The percentage of rebate depending of the contract length | 
**b_ezmaxinvoicing_rebate_ezsignallagents** | **int** | Whether the rebate for eZsign is for all agents | 
**obj_audit** | [**common_audit_t**](common_audit.md) \* |  | [optional] 
**obj_ezmaxinvoicingcontract** | [**ezmaxinvoicingcontract_response_compound_t**](ezmaxinvoicingcontract_response_compound.md) \* |  | 
**obj_ezmaxpricing** | [**custom_ezmaxpricing_response_t**](custom_ezmaxpricing_response.md) \* |  | 
**a_obj_ezmaxinvoicingsummaryglobal** | [**list_t**](ezmaxinvoicingsummaryglobal_response_compound.md) \* |  | 
**a_obj_ezmaxinvoicingsummaryexternal** | [**list_t**](ezmaxinvoicingsummaryexternal_response_compound.md) \* |  | 
**a_obj_ezmaxinvoicingsummaryinternal** | [**list_t**](ezmaxinvoicingsummaryinternal_response_compound.md) \* |  | 
**a_obj_ezmaxinvoicingagent** | [**list_t**](ezmaxinvoicingagent_response_compound.md) \* |  | 
**a_obj_ezmaxinvoicinguser** | [**list_t**](ezmaxinvoicinguser_response_compound.md) \* |  | 
**a_obj_ezmaxinvoicingezsignfolder** | [**list_t**](custom_ezmaxinvoicing_ezsignfolder_response.md) \* |  | 
**a_obj_ezmaxinvoicingezsigndocument** | [**list_t**](custom_ezmaxinvoicing_ezsigndocument_response.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


