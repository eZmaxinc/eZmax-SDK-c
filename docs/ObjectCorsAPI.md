# ObjectCorsAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCorsAPI_corsCreateObjectV1**](ObjectCorsAPI.md#ObjectCorsAPI_corsCreateObjectV1) | **POST** /1/object/cors | Create a new Cors
[**ObjectCorsAPI_corsDeleteObjectV1**](ObjectCorsAPI.md#ObjectCorsAPI_corsDeleteObjectV1) | **DELETE** /1/object/cors/{pkiCorsID} | Delete an existing Cors
[**ObjectCorsAPI_corsEditObjectV1**](ObjectCorsAPI.md#ObjectCorsAPI_corsEditObjectV1) | **PUT** /1/object/cors/{pkiCorsID} | Edit an existing Cors
[**ObjectCorsAPI_corsGetObjectV2**](ObjectCorsAPI.md#ObjectCorsAPI_corsGetObjectV2) | **GET** /2/object/cors/{pkiCorsID} | Retrieve an existing Cors


# **ObjectCorsAPI_corsCreateObjectV1**
```c
// Create a new Cors
//
// The endpoint allows to create one or many elements at once.
//
cors_create_object_v1_response_t* ObjectCorsAPI_corsCreateObjectV1(apiClient_t *apiClient, cors_create_object_v1_request_t *cors_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cors_create_object_v1_request** | **[cors_create_object_v1_request_t](cors_create_object_v1_request.md) \*** |  | 

### Return type

[cors_create_object_v1_response_t](cors_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCorsAPI_corsDeleteObjectV1**
```c
// Delete an existing Cors
//
// 
//
cors_delete_object_v1_response_t* ObjectCorsAPI_corsDeleteObjectV1(apiClient_t *apiClient, int *pkiCorsID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCorsID** | **int \*** | The unique ID of the Cors | 

### Return type

[cors_delete_object_v1_response_t](cors_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCorsAPI_corsEditObjectV1**
```c
// Edit an existing Cors
//
// 
//
cors_edit_object_v1_response_t* ObjectCorsAPI_corsEditObjectV1(apiClient_t *apiClient, int *pkiCorsID, cors_edit_object_v1_request_t *cors_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCorsID** | **int \*** | The unique ID of the Cors | 
**cors_edit_object_v1_request** | **[cors_edit_object_v1_request_t](cors_edit_object_v1_request.md) \*** |  | 

### Return type

[cors_edit_object_v1_response_t](cors_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCorsAPI_corsGetObjectV2**
```c
// Retrieve an existing Cors
//
// 
//
cors_get_object_v2_response_t* ObjectCorsAPI_corsGetObjectV2(apiClient_t *apiClient, int *pkiCorsID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCorsID** | **int \*** | The unique ID of the Cors | 

### Return type

[cors_get_object_v2_response_t](cors_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

