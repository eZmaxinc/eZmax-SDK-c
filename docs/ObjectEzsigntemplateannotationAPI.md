# ObjectEzsigntemplateannotationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationCreateObjectV1**](ObjectEzsigntemplateannotationAPI.md#ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationCreateObjectV1) | **POST** /1/object/ezsigntemplateannotation | Create a new Ezsigntemplateannotation
[**ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationDeleteObjectV1**](ObjectEzsigntemplateannotationAPI.md#ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationDeleteObjectV1) | **DELETE** /1/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID} | Delete an existing Ezsigntemplateannotation
[**ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationEditObjectV1**](ObjectEzsigntemplateannotationAPI.md#ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationEditObjectV1) | **PUT** /1/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID} | Edit an existing Ezsigntemplateannotation
[**ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationGetObjectV2**](ObjectEzsigntemplateannotationAPI.md#ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationGetObjectV2) | **GET** /2/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID} | Retrieve an existing Ezsigntemplateannotation


# **ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationCreateObjectV1**
```c
// Create a new Ezsigntemplateannotation
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplateannotation_create_object_v1_response_t* ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationCreateObjectV1(apiClient_t *apiClient, ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplateannotation_create_object_v1_request** | **[ezsigntemplateannotation_create_object_v1_request_t](ezsigntemplateannotation_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplateannotation_create_object_v1_response_t](ezsigntemplateannotation_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationDeleteObjectV1**
```c
// Delete an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_delete_object_v1_response_t* ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateannotationID** | **int \*** | The unique ID of the Ezsigntemplateannotation | 

### Return type

[ezsigntemplateannotation_delete_object_v1_response_t](ezsigntemplateannotation_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationEditObjectV1**
```c
// Edit an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_edit_object_v1_response_t* ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID, ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateannotationID** | **int \*** | The unique ID of the Ezsigntemplateannotation | 
**ezsigntemplateannotation_edit_object_v1_request** | **[ezsigntemplateannotation_edit_object_v1_request_t](ezsigntemplateannotation_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplateannotation_edit_object_v1_response_t](ezsigntemplateannotation_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationGetObjectV2**
```c
// Retrieve an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_get_object_v2_response_t* ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateannotationID** | **int \*** | The unique ID of the Ezsigntemplateannotation | 

### Return type

[ezsigntemplateannotation_get_object_v2_response_t](ezsigntemplateannotation_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

