# ObjectEzsigntemplatepackagesignerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerCreateObjectV1**](ObjectEzsigntemplatepackagesignerAPI.md#ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerCreateObjectV1) | **POST** /1/object/ezsigntemplatepackagesigner | Create a new Ezsigntemplatepackagesigner
[**ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerDeleteObjectV1**](ObjectEzsigntemplatepackagesignerAPI.md#ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID} | Delete an existing Ezsigntemplatepackagesigner
[**ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerEditObjectV1**](ObjectEzsigntemplatepackagesignerAPI.md#ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerEditObjectV1) | **PUT** /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID} | Edit an existing Ezsigntemplatepackagesigner
[**ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerGetObjectV1**](ObjectEzsigntemplatepackagesignerAPI.md#ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerGetObjectV1) | **GET** /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID} | Retrieve an existing Ezsigntemplatepackagesigner


# **ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerCreateObjectV1**
```c
// Create a new Ezsigntemplatepackagesigner
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagesigner_create_object_v1_response_t* ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagesigner_create_object_v1_request_t * ezsigntemplatepackagesigner_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatepackagesigner_create_object_v1_request** | **[ezsigntemplatepackagesigner_create_object_v1_request_t](ezsigntemplatepackagesigner_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepackagesigner_create_object_v1_response_t](ezsigntemplatepackagesigner_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_delete_object_v1_response_t* ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatepackagesignerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackagesignerID** | **int** |  | 

### Return type

[ezsigntemplatepackagesigner_delete_object_v1_response_t](ezsigntemplatepackagesigner_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerEditObjectV1**
```c
// Edit an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_edit_object_v1_response_t* ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatepackagesignerID, ezsigntemplatepackagesigner_edit_object_v1_request_t * ezsigntemplatepackagesigner_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackagesignerID** | **int** |  | 
**ezsigntemplatepackagesigner_edit_object_v1_request** | **[ezsigntemplatepackagesigner_edit_object_v1_request_t](ezsigntemplatepackagesigner_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepackagesigner_edit_object_v1_response_t](ezsigntemplatepackagesigner_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerGetObjectV1**
```c
// Retrieve an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_get_object_v1_response_t* ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerGetObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatepackagesignerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackagesignerID** | **int** |  | 

### Return type

[ezsigntemplatepackagesigner_get_object_v1_response_t](ezsigntemplatepackagesigner_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

