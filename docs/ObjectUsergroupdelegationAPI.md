# ObjectUsergroupdelegationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUsergroupdelegationAPI_usergroupdelegationCreateObjectV1**](ObjectUsergroupdelegationAPI.md#ObjectUsergroupdelegationAPI_usergroupdelegationCreateObjectV1) | **POST** /1/object/usergroupdelegation | Create a new Usergroupdelegation
[**ObjectUsergroupdelegationAPI_usergroupdelegationDeleteObjectV1**](ObjectUsergroupdelegationAPI.md#ObjectUsergroupdelegationAPI_usergroupdelegationDeleteObjectV1) | **DELETE** /1/object/usergroupdelegation/{pkiUsergroupdelegationID} | Delete an existing Usergroupdelegation
[**ObjectUsergroupdelegationAPI_usergroupdelegationEditObjectV1**](ObjectUsergroupdelegationAPI.md#ObjectUsergroupdelegationAPI_usergroupdelegationEditObjectV1) | **PUT** /1/object/usergroupdelegation/{pkiUsergroupdelegationID} | Edit an existing Usergroupdelegation
[**ObjectUsergroupdelegationAPI_usergroupdelegationGetObjectV2**](ObjectUsergroupdelegationAPI.md#ObjectUsergroupdelegationAPI_usergroupdelegationGetObjectV2) | **GET** /2/object/usergroupdelegation/{pkiUsergroupdelegationID} | Retrieve an existing Usergroupdelegation


# **ObjectUsergroupdelegationAPI_usergroupdelegationCreateObjectV1**
```c
// Create a new Usergroupdelegation
//
// The endpoint allows to create one or many elements at once.
//
usergroupdelegation_create_object_v1_response_t* ObjectUsergroupdelegationAPI_usergroupdelegationCreateObjectV1(apiClient_t *apiClient, usergroupdelegation_create_object_v1_request_t * usergroupdelegation_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**usergroupdelegation_create_object_v1_request** | **[usergroupdelegation_create_object_v1_request_t](usergroupdelegation_create_object_v1_request.md) \*** |  | 

### Return type

[usergroupdelegation_create_object_v1_response_t](usergroupdelegation_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupdelegationAPI_usergroupdelegationDeleteObjectV1**
```c
// Delete an existing Usergroupdelegation
//
// 
//
usergroupdelegation_delete_object_v1_response_t* ObjectUsergroupdelegationAPI_usergroupdelegationDeleteObjectV1(apiClient_t *apiClient, int pkiUsergroupdelegationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupdelegationID** | **int \*** | The unique ID of the Usergroupdelegation | 

### Return type

[usergroupdelegation_delete_object_v1_response_t](usergroupdelegation_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupdelegationAPI_usergroupdelegationEditObjectV1**
```c
// Edit an existing Usergroupdelegation
//
// 
//
usergroupdelegation_edit_object_v1_response_t* ObjectUsergroupdelegationAPI_usergroupdelegationEditObjectV1(apiClient_t *apiClient, int pkiUsergroupdelegationID, usergroupdelegation_edit_object_v1_request_t * usergroupdelegation_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupdelegationID** | **int \*** | The unique ID of the Usergroupdelegation | 
**usergroupdelegation_edit_object_v1_request** | **[usergroupdelegation_edit_object_v1_request_t](usergroupdelegation_edit_object_v1_request.md) \*** |  | 

### Return type

[usergroupdelegation_edit_object_v1_response_t](usergroupdelegation_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupdelegationAPI_usergroupdelegationGetObjectV2**
```c
// Retrieve an existing Usergroupdelegation
//
// 
//
usergroupdelegation_get_object_v2_response_t* ObjectUsergroupdelegationAPI_usergroupdelegationGetObjectV2(apiClient_t *apiClient, int pkiUsergroupdelegationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupdelegationID** | **int \*** | The unique ID of the Usergroupdelegation | 

### Return type

[usergroupdelegation_get_object_v2_response_t](usergroupdelegation_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

