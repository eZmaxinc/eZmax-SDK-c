# ObjectEzsignsignatureAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1) | **POST** /1/object/ezsignsignature | Create a new Ezsignsignature
[**ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1) | **DELETE** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Delete an existing Ezsignsignature
[**ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Retrieve an existing Ezsignsignature


# **ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1**
```c
// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignsignature_create_object_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1(apiClient_t *apiClient, list_t * ezsignsignature_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignsignature_create_object_v1_request** | **[list_t](ezsignsignature_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignsignature_create_object_v1_response_t](ezsignsignature_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1**
```c
// Delete an existing Ezsignsignature
//
ezsignsignature_delete_object_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignatureID** | **int** |  | 

### Return type

[ezsignsignature_delete_object_v1_response_t](ezsignsignature_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1**
```c
// Retrieve an existing Ezsignsignature
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsignsignature_get_object_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignatureID** | **int** |  | 

### Return type

[ezsignsignature_get_object_v1_response_t](ezsignsignature_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

