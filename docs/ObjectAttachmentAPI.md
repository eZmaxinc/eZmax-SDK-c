# ObjectAttachmentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectAttachmentAPI_attachmentDownloadV1**](ObjectAttachmentAPI.md#ObjectAttachmentAPI_attachmentDownloadV1) | **GET** /1/object/attachment/{pkiAttachmentID}/download | Retrieve the content
[**ObjectAttachmentAPI_attachmentGetAttachmentlogsV1**](ObjectAttachmentAPI.md#ObjectAttachmentAPI_attachmentGetAttachmentlogsV1) | **GET** /1/object/attachment/{pkiAttachmentID}/getAttachmentlogs | Retrieve the Attachmentlogs
[**ObjectAttachmentAPI_attachmentGetDownloadUrlV1**](ObjectAttachmentAPI.md#ObjectAttachmentAPI_attachmentGetDownloadUrlV1) | **GET** /1/object/attachment/{pkiAttachmentID}/getDownloadUrl | Retrieve a URL to download attachments.


# **ObjectAttachmentAPI_attachmentDownloadV1**
```c
// Retrieve the content
//
// Using this endpoint, you can retrieve the content of an attachment.
//
void ObjectAttachmentAPI_attachmentDownloadV1(apiClient_t *apiClient, int pkiAttachmentID);
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
attachment_get_attachmentlogs_v1_response_t* ObjectAttachmentAPI_attachmentGetAttachmentlogsV1(apiClient_t *apiClient, int pkiAttachmentID);
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

# **ObjectAttachmentAPI_attachmentGetDownloadUrlV1**
```c
// Retrieve a URL to download attachments.
//
// This endpoint returns an URL to download the attachment.  These links will expire after 5 minutes so the download of the file should be made soon after retrieving the link.
//
attachment_get_download_url_v1_response_t* ObjectAttachmentAPI_attachmentGetDownloadUrlV1(apiClient_t *apiClient, int pkiAttachmentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAttachmentID** | **int \*** |  | 

### Return type

[attachment_get_download_url_v1_response_t](attachment_get_download_url_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

