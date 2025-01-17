# ObjectEzsigntemplateformfieldgroupAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupCreateObjectV1**](ObjectEzsigntemplateformfieldgroupAPI.md#ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupCreateObjectV1) | **POST** /1/object/ezsigntemplateformfieldgroup | Create a new Ezsigntemplateformfieldgroup
[**ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupDeleteObjectV1**](ObjectEzsigntemplateformfieldgroupAPI.md#ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupDeleteObjectV1) | **DELETE** /1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID} | Delete an existing Ezsigntemplateformfieldgroup
[**ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupEditObjectV1**](ObjectEzsigntemplateformfieldgroupAPI.md#ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupEditObjectV1) | **PUT** /1/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID} | Edit an existing Ezsigntemplateformfieldgroup
[**ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupGetObjectV2**](ObjectEzsigntemplateformfieldgroupAPI.md#ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupGetObjectV2) | **GET** /2/object/ezsigntemplateformfieldgroup/{pkiEzsigntemplateformfieldgroupID} | Retrieve an existing Ezsigntemplateformfieldgroup


# **ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupCreateObjectV1**
```c
// Create a new Ezsigntemplateformfieldgroup
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplateformfieldgroup_create_object_v1_response_t* ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupCreateObjectV1(apiClient_t *apiClient, ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplateformfieldgroup_create_object_v1_request** | **[ezsigntemplateformfieldgroup_create_object_v1_request_t](ezsigntemplateformfieldgroup_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplateformfieldgroup_create_object_v1_response_t](ezsigntemplateformfieldgroup_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupDeleteObjectV1**
```c
// Delete an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_delete_object_v1_response_t* ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateformfieldgroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateformfieldgroupID** | **int \*** |  | 

### Return type

[ezsigntemplateformfieldgroup_delete_object_v1_response_t](ezsigntemplateformfieldgroup_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupEditObjectV1**
```c
// Edit an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_edit_object_v1_response_t* ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateformfieldgroupID, ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateformfieldgroupID** | **int \*** |  | 
**ezsigntemplateformfieldgroup_edit_object_v1_request** | **[ezsigntemplateformfieldgroup_edit_object_v1_request_t](ezsigntemplateformfieldgroup_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplateformfieldgroup_edit_object_v1_response_t](ezsigntemplateformfieldgroup_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupGetObjectV2**
```c
// Retrieve an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_get_object_v2_response_t* ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplateformfieldgroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplateformfieldgroupID** | **int \*** |  | 

### Return type

[ezsigntemplateformfieldgroup_get_object_v2_response_t](ezsigntemplateformfieldgroup_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

