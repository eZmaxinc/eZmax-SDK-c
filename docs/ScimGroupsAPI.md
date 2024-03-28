# ScimGroupsAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ScimGroupsAPI_groupsCreateObjectScimV2**](ScimGroupsAPI.md#ScimGroupsAPI_groupsCreateObjectScimV2) | **POST** /2/scim/Groups | Create a new Usergroup
[**ScimGroupsAPI_groupsDeleteObjectScimV2**](ScimGroupsAPI.md#ScimGroupsAPI_groupsDeleteObjectScimV2) | **DELETE** /2/scim/Groups/{groupId} | Delete an existing Usergroup
[**ScimGroupsAPI_groupsEditObjectScimV2**](ScimGroupsAPI.md#ScimGroupsAPI_groupsEditObjectScimV2) | **PUT** /2/scim/Groups/{groupId} | Edit an existing Usergroup
[**ScimGroupsAPI_groupsGetListScimV2**](ScimGroupsAPI.md#ScimGroupsAPI_groupsGetListScimV2) | **GET** /2/scim/Groups | Retrieve Usergroup list
[**ScimGroupsAPI_groupsGetObjectScimV2**](ScimGroupsAPI.md#ScimGroupsAPI_groupsGetObjectScimV2) | **GET** /2/scim/Groups/{groupId} | Retrieve an existing Usergroup


# **ScimGroupsAPI_groupsCreateObjectScimV2**
```c
// Create a new Usergroup
//
scim_group_t* ScimGroupsAPI_groupsCreateObjectScimV2(apiClient_t *apiClient, scim_group_t *scim_group);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**scim_group** | **[scim_group_t](scim_group.md) \*** |  | 

### Return type

[scim_group_t](scim_group.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimGroupsAPI_groupsDeleteObjectScimV2**
```c
// Delete an existing Usergroup
//
void ScimGroupsAPI_groupsDeleteObjectScimV2(apiClient_t *apiClient, char *groupId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**groupId** | **char \*** |  | 

### Return type

void

### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimGroupsAPI_groupsEditObjectScimV2**
```c
// Edit an existing Usergroup
//
scim_group_t* ScimGroupsAPI_groupsEditObjectScimV2(apiClient_t *apiClient, char *groupId, scim_group_t *scim_group);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**groupId** | **char \*** |  | 
**scim_group** | **[scim_group_t](scim_group.md) \*** |  | 

### Return type

[scim_group_t](scim_group.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimGroupsAPI_groupsGetListScimV2**
```c
// Retrieve Usergroup list
//
scim_group_t* ScimGroupsAPI_groupsGetListScimV2(apiClient_t *apiClient, char *filter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**filter** | **char \*** | Filter expression for searching groups | [optional] 

### Return type

[scim_group_t](scim_group.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ScimGroupsAPI_groupsGetObjectScimV2**
```c
// Retrieve an existing Usergroup
//
scim_group_t* ScimGroupsAPI_groupsGetObjectScimV2(apiClient_t *apiClient, char *groupId);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**groupId** | **char \*** |  | 

### Return type

[scim_group_t](scim_group.md) *


### Authorization

[Bearer](../README.md#Bearer)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

