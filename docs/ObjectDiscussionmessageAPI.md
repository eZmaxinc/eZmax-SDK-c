# ObjectDiscussionmessageAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDiscussionmessageAPI_discussionmessageCreateObjectV1**](ObjectDiscussionmessageAPI.md#ObjectDiscussionmessageAPI_discussionmessageCreateObjectV1) | **POST** /1/object/discussionmessage | Create a new Discussionmessage
[**ObjectDiscussionmessageAPI_discussionmessageDeleteObjectV1**](ObjectDiscussionmessageAPI.md#ObjectDiscussionmessageAPI_discussionmessageDeleteObjectV1) | **DELETE** /1/object/discussionmessage/{pkiDiscussionmessageID} | Delete an existing Discussionmessage
[**ObjectDiscussionmessageAPI_discussionmessagePatchObjectV1**](ObjectDiscussionmessageAPI.md#ObjectDiscussionmessageAPI_discussionmessagePatchObjectV1) | **PATCH** /1/object/discussionmessage/{pkiDiscussionmessageID} | Patch an existing Discussionmessage


# **ObjectDiscussionmessageAPI_discussionmessageCreateObjectV1**
```c
// Create a new Discussionmessage
//
// The endpoint allows to create one or many elements at once.
//
discussionmessage_create_object_v1_response_t* ObjectDiscussionmessageAPI_discussionmessageCreateObjectV1(apiClient_t *apiClient, discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**discussionmessage_create_object_v1_request** | **[discussionmessage_create_object_v1_request_t](discussionmessage_create_object_v1_request.md) \*** |  | 

### Return type

[discussionmessage_create_object_v1_response_t](discussionmessage_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDiscussionmessageAPI_discussionmessageDeleteObjectV1**
```c
// Delete an existing Discussionmessage
//
// 
//
common_response_t* ObjectDiscussionmessageAPI_discussionmessageDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDiscussionmessageID** | **int \*** | The unique ID of the Discussionmessage | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDiscussionmessageAPI_discussionmessagePatchObjectV1**
```c
// Patch an existing Discussionmessage
//
// 
//
common_response_t* ObjectDiscussionmessageAPI_discussionmessagePatchObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID, discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDiscussionmessageID** | **int \*** | The unique ID of the Discussionmessage | 
**discussionmessage_patch_object_v1_request** | **[discussionmessage_patch_object_v1_request_t](discussionmessage_patch_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

