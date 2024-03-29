# ObjectUserAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUserAPI_userCreateObjectV1**](ObjectUserAPI.md#ObjectUserAPI_userCreateObjectV1) | **POST** /1/object/user | Create a new User
[**ObjectUserAPI_userEditObjectV1**](ObjectUserAPI.md#ObjectUserAPI_userEditObjectV1) | **PUT** /1/object/user/{pkiUserID} | Edit an existing User
[**ObjectUserAPI_userEditPermissionsV1**](ObjectUserAPI.md#ObjectUserAPI_userEditPermissionsV1) | **PUT** /1/object/user/{pkiUserID}/editPermissions | Edit multiple Permissions
[**ObjectUserAPI_userGetAutocompleteV2**](ObjectUserAPI.md#ObjectUserAPI_userGetAutocompleteV2) | **GET** /2/object/user/getAutocomplete/{sSelector} | Retrieve Users and IDs
[**ObjectUserAPI_userGetEffectivePermissionsV1**](ObjectUserAPI.md#ObjectUserAPI_userGetEffectivePermissionsV1) | **GET** /1/object/user/{pkiUserID}/getEffectivePermissions | Retrieve an existing User&#39;s Effective Permissions
[**ObjectUserAPI_userGetListV1**](ObjectUserAPI.md#ObjectUserAPI_userGetListV1) | **GET** /1/object/user/getList | Retrieve User list
[**ObjectUserAPI_userGetObjectV2**](ObjectUserAPI.md#ObjectUserAPI_userGetObjectV2) | **GET** /2/object/user/{pkiUserID} | Retrieve an existing User
[**ObjectUserAPI_userGetPermissionsV1**](ObjectUserAPI.md#ObjectUserAPI_userGetPermissionsV1) | **GET** /1/object/user/{pkiUserID}/getPermissions | Retrieve an existing User&#39;s Permissions
[**ObjectUserAPI_userGetSubnetsV1**](ObjectUserAPI.md#ObjectUserAPI_userGetSubnetsV1) | **GET** /1/object/user/{pkiUserID}/getSubnets | Retrieve an existing User&#39;s Subnets


# **ObjectUserAPI_userCreateObjectV1**
```c
// Create a new User
//
// The endpoint allows to create one or many elements at once.
//
user_create_object_v1_response_t* ObjectUserAPI_userCreateObjectV1(apiClient_t *apiClient, user_create_object_v1_request_t * user_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_create_object_v1_request** | **[user_create_object_v1_request_t](user_create_object_v1_request.md) \*** |  | 

### Return type

[user_create_object_v1_response_t](user_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userEditObjectV1**
```c
// Edit an existing User
//
// 
//
user_edit_object_v1_response_t* ObjectUserAPI_userEditObjectV1(apiClient_t *apiClient, int pkiUserID, user_edit_object_v1_request_t * user_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserID** | **int** | The unique ID of the User | 
**user_edit_object_v1_request** | **[user_edit_object_v1_request_t](user_edit_object_v1_request.md) \*** |  | 

### Return type

[user_edit_object_v1_response_t](user_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userEditPermissionsV1**
```c
// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
user_edit_permissions_v1_response_t* ObjectUserAPI_userEditPermissionsV1(apiClient_t *apiClient, int pkiUserID, user_edit_permissions_v1_request_t * user_edit_permissions_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserID** | **int** |  | 
**user_edit_permissions_v1_request** | **[user_edit_permissions_v1_request_t](user_edit_permissions_v1_request.md) \*** |  | 

### Return type

[user_edit_permissions_v1_response_t](user_edit_permissions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userGetAutocompleteV2**
```c
// Retrieve Users and IDs
//
// Get the list of User to be used in a dropdown or autocomplete control.
//
user_get_autocomplete_v2_response_t* ObjectUserAPI_userGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_userGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_userGetAutocompleteV2_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_userGetAutocompleteV2_sSelector_e** | The type of Users to return | 
**eFilterActive** | **ezmax_api_definition__full_userGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[user_get_autocomplete_v2_response_t](user_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userGetEffectivePermissionsV1**
```c
// Retrieve an existing User's Effective Permissions
//
// Effective Permissions refers to the combination of Permissions held by a User and the Permissions associated with the Usergroups they belong to.
//
user_get_effective_permissions_v1_response_t* ObjectUserAPI_userGetEffectivePermissionsV1(apiClient_t *apiClient, int pkiUserID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserID** | **int** |  | 

### Return type

[user_get_effective_permissions_v1_response_t](user_get_effective_permissions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userGetListV1**
```c
// Retrieve User list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eUserType | AgentBroker<br>Assistant<br>Employee<br>EzsignUser<br>Normal | | eUserOrigin | BuiltIn<br>External | | eUserEzsignaccess | No<br>PaidByOffice<br>PerDocument<br>Prepaid |
//
user_get_list_v1_response_t* ObjectUserAPI_userGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_userGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_userGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] [default to 10000]
**iRowOffset** | **int** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[user_get_list_v1_response_t](user_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userGetObjectV2**
```c
// Retrieve an existing User
//
// 
//
user_get_object_v2_response_t* ObjectUserAPI_userGetObjectV2(apiClient_t *apiClient, int pkiUserID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserID** | **int** | The unique ID of the User | 

### Return type

[user_get_object_v2_response_t](user_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userGetPermissionsV1**
```c
// Retrieve an existing User's Permissions
//
user_get_permissions_v1_response_t* ObjectUserAPI_userGetPermissionsV1(apiClient_t *apiClient, int pkiUserID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserID** | **int** |  | 

### Return type

[user_get_permissions_v1_response_t](user_get_permissions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUserAPI_userGetSubnetsV1**
```c
// Retrieve an existing User's Subnets
//
user_get_subnets_v1_response_t* ObjectUserAPI_userGetSubnetsV1(apiClient_t *apiClient, int pkiUserID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUserID** | **int** |  | 

### Return type

[user_get_subnets_v1_response_t](user_get_subnets_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

