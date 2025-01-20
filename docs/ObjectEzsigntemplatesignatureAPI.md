# ObjectEzsigntemplatesignatureAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2) | **POST** /2/object/ezsigntemplatesignature | Create a new Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Delete an existing Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2) | **PUT** /2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Edit an existing Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3) | **GET** /3/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Retrieve an existing Ezsigntemplatesignature


# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2**
```c
// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesignature_create_object_v2_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatesignature_create_object_v2_request** | **[ezsigntemplatesignature_create_object_v2_request_t](ezsigntemplatesignature_create_object_v2_request.md) \*** |  | 

### Return type

[ezsigntemplatesignature_create_object_v2_response_t](ezsigntemplatesignature_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatesignature
//
// 
//
common_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2**
```c
// Edit an existing Ezsigntemplatesignature
//
// 
//
common_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID, ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 
**ezsigntemplatesignature_edit_object_v2_request** | **[ezsigntemplatesignature_edit_object_v2_request_t](ezsigntemplatesignature_edit_object_v2_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3**
```c
// Retrieve an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_get_object_v3_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 

### Return type

[ezsigntemplatesignature_get_object_v3_response_t](ezsigntemplatesignature_get_object_v3_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

