# ObjectNotaryAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectNotaryAPI_notaryBatchDownloadV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryBatchDownloadV1) | **POST** /1/object/notary/{pkiNotaryID}/batchDownload | Download multiples attachments from a Notary
[**ObjectNotaryAPI_notaryGetAttachmentsV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryGetAttachmentsV1) | **GET** /1/object/notary/{pkiNotaryID}/getAttachments | Retrieve Notary&#39;s attachments
[**ObjectNotaryAPI_notaryImportIntoEDMV1**](ObjectNotaryAPI.md#ObjectNotaryAPI_notaryImportIntoEDMV1) | **POST** /1/object/notary/{pkiNotaryID}/importIntoEDM | Import attachments into the Notary


# **ObjectNotaryAPI_notaryBatchDownloadV1**
```c
// Download multiples attachments from a Notary
//
binary_t** ObjectNotaryAPI_notaryBatchDownloadV1(apiClient_t *apiClient, int *pkiNotaryID, notary_batch_download_v1_request_t *notary_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 
**notary_batch_download_v1_request** | **[notary_batch_download_v1_request_t](notary_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryGetAttachmentsV1**
```c
// Retrieve Notary's attachments
//
notary_get_attachments_v1_response_t* ObjectNotaryAPI_notaryGetAttachmentsV1(apiClient_t *apiClient, int *pkiNotaryID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 

### Return type

[notary_get_attachments_v1_response_t](notary_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectNotaryAPI_notaryImportIntoEDMV1**
```c
// Import attachments into the Notary
//
notary_import_into_edm_v1_response_t* ObjectNotaryAPI_notaryImportIntoEDMV1(apiClient_t *apiClient, int *pkiNotaryID, notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiNotaryID** | **int \*** |  | 
**notary_import_into_edm_v1_request** | **[notary_import_into_edm_v1_request_t](notary_import_into_edm_v1_request.md) \*** |  | 

### Return type

[notary_import_into_edm_v1_response_t](notary_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

