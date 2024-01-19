# ObjectEzsigndiscussionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigndiscussionAPI_ezsigndiscussionCreateObjectV1**](ObjectEzsigndiscussionAPI.md#ObjectEzsigndiscussionAPI_ezsigndiscussionCreateObjectV1) | **POST** /1/object/ezsigndiscussion | Create a new Ezsigndiscussion
[**ObjectEzsigndiscussionAPI_ezsigndiscussionDeleteObjectV1**](ObjectEzsigndiscussionAPI.md#ObjectEzsigndiscussionAPI_ezsigndiscussionDeleteObjectV1) | **DELETE** /1/object/ezsigndiscussion/{pkiEzsigndiscussionID} | Delete an existing Ezsigndiscussion
[**ObjectEzsigndiscussionAPI_ezsigndiscussionGetObjectV2**](ObjectEzsigndiscussionAPI.md#ObjectEzsigndiscussionAPI_ezsigndiscussionGetObjectV2) | **GET** /2/object/ezsigndiscussion/{pkiEzsigndiscussionID} | Retrieve an existing Ezsigndiscussion


# **ObjectEzsigndiscussionAPI_ezsigndiscussionCreateObjectV1**
```c
// Create a new Ezsigndiscussion
//
// The endpoint allows to create one or many elements at once.
//
ezsigndiscussion_create_object_v1_response_t* ObjectEzsigndiscussionAPI_ezsigndiscussionCreateObjectV1(apiClient_t *apiClient, ezsigndiscussion_create_object_v1_request_t * ezsigndiscussion_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigndiscussion_create_object_v1_request** | **[ezsigndiscussion_create_object_v1_request_t](ezsigndiscussion_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigndiscussion_create_object_v1_response_t](ezsigndiscussion_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndiscussionAPI_ezsigndiscussionDeleteObjectV1**
```c
// Delete an existing Ezsigndiscussion
//
// 
//
ezsigndiscussion_delete_object_v1_response_t* ObjectEzsigndiscussionAPI_ezsigndiscussionDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigndiscussionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndiscussionID** | **int \*** | The unique ID of the Ezsigndiscussion | 

### Return type

[ezsigndiscussion_delete_object_v1_response_t](ezsigndiscussion_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndiscussionAPI_ezsigndiscussionGetObjectV2**
```c
// Retrieve an existing Ezsigndiscussion
//
// 
//
ezsigndiscussion_get_object_v2_response_t* ObjectEzsigndiscussionAPI_ezsigndiscussionGetObjectV2(apiClient_t *apiClient, int pkiEzsigndiscussionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndiscussionID** | **int \*** | The unique ID of the Ezsigndiscussion | 

### Return type

[ezsigndiscussion_get_object_v2_response_t](ezsigndiscussion_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

