# ObjectEzsignannotationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignannotationAPI_ezsignannotationCreateObjectV1**](ObjectEzsignannotationAPI.md#ObjectEzsignannotationAPI_ezsignannotationCreateObjectV1) | **POST** /1/object/ezsignannotation | Create a new Ezsignannotation
[**ObjectEzsignannotationAPI_ezsignannotationDeleteObjectV1**](ObjectEzsignannotationAPI.md#ObjectEzsignannotationAPI_ezsignannotationDeleteObjectV1) | **DELETE** /1/object/ezsignannotation/{pkiEzsignannotationID} | Delete an existing Ezsignannotation
[**ObjectEzsignannotationAPI_ezsignannotationEditObjectV1**](ObjectEzsignannotationAPI.md#ObjectEzsignannotationAPI_ezsignannotationEditObjectV1) | **PUT** /1/object/ezsignannotation/{pkiEzsignannotationID} | Edit an existing Ezsignannotation
[**ObjectEzsignannotationAPI_ezsignannotationGetObjectV2**](ObjectEzsignannotationAPI.md#ObjectEzsignannotationAPI_ezsignannotationGetObjectV2) | **GET** /2/object/ezsignannotation/{pkiEzsignannotationID} | Retrieve an existing Ezsignannotation


# **ObjectEzsignannotationAPI_ezsignannotationCreateObjectV1**
```c
// Create a new Ezsignannotation
//
// The endpoint allows to create one or many elements at once.
//
ezsignannotation_create_object_v1_response_t* ObjectEzsignannotationAPI_ezsignannotationCreateObjectV1(apiClient_t *apiClient, ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignannotation_create_object_v1_request** | **[ezsignannotation_create_object_v1_request_t](ezsignannotation_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignannotation_create_object_v1_response_t](ezsignannotation_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignannotationAPI_ezsignannotationDeleteObjectV1**
```c
// Delete an existing Ezsignannotation
//
// 
//
common_response_t* ObjectEzsignannotationAPI_ezsignannotationDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignannotationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignannotationID** | **int \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignannotationAPI_ezsignannotationEditObjectV1**
```c
// Edit an existing Ezsignannotation
//
// 
//
common_response_t* ObjectEzsignannotationAPI_ezsignannotationEditObjectV1(apiClient_t *apiClient, int *pkiEzsignannotationID, ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignannotationID** | **int \*** |  | 
**ezsignannotation_edit_object_v1_request** | **[ezsignannotation_edit_object_v1_request_t](ezsignannotation_edit_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignannotationAPI_ezsignannotationGetObjectV2**
```c
// Retrieve an existing Ezsignannotation
//
// 
//
ezsignannotation_get_object_v2_response_t* ObjectEzsignannotationAPI_ezsignannotationGetObjectV2(apiClient_t *apiClient, int *pkiEzsignannotationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignannotationID** | **int \*** |  | 

### Return type

[ezsignannotation_get_object_v2_response_t](ezsignannotation_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

