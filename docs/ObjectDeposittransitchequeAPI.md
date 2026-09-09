# ObjectDeposittransitchequeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1) | **POST** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/batchDownload | Download multiples attachments from a Deposittransitcheque
[**ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1) | **GET** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/getAttachments | Retrieve Deposittransitcheque&#39;s attachments
[**ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1**](ObjectDeposittransitchequeAPI.md#ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1) | **POST** /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/importIntoEDM | Import attachments into the Deposittransitcheque


# **ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1**
```c
// Download multiples attachments from a Deposittransitcheque
//
binary_t** ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID, deposittransitcheque_batch_download_v1_request_t *deposittransitcheque_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 
**deposittransitcheque_batch_download_v1_request** | **[deposittransitcheque_batch_download_v1_request_t](deposittransitcheque_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1**
```c
// Retrieve Deposittransitcheque's attachments
//
deposittransitcheque_get_attachments_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 

### Return type

[deposittransitcheque_get_attachments_v1_response_t](deposittransitcheque_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1**
```c
// Import attachments into the Deposittransitcheque
//
deposittransitcheque_import_into_edm_v1_response_t* ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID, deposittransitcheque_import_into_edm_v1_request_t *deposittransitcheque_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDeposittransitchequeID** | **int \*** |  | 
**deposittransitcheque_import_into_edm_v1_request** | **[deposittransitcheque_import_into_edm_v1_request_t](deposittransitcheque_import_into_edm_v1_request.md) \*** |  | 

### Return type

[deposittransitcheque_import_into_edm_v1_response_t](deposittransitcheque_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

