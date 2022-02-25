# ObjectFranchisereferalincomeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1**](ObjectFranchisereferalincomeAPI.md#ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1) | **POST** /1/object/franchisereferalincome | Create a new Franchisereferalincome
[**ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV2**](ObjectFranchisereferalincomeAPI.md#ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV2) | **POST** /2/object/franchisereferalincome | Create a new Franchisereferalincome


# **ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1**
```c
// Create a new Franchisereferalincome
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
franchisereferalincome_create_object_v1_response_t* ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1(apiClient_t *apiClient, list_t * franchisereferalincome_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**franchisereferalincome_create_object_v1_request** | **[list_t](franchisereferalincome_create_object_v1_request.md) \*** |  | 

### Return type

[franchisereferalincome_create_object_v1_response_t](franchisereferalincome_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV2**
```c
// Create a new Franchisereferalincome
//
// The endpoint allows to create one or many elements at once.
//
franchisereferalincome_create_object_v2_response_t* ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV2(apiClient_t *apiClient, franchisereferalincome_create_object_v2_request_t * franchisereferalincome_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**franchisereferalincome_create_object_v2_request** | **[franchisereferalincome_create_object_v2_request_t](franchisereferalincome_create_object_v2_request.md) \*** |  | 

### Return type

[franchisereferalincome_create_object_v2_response_t](franchisereferalincome_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

