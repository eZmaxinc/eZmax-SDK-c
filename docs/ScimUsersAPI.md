# ScimUsersAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ScimUsersAPI_usersCreateObjectScimV2**](ScimUsersAPI.md#ScimUsersAPI_usersCreateObjectScimV2) | **POST** /2/scim/Users | Create a new User
[**ScimUsersAPI_usersDeleteObjectScimV2**](ScimUsersAPI.md#ScimUsersAPI_usersDeleteObjectScimV2) | **DELETE** /2/scim/Users/{userId} | Delete an existing User
[**ScimUsersAPI_usersEditObjectScimV2**](ScimUsersAPI.md#ScimUsersAPI_usersEditObjectScimV2) | **PUT** /2/scim/Users/{userId} | Edit an existing User
[**ScimUsersAPI_usersGetListScimV2**](ScimUsersAPI.md#ScimUsersAPI_usersGetListScimV2) | **GET** /2/scim/Users | Retrieve User list
[**ScimUsersAPI_usersGetObjectScimV2**](ScimUsersAPI.md#ScimUsersAPI_usersGetObjectScimV2) | **GET** /2/scim/Users/{userId} | Retrieve an existing User


# **ScimUsersAPI_usersCreateObjectScimV2**
```c
// Create a new User
//
scim_user_t* ScimUsersAPI_usersCreateObjectScimV2(apiClient_t *apiClient, scim_user_t * scim_user);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**scim_user** | **[scim_user_t](scim_user.md) \*** |  | 

### Return type

[scim_user_t](scim_user.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimUsersAPI_usersDeleteObjectScimV2**
```c
// Delete an existing User
//
void ScimUsersAPI_usersDeleteObjectScimV2(apiClient_t *apiClient, char * userId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 

### Return type

void

### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimUsersAPI_usersEditObjectScimV2**
```c
// Edit an existing User
//
scim_user_t* ScimUsersAPI_usersEditObjectScimV2(apiClient_t *apiClient, char * userId, scim_user_t * scim_user);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 
**scim_user** | **[scim_user_t](scim_user.md) \*** |  | 

### Return type

[scim_user_t](scim_user.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimUsersAPI_usersGetListScimV2**
```c
// Retrieve User list
//
scim_user_list_t* ScimUsersAPI_usersGetListScimV2(apiClient_t *apiClient, char * filter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**filter** | **char \*** | Filter expression for searching users | [optional] 

### Return type

[scim_user_list_t](scim_user_list.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimUsersAPI_usersGetObjectScimV2**
```c
// Retrieve an existing User
//
scim_user_t* ScimUsersAPI_usersGetObjectScimV2(apiClient_t *apiClient, char * userId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**userId** | **char \*** |  | 

### Return type

[scim_user_t](scim_user.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

