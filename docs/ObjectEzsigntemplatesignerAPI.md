# ObjectEzsigntemplatesignerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerCreateObjectV1**](ObjectEzsigntemplatesignerAPI.md#ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerCreateObjectV1) | **POST** /1/object/ezsigntemplatesigner | Create a new Ezsigntemplatesigner
[**ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerDeleteObjectV1**](ObjectEzsigntemplatesignerAPI.md#ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID} | Delete an existing Ezsigntemplatesigner
[**ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerEditObjectV1**](ObjectEzsigntemplatesignerAPI.md#ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerEditObjectV1) | **PUT** /1/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID} | Edit an existing Ezsigntemplatesigner
[**ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerGetObjectV2**](ObjectEzsigntemplatesignerAPI.md#ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerGetObjectV2) | **GET** /2/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID} | Retrieve an existing Ezsigntemplatesigner


# **ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerCreateObjectV1**
```c
// Create a new Ezsigntemplatesigner
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesigner_create_object_v1_response_t* ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerCreateObjectV1(apiClient_t *apiClient, ezsigntemplatesigner_create_object_v1_request_t * ezsigntemplatesigner_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatesigner_create_object_v1_request** | **[ezsigntemplatesigner_create_object_v1_request_t](ezsigntemplatesigner_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatesigner_create_object_v1_response_t](ezsigntemplatesigner_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_delete_object_v1_response_t* ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignerID** | **int** |  | 

### Return type

[ezsigntemplatesigner_delete_object_v1_response_t](ezsigntemplatesigner_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerEditObjectV1**
```c
// Edit an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_edit_object_v1_response_t* ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignerID, ezsigntemplatesigner_edit_object_v1_request_t * ezsigntemplatesigner_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignerID** | **int** |  | 
**ezsigntemplatesigner_edit_object_v1_request** | **[ezsigntemplatesigner_edit_object_v1_request_t](ezsigntemplatesigner_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatesigner_edit_object_v1_response_t](ezsigntemplatesigner_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerGetObjectV2**
```c
// Retrieve an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_get_object_v2_response_t* ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplatesignerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignerID** | **int** |  | 

### Return type

[ezsigntemplatesigner_get_object_v2_response_t](ezsigntemplatesigner_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

