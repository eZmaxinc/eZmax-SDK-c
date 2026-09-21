# ObjectFolderAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectFolderAPI_folderBatchDownloadV1**](ObjectFolderAPI.md#ObjectFolderAPI_folderBatchDownloadV1) | **POST** /1/object/folder/{pkiFolderID}/batchDownload | Download multiples attachments from an Folder
[**ObjectFolderAPI_folderGetAttachmentsV1**](ObjectFolderAPI.md#ObjectFolderAPI_folderGetAttachmentsV1) | **GET** /1/object/folder/{pkiFolderID}/getAttachments | Retrieve Folder&#39;s attachments
[**ObjectFolderAPI_folderGetCommunicationCountV1**](ObjectFolderAPI.md#ObjectFolderAPI_folderGetCommunicationCountV1) | **GET** /1/object/folder/{pkiFolderID}/getCommunicationCount | Retrieve Communication count
[**ObjectFolderAPI_folderGetCommunicationListV1**](ObjectFolderAPI.md#ObjectFolderAPI_folderGetCommunicationListV1) | **GET** /1/object/folder/{pkiFolderID}/getCommunicationList | Retrieve Communication list
[**ObjectFolderAPI_folderGetCommunicationrecipientsV1**](ObjectFolderAPI.md#ObjectFolderAPI_folderGetCommunicationrecipientsV1) | **GET** /1/object/folder/{pkiFolderID}/getCommunicationrecipients | Retrieve Communication recipients
[**ObjectFolderAPI_folderGetCommunicationsendersV1**](ObjectFolderAPI.md#ObjectFolderAPI_folderGetCommunicationsendersV1) | **GET** /1/object/folder/{pkiFolderID}/getCommunicationsenders | Retrieve Communication senders
[**ObjectFolderAPI_folderImportIntoEDMV1**](ObjectFolderAPI.md#ObjectFolderAPI_folderImportIntoEDMV1) | **POST** /1/object/folder/{pkiFolderID}/importIntoEDM | Import attachments into the Folder


# **ObjectFolderAPI_folderBatchDownloadV1**
```c
// Download multiples attachments from an Folder
//
binary_t** ObjectFolderAPI_folderBatchDownloadV1(apiClient_t *apiClient, int *pkiFolderID, folder_batch_download_v1_request_t *folder_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiFolderID** | **int \*** |  | 
**folder_batch_download_v1_request** | **[folder_batch_download_v1_request_t](folder_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectFolderAPI_folderGetAttachmentsV1**
```c
// Retrieve Folder's attachments
//
folder_get_attachments_v1_response_t* ObjectFolderAPI_folderGetAttachmentsV1(apiClient_t *apiClient, int *pkiFolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiFolderID** | **int \*** |  | 

### Return type

[folder_get_attachments_v1_response_t](folder_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectFolderAPI_folderGetCommunicationCountV1**
```c
// Retrieve Communication count
//
folder_get_communication_count_v1_response_t* ObjectFolderAPI_folderGetCommunicationCountV1(apiClient_t *apiClient, int *pkiFolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiFolderID** | **int \*** |  | 

### Return type

[folder_get_communication_count_v1_response_t](folder_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectFolderAPI_folderGetCommunicationListV1**
```c
// Retrieve Communication list
//
folder_get_communication_list_v1_response_t* ObjectFolderAPI_folderGetCommunicationListV1(apiClient_t *apiClient, int *pkiFolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiFolderID** | **int \*** |  | 

### Return type

[folder_get_communication_list_v1_response_t](folder_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectFolderAPI_folderGetCommunicationrecipientsV1**
```c
// Retrieve Communication recipients
//
folder_get_communicationrecipients_v1_response_t* ObjectFolderAPI_folderGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiFolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiFolderID** | **int \*** |  | 

### Return type

[folder_get_communicationrecipients_v1_response_t](folder_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectFolderAPI_folderGetCommunicationsendersV1**
```c
// Retrieve Communication senders
//
folder_get_communicationsenders_v1_response_t* ObjectFolderAPI_folderGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiFolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiFolderID** | **int \*** |  | 

### Return type

[folder_get_communicationsenders_v1_response_t](folder_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectFolderAPI_folderImportIntoEDMV1**
```c
// Import attachments into the Folder
//
folder_import_into_edm_v1_response_t* ObjectFolderAPI_folderImportIntoEDMV1(apiClient_t *apiClient, int *pkiFolderID, folder_import_into_edm_v1_request_t *folder_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiFolderID** | **int \*** |  | 
**folder_import_into_edm_v1_request** | **[folder_import_into_edm_v1_request_t](folder_import_into_edm_v1_request.md) \*** |  | 

### Return type

[folder_import_into_edm_v1_response_t](folder_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

