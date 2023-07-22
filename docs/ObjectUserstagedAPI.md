# ObjectUserstagedAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUserstagedAPI_userstagedCreateUserV1**](ObjectUserstagedAPI.md#ObjectUserstagedAPI_userstagedCreateUserV1) | **POST** /1/object/userstaged/{pkiUserstagedID}/createUser | Create a User from a Userstaged and then map it
[**ObjectUserstagedAPI_userstagedDeleteObjectV1**](ObjectUserstagedAPI.md#ObjectUserstagedAPI_userstagedDeleteObjectV1) | **DELETE** /1/object/userstaged/{pkiUserstagedID} | Delete an existing Userstaged
[**ObjectUserstagedAPI_userstagedGetListV1**](ObjectUserstagedAPI.md#ObjectUserstagedAPI_userstagedGetListV1) | **GET** /1/object/userstaged/getList | Retrieve Userstaged list
[**ObjectUserstagedAPI_userstagedGetObjectV2**](ObjectUserstagedAPI.md#ObjectUserstagedAPI_userstagedGetObjectV2) | **GET** /2/object/userstaged/{pkiUserstagedID} | Retrieve an existing Userstaged
[**ObjectUserstagedAPI_userstagedMapV1**](ObjectUserstagedAPI.md#ObjectUserstagedAPI_userstagedMapV1) | **POST** /1/object/userstaged/{pkiUserstagedID}/map | Map the Userstaged to an existing user


# **ObjectUserstagedAPI_userstagedCreateUserV1**
```c
// Create a User from a Userstaged and then map it
//
// Default values will be used while creating the User. If you need to change those values, you should use the route to edit a User.
//
userstaged_create_user_v1_response_t* ObjectUserstagedAPI_userstagedCreateUserV1(apiClient_t *apiClient, int pkiUserstagedID, object_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserstagedID** | **int** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[userstaged_create_user_v1_response_t](userstaged_create_user_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserstagedAPI_userstagedDeleteObjectV1**
```c
// Delete an existing Userstaged
//
// 
//
userstaged_delete_object_v1_response_t* ObjectUserstagedAPI_userstagedDeleteObjectV1(apiClient_t *apiClient, int pkiUserstagedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserstagedID** | **int** |  | 

### Return type

[userstaged_delete_object_v1_response_t](userstaged_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserstagedAPI_userstagedGetListV1**
```c
// Retrieve Userstaged list
//
// 
//
userstaged_get_list_v1_response_t* ObjectUserstagedAPI_userstagedGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_userstagedGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_userstagedGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] [default to 10000]
**iRowOffset** | **int** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[userstaged_get_list_v1_response_t](userstaged_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserstagedAPI_userstagedGetObjectV2**
```c
// Retrieve an existing Userstaged
//
// 
//
userstaged_get_object_v2_response_t* ObjectUserstagedAPI_userstagedGetObjectV2(apiClient_t *apiClient, int pkiUserstagedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserstagedID** | **int** |  | 

### Return type

[userstaged_get_object_v2_response_t](userstaged_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserstagedAPI_userstagedMapV1**
```c
// Map the Userstaged to an existing user
//
// 
//
userstaged_map_v1_response_t* ObjectUserstagedAPI_userstagedMapV1(apiClient_t *apiClient, int pkiUserstagedID, userstaged_map_v1_request_t * userstaged_map_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserstagedID** | **int** |  | 
**userstaged_map_v1_request** | **[userstaged_map_v1_request_t](userstaged_map_v1_request.md) \*** |  | 

### Return type

[userstaged_map_v1_response_t](userstaged_map_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

