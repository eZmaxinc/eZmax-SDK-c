# ObjectEmployeeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEmployeeAPI_employeeGetListV1**](ObjectEmployeeAPI.md#ObjectEmployeeAPI_employeeGetListV1) | **GET** /1/object/employee/getList | Retrieve Employee list
[**ObjectEmployeeAPI_employeeImportIntoEDMV1**](ObjectEmployeeAPI.md#ObjectEmployeeAPI_employeeImportIntoEDMV1) | **POST** /1/object/employee/{pkiEmployeeID}/importIntoEDM | Import attachments into the Employee


# **ObjectEmployeeAPI_employeeGetListV1**
```c
// Retrieve Employee list
//
// 
//
employee_get_list_v1_response_t* ObjectEmployeeAPI_employeeGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_employeeGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_employeeGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[employee_get_list_v1_response_t](employee_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEmployeeAPI_employeeImportIntoEDMV1**
```c
// Import attachments into the Employee
//
// 
//
employee_import_into_edm_v1_response_t* ObjectEmployeeAPI_employeeImportIntoEDMV1(apiClient_t *apiClient, int *pkiEmployeeID, employee_import_into_edm_v1_request_t *employee_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEmployeeID** | **int \*** |  | 
**employee_import_into_edm_v1_request** | **[employee_import_into_edm_v1_request_t](employee_import_into_edm_v1_request.md) \*** |  | 

### Return type

[employee_import_into_edm_v1_response_t](employee_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

