# ObjectCommissionadvanceAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCommissionadvanceAPI_commissionadvanceBatchDownloadV1**](ObjectCommissionadvanceAPI.md#ObjectCommissionadvanceAPI_commissionadvanceBatchDownloadV1) | **POST** /1/object/commissionadvance/{pkiCommissionadvanceID}/batchDownload | Download multiples attachments from a Commission advance
[**ObjectCommissionadvanceAPI_commissionadvanceGetAttachmentsV1**](ObjectCommissionadvanceAPI.md#ObjectCommissionadvanceAPI_commissionadvanceGetAttachmentsV1) | **GET** /1/object/commissionadvance/{pkiCommissionadvanceID}/getAttachments | Retrieve Commissionadvance&#39;s attachments
[**ObjectCommissionadvanceAPI_commissionadvanceImportIntoEDMV1**](ObjectCommissionadvanceAPI.md#ObjectCommissionadvanceAPI_commissionadvanceImportIntoEDMV1) | **POST** /1/object/commissionadvance/{pkiCommissionadvanceID}/importIntoEDM | Import attachments into the Commissionadvance


# **ObjectCommissionadvanceAPI_commissionadvanceBatchDownloadV1**
```c
// Download multiples attachments from a Commission advance
//
binary_t** ObjectCommissionadvanceAPI_commissionadvanceBatchDownloadV1(apiClient_t *apiClient, int *pkiCommissionadvanceID, commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCommissionadvanceID** | **int \*** |  | 
**commissionadvance_batch_download_v1_request** | **[commissionadvance_batch_download_v1_request_t](commissionadvance_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCommissionadvanceAPI_commissionadvanceGetAttachmentsV1**
```c
// Retrieve Commissionadvance's attachments
//
commissionadvance_get_attachments_v1_response_t* ObjectCommissionadvanceAPI_commissionadvanceGetAttachmentsV1(apiClient_t *apiClient, int *pkiCommissionadvanceID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCommissionadvanceID** | **int \*** |  | 

### Return type

[commissionadvance_get_attachments_v1_response_t](commissionadvance_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCommissionadvanceAPI_commissionadvanceImportIntoEDMV1**
```c
// Import attachments into the Commissionadvance
//
commissionadvance_import_into_edm_v1_response_t* ObjectCommissionadvanceAPI_commissionadvanceImportIntoEDMV1(apiClient_t *apiClient, int *pkiCommissionadvanceID, commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCommissionadvanceID** | **int \*** |  | 
**commissionadvance_import_into_edm_v1_request** | **[commissionadvance_import_into_edm_v1_request_t](commissionadvance_import_into_edm_v1_request.md) \*** |  | 

### Return type

[commissionadvance_import_into_edm_v1_response_t](commissionadvance_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

