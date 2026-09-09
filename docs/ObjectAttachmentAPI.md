# ObjectAttachmentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectAttachmentAPI_attachmentDownloadV1**](ObjectAttachmentAPI.md#ObjectAttachmentAPI_attachmentDownloadV1) | **GET** /1/object/attachment/{pkiAttachmentID}/download | Retrieve the content
[**ObjectAttachmentAPI_attachmentGetAttachmentlogsV1**](ObjectAttachmentAPI.md#ObjectAttachmentAPI_attachmentGetAttachmentlogsV1) | **GET** /1/object/attachment/{pkiAttachmentID}/getAttachmentlogs | Retrieve the Attachmentlogs
[**ObjectAttachmentAPI_attachmentRenameV1**](ObjectAttachmentAPI.md#ObjectAttachmentAPI_attachmentRenameV1) | **POST** /1/object/attachment/{pkiAttachmentID}/rename | Rename an Attachment


# **ObjectAttachmentAPI_attachmentDownloadV1**
```c
// Retrieve the content
//
// Using this endpoint, you can retrieve the content of an attachment.
//
void ObjectAttachmentAPI_attachmentDownloadV1(apiClient_t *apiClient, int *pkiAttachmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAttachmentID** | **int \*** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization), [Presigned](../README.md#Presigned)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAttachmentAPI_attachmentGetAttachmentlogsV1**
```c
// Retrieve the Attachmentlogs
//
// Using this endpoint, you can retrieve the Attachmentlogs of an attachment.
//
attachment_get_attachmentlogs_v1_response_t* ObjectAttachmentAPI_attachmentGetAttachmentlogsV1(apiClient_t *apiClient, int *pkiAttachmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAttachmentID** | **int \*** |  | 

### Return type

[attachment_get_attachmentlogs_v1_response_t](attachment_get_attachmentlogs_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAttachmentAPI_attachmentRenameV1**
```c
// Rename an Attachment
//
// The endpoint allows to change the attachment's file name and category.
//
attachment_rename_v1_response_t* ObjectAttachmentAPI_attachmentRenameV1(apiClient_t *apiClient, int *pkiAttachmentID, attachment_rename_v1_request_t *attachment_rename_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAttachmentID** | **int \*** |  | 
**attachment_rename_v1_request** | **[attachment_rename_v1_request_t](attachment_rename_v1_request.md) \*** |  | 

### Return type

[attachment_rename_v1_response_t](attachment_rename_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

