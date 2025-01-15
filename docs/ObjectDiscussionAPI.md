# ObjectDiscussionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDiscussionAPI_discussionCreateObjectV1**](ObjectDiscussionAPI.md#ObjectDiscussionAPI_discussionCreateObjectV1) | **POST** /1/object/discussion | Create a new Discussion
[**ObjectDiscussionAPI_discussionDeleteObjectV1**](ObjectDiscussionAPI.md#ObjectDiscussionAPI_discussionDeleteObjectV1) | **DELETE** /1/object/discussion/{pkiDiscussionID} | Delete an existing Discussion
[**ObjectDiscussionAPI_discussionGetObjectV2**](ObjectDiscussionAPI.md#ObjectDiscussionAPI_discussionGetObjectV2) | **GET** /2/object/discussion/{pkiDiscussionID} | Retrieve an existing Discussion
[**ObjectDiscussionAPI_discussionPatchObjectV1**](ObjectDiscussionAPI.md#ObjectDiscussionAPI_discussionPatchObjectV1) | **PATCH** /1/object/discussion/{pkiDiscussionID} | Patch an existing Discussion
[**ObjectDiscussionAPI_discussionUpdateDiscussionreadstatusV1**](ObjectDiscussionAPI.md#ObjectDiscussionAPI_discussionUpdateDiscussionreadstatusV1) | **POST** /1/object/discussion/{pkiDiscussionID}/updateDiscussionreadstatus | Update the read status of the discussion


# **ObjectDiscussionAPI_discussionCreateObjectV1**
```c
// Create a new Discussion
//
// The endpoint allows to create one or many elements at once.
//
discussion_create_object_v1_response_t* ObjectDiscussionAPI_discussionCreateObjectV1(apiClient_t *apiClient, discussion_create_object_v1_request_t *discussion_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**discussion_create_object_v1_request** | **[discussion_create_object_v1_request_t](discussion_create_object_v1_request.md) \*** |  | 

### Return type

[discussion_create_object_v1_response_t](discussion_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDiscussionAPI_discussionDeleteObjectV1**
```c
// Delete an existing Discussion
//
// 
//
common_response_t* ObjectDiscussionAPI_discussionDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDiscussionID** | **int \*** | The unique ID of the Discussion | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDiscussionAPI_discussionGetObjectV2**
```c
// Retrieve an existing Discussion
//
// 
//
discussion_get_object_v2_response_t* ObjectDiscussionAPI_discussionGetObjectV2(apiClient_t *apiClient, int *pkiDiscussionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDiscussionID** | **int \*** | The unique ID of the Discussion | 

### Return type

[discussion_get_object_v2_response_t](discussion_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDiscussionAPI_discussionPatchObjectV1**
```c
// Patch an existing Discussion
//
// 
//
common_response_t* ObjectDiscussionAPI_discussionPatchObjectV1(apiClient_t *apiClient, int *pkiDiscussionID, discussion_patch_object_v1_request_t *discussion_patch_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDiscussionID** | **int \*** | The unique ID of the Discussion | 
**discussion_patch_object_v1_request** | **[discussion_patch_object_v1_request_t](discussion_patch_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDiscussionAPI_discussionUpdateDiscussionreadstatusV1**
```c
// Update the read status of the discussion
//
common_response_t* ObjectDiscussionAPI_discussionUpdateDiscussionreadstatusV1(apiClient_t *apiClient, int *pkiDiscussionID, discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDiscussionID** | **int \*** |  | 
**discussion_update_discussionreadstatus_v1_request** | **[discussion_update_discussionreadstatus_v1_request_t](discussion_update_discussionreadstatus_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

