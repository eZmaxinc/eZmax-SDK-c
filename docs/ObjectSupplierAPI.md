# ObjectSupplierAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectSupplierAPI_supplierGetListV1**](ObjectSupplierAPI.md#ObjectSupplierAPI_supplierGetListV1) | **GET** /1/object/supplier/getList | Retrieve Supplier list
[**ObjectSupplierAPI_supplierImportIntoEDMV1**](ObjectSupplierAPI.md#ObjectSupplierAPI_supplierImportIntoEDMV1) | **POST** /1/object/supplier/{pkiSupplierID}/importIntoEDM | Import attachments into the Supplier


# **ObjectSupplierAPI_supplierGetListV1**
```c
// Retrieve Supplier list
//
// 
//
supplier_get_list_v1_response_t* ObjectSupplierAPI_supplierGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_supplierGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_supplierGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[supplier_get_list_v1_response_t](supplier_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSupplierAPI_supplierImportIntoEDMV1**
```c
// Import attachments into the Supplier
//
// 
//
supplier_import_into_edm_v1_response_t* ObjectSupplierAPI_supplierImportIntoEDMV1(apiClient_t *apiClient, int *pkiSupplierID, supplier_import_into_edm_v1_request_t *supplier_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSupplierID** | **int \*** |  | 
**supplier_import_into_edm_v1_request** | **[supplier_import_into_edm_v1_request_t](supplier_import_into_edm_v1_request.md) \*** |  | 

### Return type

[supplier_import_into_edm_v1_response_t](supplier_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

