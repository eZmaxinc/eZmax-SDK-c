# ObjectDisclosureAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDisclosureAPI_disclosureBatchDownloadV1**](ObjectDisclosureAPI.md#ObjectDisclosureAPI_disclosureBatchDownloadV1) | **POST** /1/object/disclosure/{pkiDisclosureID}/batchDownload | Download multiples attachments from a Disclosure
[**ObjectDisclosureAPI_disclosureGetAttachmentsV1**](ObjectDisclosureAPI.md#ObjectDisclosureAPI_disclosureGetAttachmentsV1) | **GET** /1/object/disclosure/{pkiDisclosureID}/getAttachments | Retrieve Disclosure&#39;s attachments
[**ObjectDisclosureAPI_disclosureImportIntoEDMV1**](ObjectDisclosureAPI.md#ObjectDisclosureAPI_disclosureImportIntoEDMV1) | **POST** /1/object/disclosure/{pkiDisclosureID}/importIntoEDM | Import attachments into the Disclosure


# **ObjectDisclosureAPI_disclosureBatchDownloadV1**
```c
// Download multiples attachments from a Disclosure
//
binary_t** ObjectDisclosureAPI_disclosureBatchDownloadV1(apiClient_t *apiClient, int *pkiDisclosureID, disclosure_batch_download_v1_request_t *disclosure_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDisclosureID** | **int \*** |  | 
**disclosure_batch_download_v1_request** | **[disclosure_batch_download_v1_request_t](disclosure_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDisclosureAPI_disclosureGetAttachmentsV1**
```c
// Retrieve Disclosure's attachments
//
disclosure_get_attachments_v1_response_t* ObjectDisclosureAPI_disclosureGetAttachmentsV1(apiClient_t *apiClient, int *pkiDisclosureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDisclosureID** | **int \*** |  | 

### Return type

[disclosure_get_attachments_v1_response_t](disclosure_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDisclosureAPI_disclosureImportIntoEDMV1**
```c
// Import attachments into the Disclosure
//
disclosure_import_into_edm_v1_response_t* ObjectDisclosureAPI_disclosureImportIntoEDMV1(apiClient_t *apiClient, int *pkiDisclosureID, disclosure_import_into_edm_v1_request_t *disclosure_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDisclosureID** | **int \*** |  | 
**disclosure_import_into_edm_v1_request** | **[disclosure_import_into_edm_v1_request_t](disclosure_import_into_edm_v1_request.md) \*** |  | 

### Return type

[disclosure_import_into_edm_v1_response_t](disclosure_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

