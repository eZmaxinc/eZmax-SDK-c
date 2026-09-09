# ObjectDepositAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDepositAPI_depositBatchDownloadV1**](ObjectDepositAPI.md#ObjectDepositAPI_depositBatchDownloadV1) | **POST** /1/object/deposit/{pkiDepositID}/batchDownload | Download multiples attachments from a Deposit
[**ObjectDepositAPI_depositGetAttachmentsV1**](ObjectDepositAPI.md#ObjectDepositAPI_depositGetAttachmentsV1) | **GET** /1/object/deposit/{pkiDepositID}/getAttachments | Retrieve Deposit&#39;s attachments
[**ObjectDepositAPI_depositImportIntoEDMV1**](ObjectDepositAPI.md#ObjectDepositAPI_depositImportIntoEDMV1) | **POST** /1/object/deposit/{pkiDepositID}/importIntoEDM | Import attachments into the Deposit


# **ObjectDepositAPI_depositBatchDownloadV1**
```c
// Download multiples attachments from a Deposit
//
binary_t** ObjectDepositAPI_depositBatchDownloadV1(apiClient_t *apiClient, int *pkiDepositID, deposit_batch_download_v1_request_t *deposit_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDepositID** | **int \*** |  | 
**deposit_batch_download_v1_request** | **[deposit_batch_download_v1_request_t](deposit_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDepositAPI_depositGetAttachmentsV1**
```c
// Retrieve Deposit's attachments
//
deposit_get_attachments_v1_response_t* ObjectDepositAPI_depositGetAttachmentsV1(apiClient_t *apiClient, int *pkiDepositID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDepositID** | **int \*** |  | 

### Return type

[deposit_get_attachments_v1_response_t](deposit_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDepositAPI_depositImportIntoEDMV1**
```c
// Import attachments into the Deposit
//
deposit_import_into_edm_v1_response_t* ObjectDepositAPI_depositImportIntoEDMV1(apiClient_t *apiClient, int *pkiDepositID, deposit_import_into_edm_v1_request_t *deposit_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDepositID** | **int \*** |  | 
**deposit_import_into_edm_v1_request** | **[deposit_import_into_edm_v1_request_t](deposit_import_into_edm_v1_request.md) \*** |  | 

### Return type

[deposit_import_into_edm_v1_response_t](deposit_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

