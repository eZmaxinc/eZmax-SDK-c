# ObjectPurchaseAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectPurchaseAPI_purchaseBatchDownloadV1**](ObjectPurchaseAPI.md#ObjectPurchaseAPI_purchaseBatchDownloadV1) | **POST** /1/object/purchase/{pkiPurchaseID}/batchDownload | Download multiples attachments from a Purchase
[**ObjectPurchaseAPI_purchaseGetAttachmentsV1**](ObjectPurchaseAPI.md#ObjectPurchaseAPI_purchaseGetAttachmentsV1) | **GET** /1/object/purchase/{pkiPurchaseID}/getAttachments | Retrieve Purchase&#39;s attachments
[**ObjectPurchaseAPI_purchaseImportIntoEDMV1**](ObjectPurchaseAPI.md#ObjectPurchaseAPI_purchaseImportIntoEDMV1) | **POST** /1/object/purchase/{pkiPurchaseID}/importIntoEDM | Import attachments into the Purchase


# **ObjectPurchaseAPI_purchaseBatchDownloadV1**
```c
// Download multiples attachments from a Purchase
//
binary_t** ObjectPurchaseAPI_purchaseBatchDownloadV1(apiClient_t *apiClient, int *pkiPurchaseID, purchase_batch_download_v1_request_t *purchase_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPurchaseID** | **int \*** |  | 
**purchase_batch_download_v1_request** | **[purchase_batch_download_v1_request_t](purchase_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPurchaseAPI_purchaseGetAttachmentsV1**
```c
// Retrieve Purchase's attachments
//
purchase_get_attachments_v1_response_t* ObjectPurchaseAPI_purchaseGetAttachmentsV1(apiClient_t *apiClient, int *pkiPurchaseID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPurchaseID** | **int \*** |  | 

### Return type

[purchase_get_attachments_v1_response_t](purchase_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPurchaseAPI_purchaseImportIntoEDMV1**
```c
// Import attachments into the Purchase
//
purchase_import_into_edm_v1_response_t* ObjectPurchaseAPI_purchaseImportIntoEDMV1(apiClient_t *apiClient, int *pkiPurchaseID, purchase_import_into_edm_v1_request_t *purchase_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPurchaseID** | **int \*** |  | 
**purchase_import_into_edm_v1_request** | **[purchase_import_into_edm_v1_request_t](purchase_import_into_edm_v1_request.md) \*** |  | 

### Return type

[purchase_import_into_edm_v1_response_t](purchase_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

