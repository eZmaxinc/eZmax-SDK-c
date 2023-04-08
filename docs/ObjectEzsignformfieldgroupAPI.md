# ObjectEzsignformfieldgroupAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupCreateObjectV1**](ObjectEzsignformfieldgroupAPI.md#ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupCreateObjectV1) | **POST** /1/object/ezsignformfieldgroup | Create a new Ezsignformfieldgroup
[**ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupDeleteObjectV1**](ObjectEzsignformfieldgroupAPI.md#ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupDeleteObjectV1) | **DELETE** /1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID} | Delete an existing Ezsignformfieldgroup
[**ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupEditObjectV1**](ObjectEzsignformfieldgroupAPI.md#ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupEditObjectV1) | **PUT** /1/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID} | Edit an existing Ezsignformfieldgroup
[**ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupGetObjectV2**](ObjectEzsignformfieldgroupAPI.md#ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupGetObjectV2) | **GET** /2/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID} | Retrieve an existing Ezsignformfieldgroup


# **ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupCreateObjectV1**
```c
// Create a new Ezsignformfieldgroup
//
// The endpoint allows to create one or many elements at once.
//
ezsignformfieldgroup_create_object_v1_response_t* ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupCreateObjectV1(apiClient_t *apiClient, ezsignformfieldgroup_create_object_v1_request_t * ezsignformfieldgroup_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignformfieldgroup_create_object_v1_request** | **[ezsignformfieldgroup_create_object_v1_request_t](ezsignformfieldgroup_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignformfieldgroup_create_object_v1_response_t](ezsignformfieldgroup_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupDeleteObjectV1**
```c
// Delete an existing Ezsignformfieldgroup
//
// 
//
ezsignformfieldgroup_delete_object_v1_response_t* ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignformfieldgroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignformfieldgroupID** | **int** |  | 

### Return type

[ezsignformfieldgroup_delete_object_v1_response_t](ezsignformfieldgroup_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupEditObjectV1**
```c
// Edit an existing Ezsignformfieldgroup
//
// 
//
ezsignformfieldgroup_edit_object_v1_response_t* ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupEditObjectV1(apiClient_t *apiClient, int pkiEzsignformfieldgroupID, ezsignformfieldgroup_edit_object_v1_request_t * ezsignformfieldgroup_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignformfieldgroupID** | **int** |  | 
**ezsignformfieldgroup_edit_object_v1_request** | **[ezsignformfieldgroup_edit_object_v1_request_t](ezsignformfieldgroup_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignformfieldgroup_edit_object_v1_response_t](ezsignformfieldgroup_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupGetObjectV2**
```c
// Retrieve an existing Ezsignformfieldgroup
//
// 
//
ezsignformfieldgroup_get_object_v2_response_t* ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupGetObjectV2(apiClient_t *apiClient, int pkiEzsignformfieldgroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignformfieldgroupID** | **int** |  | 

### Return type

[ezsignformfieldgroup_get_object_v2_response_t](ezsignformfieldgroup_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

