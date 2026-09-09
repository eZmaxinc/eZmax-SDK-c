# ObjectReconciliationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectReconciliationAPI_reconciliationBatchDownloadV1**](ObjectReconciliationAPI.md#ObjectReconciliationAPI_reconciliationBatchDownloadV1) | **POST** /1/object/reconciliation/{pkiReconciliationID}/batchDownload | Download multiples attachments from a Reconciliation
[**ObjectReconciliationAPI_reconciliationGetAttachmentsV1**](ObjectReconciliationAPI.md#ObjectReconciliationAPI_reconciliationGetAttachmentsV1) | **GET** /1/object/reconciliation/{pkiReconciliationID}/getAttachments | Retrieve Reconciliation&#39;s attachments
[**ObjectReconciliationAPI_reconciliationImportIntoEDMV1**](ObjectReconciliationAPI.md#ObjectReconciliationAPI_reconciliationImportIntoEDMV1) | **POST** /1/object/reconciliation/{pkiReconciliationID}/importIntoEDM | Import attachments into the Reconciliation


# **ObjectReconciliationAPI_reconciliationBatchDownloadV1**
```c
// Download multiples attachments from a Reconciliation
//
binary_t** ObjectReconciliationAPI_reconciliationBatchDownloadV1(apiClient_t *apiClient, int *pkiReconciliationID, reconciliation_batch_download_v1_request_t *reconciliation_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiReconciliationID** | **int \*** |  | 
**reconciliation_batch_download_v1_request** | **[reconciliation_batch_download_v1_request_t](reconciliation_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectReconciliationAPI_reconciliationGetAttachmentsV1**
```c
// Retrieve Reconciliation's attachments
//
reconciliation_get_attachments_v1_response_t* ObjectReconciliationAPI_reconciliationGetAttachmentsV1(apiClient_t *apiClient, int *pkiReconciliationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiReconciliationID** | **int \*** |  | 

### Return type

[reconciliation_get_attachments_v1_response_t](reconciliation_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectReconciliationAPI_reconciliationImportIntoEDMV1**
```c
// Import attachments into the Reconciliation
//
reconciliation_import_into_edm_v1_response_t* ObjectReconciliationAPI_reconciliationImportIntoEDMV1(apiClient_t *apiClient, int *pkiReconciliationID, reconciliation_import_into_edm_v1_request_t *reconciliation_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiReconciliationID** | **int \*** |  | 
**reconciliation_import_into_edm_v1_request** | **[reconciliation_import_into_edm_v1_request_t](reconciliation_import_into_edm_v1_request.md) \*** |  | 

### Return type

[reconciliation_import_into_edm_v1_response_t](reconciliation_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

