# ObjectOfficetaxreportAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1) | **POST** /1/object/officetaxreport/{pkiOfficetaxreportID}/batchDownload | Download multiples attachments from an Officetaxreport
[**ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1) | **GET** /1/object/officetaxreport/{pkiOfficetaxreportID}/getAttachments | Retrieve Officetaxreport&#39;s attachments
[**ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1**](ObjectOfficetaxreportAPI.md#ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1) | **POST** /1/object/officetaxreport/{pkiOfficetaxreportID}/importIntoEDM | Import attachments into the Officetaxreport


# **ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1**
```c
// Download multiples attachments from an Officetaxreport
//
binary_t** ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 
**officetaxreport_batch_download_v1_request** | **[officetaxreport_batch_download_v1_request_t](officetaxreport_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1**
```c
// Retrieve Officetaxreport's attachments
//
officetaxreport_get_attachments_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 

### Return type

[officetaxreport_get_attachments_v1_response_t](officetaxreport_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1**
```c
// Import attachments into the Officetaxreport
//
officetaxreport_import_into_edm_v1_response_t* ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiOfficetaxreportID** | **int \*** |  | 
**officetaxreport_import_into_edm_v1_request** | **[officetaxreport_import_into_edm_v1_request_t](officetaxreport_import_into_edm_v1_request.md) \*** |  | 

### Return type

[officetaxreport_import_into_edm_v1_response_t](officetaxreport_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

