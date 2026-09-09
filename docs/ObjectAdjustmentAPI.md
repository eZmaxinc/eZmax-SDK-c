# ObjectAdjustmentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectAdjustmentAPI_adjustmentBatchDownloadV1**](ObjectAdjustmentAPI.md#ObjectAdjustmentAPI_adjustmentBatchDownloadV1) | **POST** /1/object/adjustment/{pkiAdjustmentID}/batchDownload | Download multiples attachments from an Adjustment
[**ObjectAdjustmentAPI_adjustmentGetAttachmentsV1**](ObjectAdjustmentAPI.md#ObjectAdjustmentAPI_adjustmentGetAttachmentsV1) | **GET** /1/object/adjustment/{pkiAdjustmentID}/getAttachments | Retrieve Adjustment&#39;s attachments
[**ObjectAdjustmentAPI_adjustmentGetCommunicationCountV1**](ObjectAdjustmentAPI.md#ObjectAdjustmentAPI_adjustmentGetCommunicationCountV1) | **GET** /1/object/adjustment/{pkiAdjustmentID}/getCommunicationCount | Retrieve Communication count
[**ObjectAdjustmentAPI_adjustmentGetCommunicationListV1**](ObjectAdjustmentAPI.md#ObjectAdjustmentAPI_adjustmentGetCommunicationListV1) | **GET** /1/object/adjustment/{pkiAdjustmentID}/getCommunicationList | Retrieve Communication list
[**ObjectAdjustmentAPI_adjustmentGetCommunicationrecipientsV1**](ObjectAdjustmentAPI.md#ObjectAdjustmentAPI_adjustmentGetCommunicationrecipientsV1) | **GET** /1/object/adjustment/{pkiAdjustmentID}/getCommunicationrecipients | Retrieve Communication recipients
[**ObjectAdjustmentAPI_adjustmentGetCommunicationsendersV1**](ObjectAdjustmentAPI.md#ObjectAdjustmentAPI_adjustmentGetCommunicationsendersV1) | **GET** /1/object/adjustment/{pkiAdjustmentID}/getCommunicationsenders | Retrieve Communication senders
[**ObjectAdjustmentAPI_adjustmentImportIntoEDMV1**](ObjectAdjustmentAPI.md#ObjectAdjustmentAPI_adjustmentImportIntoEDMV1) | **POST** /1/object/adjustment/{pkiAdjustmentID}/importIntoEDM | Import attachments into the Adjustment


# **ObjectAdjustmentAPI_adjustmentBatchDownloadV1**
```c
// Download multiples attachments from an Adjustment
//
binary_t** ObjectAdjustmentAPI_adjustmentBatchDownloadV1(apiClient_t *apiClient, int *pkiAdjustmentID, adjustment_batch_download_v1_request_t *adjustment_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAdjustmentID** | **int \*** |  | 
**adjustment_batch_download_v1_request** | **[adjustment_batch_download_v1_request_t](adjustment_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAdjustmentAPI_adjustmentGetAttachmentsV1**
```c
// Retrieve Adjustment's attachments
//
adjustment_get_attachments_v1_response_t* ObjectAdjustmentAPI_adjustmentGetAttachmentsV1(apiClient_t *apiClient, int *pkiAdjustmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAdjustmentID** | **int \*** |  | 

### Return type

[adjustment_get_attachments_v1_response_t](adjustment_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAdjustmentAPI_adjustmentGetCommunicationCountV1**
```c
// Retrieve Communication count
//
adjustment_get_communication_count_v1_response_t* ObjectAdjustmentAPI_adjustmentGetCommunicationCountV1(apiClient_t *apiClient, int *pkiAdjustmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAdjustmentID** | **int \*** |  | 

### Return type

[adjustment_get_communication_count_v1_response_t](adjustment_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAdjustmentAPI_adjustmentGetCommunicationListV1**
```c
// Retrieve Communication list
//
adjustment_get_communication_list_v1_response_t* ObjectAdjustmentAPI_adjustmentGetCommunicationListV1(apiClient_t *apiClient, int *pkiAdjustmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAdjustmentID** | **int \*** |  | 

### Return type

[adjustment_get_communication_list_v1_response_t](adjustment_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAdjustmentAPI_adjustmentGetCommunicationrecipientsV1**
```c
// Retrieve Communication recipients
//
adjustment_get_communicationrecipients_v1_response_t* ObjectAdjustmentAPI_adjustmentGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiAdjustmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAdjustmentID** | **int \*** |  | 

### Return type

[adjustment_get_communicationrecipients_v1_response_t](adjustment_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAdjustmentAPI_adjustmentGetCommunicationsendersV1**
```c
// Retrieve Communication senders
//
adjustment_get_communicationsenders_v1_response_t* ObjectAdjustmentAPI_adjustmentGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiAdjustmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAdjustmentID** | **int \*** |  | 

### Return type

[adjustment_get_communicationsenders_v1_response_t](adjustment_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAdjustmentAPI_adjustmentImportIntoEDMV1**
```c
// Import attachments into the Adjustment
//
adjustment_import_into_edm_v1_response_t* ObjectAdjustmentAPI_adjustmentImportIntoEDMV1(apiClient_t *apiClient, int *pkiAdjustmentID, adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAdjustmentID** | **int \*** |  | 
**adjustment_import_into_edm_v1_request** | **[adjustment_import_into_edm_v1_request_t](adjustment_import_into_edm_v1_request.md) \*** |  | 

### Return type

[adjustment_import_into_edm_v1_response_t](adjustment_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

