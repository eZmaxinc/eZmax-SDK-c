# ObjectEzsignsignergroupAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignsignergroupAPI_ezsignsignergroupCreateObjectV1**](ObjectEzsignsignergroupAPI.md#ObjectEzsignsignergroupAPI_ezsignsignergroupCreateObjectV1) | **POST** /1/object/ezsignsignergroup | Create a new Ezsignsignergroup
[**ObjectEzsignsignergroupAPI_ezsignsignergroupDeleteObjectV1**](ObjectEzsignsignergroupAPI.md#ObjectEzsignsignergroupAPI_ezsignsignergroupDeleteObjectV1) | **DELETE** /1/object/ezsignsignergroup/{pkiEzsignsignergroupID} | Delete an existing Ezsignsignergroup
[**ObjectEzsignsignergroupAPI_ezsignsignergroupEditEzsignsignergroupmembershipsV1**](ObjectEzsignsignergroupAPI.md#ObjectEzsignsignergroupAPI_ezsignsignergroupEditEzsignsignergroupmembershipsV1) | **PUT** /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/editEzsignsignergroupmemberships | Edit multiple Ezsignsignergroupmemberships
[**ObjectEzsignsignergroupAPI_ezsignsignergroupEditObjectV1**](ObjectEzsignsignergroupAPI.md#ObjectEzsignsignergroupAPI_ezsignsignergroupEditObjectV1) | **PUT** /1/object/ezsignsignergroup/{pkiEzsignsignergroupID} | Edit an existing Ezsignsignergroup
[**ObjectEzsignsignergroupAPI_ezsignsignergroupGetEzsignsignergroupmembershipsV1**](ObjectEzsignsignergroupAPI.md#ObjectEzsignsignergroupAPI_ezsignsignergroupGetEzsignsignergroupmembershipsV1) | **GET** /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships | Retrieve an existing Ezsignsignergroup&#39;s Ezsignsignergroupmemberships
[**ObjectEzsignsignergroupAPI_ezsignsignergroupGetObjectV2**](ObjectEzsignsignergroupAPI.md#ObjectEzsignsignergroupAPI_ezsignsignergroupGetObjectV2) | **GET** /2/object/ezsignsignergroup/{pkiEzsignsignergroupID} | Retrieve an existing Ezsignsignergroup


# **ObjectEzsignsignergroupAPI_ezsignsignergroupCreateObjectV1**
```c
// Create a new Ezsignsignergroup
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignergroup_create_object_v1_response_t* ObjectEzsignsignergroupAPI_ezsignsignergroupCreateObjectV1(apiClient_t *apiClient, ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignsignergroup_create_object_v1_request** | **[ezsignsignergroup_create_object_v1_request_t](ezsignsignergroup_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignsignergroup_create_object_v1_response_t](ezsignsignergroup_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignergroupAPI_ezsignsignergroupDeleteObjectV1**
```c
// Delete an existing Ezsignsignergroup
//
// 
//
ezsignsignergroup_delete_object_v1_response_t* ObjectEzsignsignergroupAPI_ezsignsignergroupDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignergroupID** | **int \*** | The unique ID of the Ezsignsignergroup | 

### Return type

[ezsignsignergroup_delete_object_v1_response_t](ezsignsignergroup_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignergroupAPI_ezsignsignergroupEditEzsignsignergroupmembershipsV1**
```c
// Edit multiple Ezsignsignergroupmemberships
//
// Using this endpoint, you can edit multiple Ezsignsignergroupmemberships at the same time.
//
ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_t* ObjectEzsignsignergroupAPI_ezsignsignergroupEditEzsignsignergroupmembershipsV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID, ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignergroupID** | **int \*** |  | 
**ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request** | **[ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t](ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request.md) \*** |  | 

### Return type

[ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_t](ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignergroupAPI_ezsignsignergroupEditObjectV1**
```c
// Edit an existing Ezsignsignergroup
//
// 
//
ezsignsignergroup_edit_object_v1_response_t* ObjectEzsignsignergroupAPI_ezsignsignergroupEditObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID, ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignergroupID** | **int \*** | The unique ID of the Ezsignsignergroup | 
**ezsignsignergroup_edit_object_v1_request** | **[ezsignsignergroup_edit_object_v1_request_t](ezsignsignergroup_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignsignergroup_edit_object_v1_response_t](ezsignsignergroup_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignergroupAPI_ezsignsignergroupGetEzsignsignergroupmembershipsV1**
```c
// Retrieve an existing Ezsignsignergroup's Ezsignsignergroupmemberships
//
ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t* ObjectEzsignsignergroupAPI_ezsignsignergroupGetEzsignsignergroupmembershipsV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignergroupID** | **int \*** |  | 

### Return type

[ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t](ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignergroupAPI_ezsignsignergroupGetObjectV2**
```c
// Retrieve an existing Ezsignsignergroup
//
// 
//
ezsignsignergroup_get_object_v2_response_t* ObjectEzsignsignergroupAPI_ezsignsignergroupGetObjectV2(apiClient_t *apiClient, int *pkiEzsignsignergroupID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignergroupID** | **int \*** | The unique ID of the Ezsignsignergroup | 

### Return type

[ezsignsignergroup_get_object_v2_response_t](ezsignsignergroup_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

