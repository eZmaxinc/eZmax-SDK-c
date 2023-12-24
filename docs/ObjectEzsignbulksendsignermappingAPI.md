# ObjectEzsignbulksendsignermappingAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingCreateObjectV1**](ObjectEzsignbulksendsignermappingAPI.md#ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingCreateObjectV1) | **POST** /1/object/ezsignbulksendsignermapping | Create a new Ezsignbulksendsignermapping
[**ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingDeleteObjectV1**](ObjectEzsignbulksendsignermappingAPI.md#ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingDeleteObjectV1) | **DELETE** /1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID} | Delete an existing Ezsignbulksendsignermapping
[**ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingGetObjectV2**](ObjectEzsignbulksendsignermappingAPI.md#ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingGetObjectV2) | **GET** /2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID} | Retrieve an existing Ezsignbulksendsignermapping


# **ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingCreateObjectV1**
```c
// Create a new Ezsignbulksendsignermapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksendsignermapping_create_object_v1_response_t* ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksendsignermapping_create_object_v1_request_t * ezsignbulksendsignermapping_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignbulksendsignermapping_create_object_v1_request** | **[ezsignbulksendsignermapping_create_object_v1_request_t](ezsignbulksendsignermapping_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignbulksendsignermapping_create_object_v1_response_t](ezsignbulksendsignermapping_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingDeleteObjectV1**
```c
// Delete an existing Ezsignbulksendsignermapping
//
// 
//
ezsignbulksendsignermapping_delete_object_v1_response_t* ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendsignermappingID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendsignermappingID** | **int \*** |  | 

### Return type

[ezsignbulksendsignermapping_delete_object_v1_response_t](ezsignbulksendsignermapping_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingGetObjectV2**
```c
// Retrieve an existing Ezsignbulksendsignermapping
//
// 
//
ezsignbulksendsignermapping_get_object_v2_response_t* ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingGetObjectV2(apiClient_t *apiClient, int pkiEzsignbulksendsignermappingID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendsignermappingID** | **int \*** |  | 

### Return type

[ezsignbulksendsignermapping_get_object_v2_response_t](ezsignbulksendsignermapping_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

