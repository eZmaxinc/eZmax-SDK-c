# ObjectSalaryAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectSalaryAPI_salaryBatchDownloadV1**](ObjectSalaryAPI.md#ObjectSalaryAPI_salaryBatchDownloadV1) | **POST** /1/object/salary/{pkiSalaryID}/batchDownload | Download multiples attachments from a Reconciliation
[**ObjectSalaryAPI_salaryGetAttachmentsV1**](ObjectSalaryAPI.md#ObjectSalaryAPI_salaryGetAttachmentsV1) | **GET** /1/object/salary/{pkiSalaryID}/getAttachments | Retrieve Salary&#39;s attachments
[**ObjectSalaryAPI_salaryGetListV1**](ObjectSalaryAPI.md#ObjectSalaryAPI_salaryGetListV1) | **GET** /1/object/salary/getList | Retrieve Salary list
[**ObjectSalaryAPI_salaryImportIntoEDMV1**](ObjectSalaryAPI.md#ObjectSalaryAPI_salaryImportIntoEDMV1) | **POST** /1/object/salary/{pkiSalaryID}/importIntoEDM | Import attachments into the Salary


# **ObjectSalaryAPI_salaryBatchDownloadV1**
```c
// Download multiples attachments from a Reconciliation
//
binary_t** ObjectSalaryAPI_salaryBatchDownloadV1(apiClient_t *apiClient, int *pkiSalaryID, salary_batch_download_v1_request_t *salary_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSalaryID** | **int \*** |  | 
**salary_batch_download_v1_request** | **[salary_batch_download_v1_request_t](salary_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSalaryAPI_salaryGetAttachmentsV1**
```c
// Retrieve Salary's attachments
//
salary_get_attachments_v1_response_t* ObjectSalaryAPI_salaryGetAttachmentsV1(apiClient_t *apiClient, int *pkiSalaryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSalaryID** | **int \*** |  | 

### Return type

[salary_get_attachments_v1_response_t](salary_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSalaryAPI_salaryGetListV1**
```c
// Retrieve Salary list
//
// 
//
salary_get_list_v1_response_t* ObjectSalaryAPI_salaryGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_salaryGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_salaryGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[salary_get_list_v1_response_t](salary_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSalaryAPI_salaryImportIntoEDMV1**
```c
// Import attachments into the Salary
//
salary_import_into_edm_v1_response_t* ObjectSalaryAPI_salaryImportIntoEDMV1(apiClient_t *apiClient, int *pkiSalaryID, salary_import_into_edm_v1_request_t *salary_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSalaryID** | **int \*** |  | 
**salary_import_into_edm_v1_request** | **[salary_import_into_edm_v1_request_t](salary_import_into_edm_v1_request.md) \*** |  | 

### Return type

[salary_import_into_edm_v1_response_t](salary_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

