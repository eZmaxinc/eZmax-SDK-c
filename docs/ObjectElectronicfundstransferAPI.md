# ObjectElectronicfundstransferAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectElectronicfundstransferAPI_electronicfundstransferBatchDownloadV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferBatchDownloadV1) | **POST** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/batchDownload | Download multiples attachments from an Electronicfundstransfer
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetAttachmentsV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetAttachmentsV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getAttachments | Retrieve Electronicfundstransfer&#39;s attachments
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationCount | Retrieve Communication count
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationList | Retrieve Communication list
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationrecipients | Retrieve Electronicfundstransfer&#39;s Communicationrecipient
[**ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1) | **GET** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationsenders | Retrieve Electronicfundstransfer&#39;s Communicationsender
[**ObjectElectronicfundstransferAPI_electronicfundstransferImportIntoEDMV1**](ObjectElectronicfundstransferAPI.md#ObjectElectronicfundstransferAPI_electronicfundstransferImportIntoEDMV1) | **POST** /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/importIntoEDM | Import attachments into the Electronicfundstransfer


# **ObjectElectronicfundstransferAPI_electronicfundstransferBatchDownloadV1**
```c
// Download multiples attachments from an Electronicfundstransfer
//
binary_t** ObjectElectronicfundstransferAPI_electronicfundstransferBatchDownloadV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID, electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 
**electronicfundstransfer_batch_download_v1_request** | **[electronicfundstransfer_batch_download_v1_request_t](electronicfundstransfer_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetAttachmentsV1**
```c
// Retrieve Electronicfundstransfer's attachments
//
electronicfundstransfer_get_attachments_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetAttachmentsV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_attachments_v1_response_t](electronicfundstransfer_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
electronicfundstransfer_get_communication_count_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communication_count_v1_response_t](electronicfundstransfer_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
electronicfundstransfer_get_communication_list_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communication_list_v1_response_t](electronicfundstransfer_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1**
```c
// Retrieve Electronicfundstransfer's Communicationrecipient
//
// 
//
electronicfundstransfer_get_communicationrecipients_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communicationrecipients_v1_response_t](electronicfundstransfer_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1**
```c
// Retrieve Electronicfundstransfer's Communicationsender
//
// 
//
electronicfundstransfer_get_communicationsenders_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 

### Return type

[electronicfundstransfer_get_communicationsenders_v1_response_t](electronicfundstransfer_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectElectronicfundstransferAPI_electronicfundstransferImportIntoEDMV1**
```c
// Import attachments into the Electronicfundstransfer
//
// 
//
electronicfundstransfer_import_into_edm_v1_response_t* ObjectElectronicfundstransferAPI_electronicfundstransferImportIntoEDMV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID, electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiElectronicfundstransferID** | **int \*** |  | 
**electronicfundstransfer_import_into_edm_v1_request** | **[electronicfundstransfer_import_into_edm_v1_request_t](electronicfundstransfer_import_into_edm_v1_request.md) \*** |  | 

### Return type

[electronicfundstransfer_import_into_edm_v1_response_t](electronicfundstransfer_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

