# ObjectEzsignbulksenddocumentmappingAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingCreateObjectV1**](ObjectEzsignbulksenddocumentmappingAPI.md#ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingCreateObjectV1) | **POST** /1/object/ezsignbulksenddocumentmapping | Create a new Ezsignbulksenddocumentmapping
[**ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingDeleteObjectV1**](ObjectEzsignbulksenddocumentmappingAPI.md#ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingDeleteObjectV1) | **DELETE** /1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID} | Delete an existing Ezsignbulksenddocumentmapping
[**ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV2**](ObjectEzsignbulksenddocumentmappingAPI.md#ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV2) | **GET** /2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID} | Retrieve an existing Ezsignbulksenddocumentmapping


# **ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingCreateObjectV1**
```c
// Create a new Ezsignbulksenddocumentmapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksenddocumentmapping_create_object_v1_response_t* ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignbulksenddocumentmapping_create_object_v1_request** | **[ezsignbulksenddocumentmapping_create_object_v1_request_t](ezsignbulksenddocumentmapping_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignbulksenddocumentmapping_create_object_v1_response_t](ezsignbulksenddocumentmapping_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingDeleteObjectV1**
```c
// Delete an existing Ezsignbulksenddocumentmapping
//
// 
//
common_response_t* ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignbulksenddocumentmappingID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksenddocumentmappingID** | **int \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV2**
```c
// Retrieve an existing Ezsignbulksenddocumentmapping
//
// 
//
ezsignbulksenddocumentmapping_get_object_v2_response_t* ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV2(apiClient_t *apiClient, int *pkiEzsignbulksenddocumentmappingID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksenddocumentmappingID** | **int \*** |  | 

### Return type

[ezsignbulksenddocumentmapping_get_object_v2_response_t](ezsignbulksenddocumentmapping_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

