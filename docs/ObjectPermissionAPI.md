# ObjectPermissionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectPermissionAPI_permissionCreateObjectV1**](ObjectPermissionAPI.md#ObjectPermissionAPI_permissionCreateObjectV1) | **POST** /1/object/permission | Create a new Permission
[**ObjectPermissionAPI_permissionDeleteObjectV1**](ObjectPermissionAPI.md#ObjectPermissionAPI_permissionDeleteObjectV1) | **DELETE** /1/object/permission/{pkiPermissionID} | Delete an existing Permission
[**ObjectPermissionAPI_permissionEditObjectV1**](ObjectPermissionAPI.md#ObjectPermissionAPI_permissionEditObjectV1) | **PUT** /1/object/permission/{pkiPermissionID} | Edit an existing Permission
[**ObjectPermissionAPI_permissionGetObjectV2**](ObjectPermissionAPI.md#ObjectPermissionAPI_permissionGetObjectV2) | **GET** /2/object/permission/{pkiPermissionID} | Retrieve an existing Permission


# **ObjectPermissionAPI_permissionCreateObjectV1**
```c
// Create a new Permission
//
// The endpoint allows to create one or many elements at once.
//
permission_create_object_v1_response_t* ObjectPermissionAPI_permissionCreateObjectV1(apiClient_t *apiClient, permission_create_object_v1_request_t *permission_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**permission_create_object_v1_request** | **[permission_create_object_v1_request_t](permission_create_object_v1_request.md) \*** |  | 

### Return type

[permission_create_object_v1_response_t](permission_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPermissionAPI_permissionDeleteObjectV1**
```c
// Delete an existing Permission
//
// 
//
common_response_t* ObjectPermissionAPI_permissionDeleteObjectV1(apiClient_t *apiClient, int *pkiPermissionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPermissionID** | **int \*** | The unique ID of the Permission | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPermissionAPI_permissionEditObjectV1**
```c
// Edit an existing Permission
//
// 
//
common_response_t* ObjectPermissionAPI_permissionEditObjectV1(apiClient_t *apiClient, int *pkiPermissionID, permission_edit_object_v1_request_t *permission_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPermissionID** | **int \*** | The unique ID of the Permission | 
**permission_edit_object_v1_request** | **[permission_edit_object_v1_request_t](permission_edit_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectPermissionAPI_permissionGetObjectV2**
```c
// Retrieve an existing Permission
//
// 
//
permission_get_object_v2_response_t* ObjectPermissionAPI_permissionGetObjectV2(apiClient_t *apiClient, int *pkiPermissionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiPermissionID** | **int \*** | The unique ID of the Permission | 

### Return type

[permission_get_object_v2_response_t](permission_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

