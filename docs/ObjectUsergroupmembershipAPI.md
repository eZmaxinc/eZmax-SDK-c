# ObjectUsergroupmembershipAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectUsergroupmembershipAPI_usergroupmembershipCreateObjectV1**](ObjectUsergroupmembershipAPI.md#ObjectUsergroupmembershipAPI_usergroupmembershipCreateObjectV1) | **POST** /1/object/usergroupmembership | Create a new Usergroupmembership
[**ObjectUsergroupmembershipAPI_usergroupmembershipDeleteObjectV1**](ObjectUsergroupmembershipAPI.md#ObjectUsergroupmembershipAPI_usergroupmembershipDeleteObjectV1) | **DELETE** /1/object/usergroupmembership/{pkiUsergroupmembershipID} | Delete an existing Usergroupmembership
[**ObjectUsergroupmembershipAPI_usergroupmembershipEditObjectV1**](ObjectUsergroupmembershipAPI.md#ObjectUsergroupmembershipAPI_usergroupmembershipEditObjectV1) | **PUT** /1/object/usergroupmembership/{pkiUsergroupmembershipID} | Edit an existing Usergroupmembership
[**ObjectUsergroupmembershipAPI_usergroupmembershipGetObjectV2**](ObjectUsergroupmembershipAPI.md#ObjectUsergroupmembershipAPI_usergroupmembershipGetObjectV2) | **GET** /2/object/usergroupmembership/{pkiUsergroupmembershipID} | Retrieve an existing Usergroupmembership


# **ObjectUsergroupmembershipAPI_usergroupmembershipCreateObjectV1**
```c
// Create a new Usergroupmembership
//
// The endpoint allows to create one or many elements at once.
//
usergroupmembership_create_object_v1_response_t* ObjectUsergroupmembershipAPI_usergroupmembershipCreateObjectV1(apiClient_t *apiClient, usergroupmembership_create_object_v1_request_t * usergroupmembership_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**usergroupmembership_create_object_v1_request** | **[usergroupmembership_create_object_v1_request_t](usergroupmembership_create_object_v1_request.md) \*** |  | 

### Return type

[usergroupmembership_create_object_v1_response_t](usergroupmembership_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupmembershipAPI_usergroupmembershipDeleteObjectV1**
```c
// Delete an existing Usergroupmembership
//
// 
//
usergroupmembership_delete_object_v1_response_t* ObjectUsergroupmembershipAPI_usergroupmembershipDeleteObjectV1(apiClient_t *apiClient, int pkiUsergroupmembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupmembershipID** | **int \*** |  | 

### Return type

[usergroupmembership_delete_object_v1_response_t](usergroupmembership_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupmembershipAPI_usergroupmembershipEditObjectV1**
```c
// Edit an existing Usergroupmembership
//
// 
//
usergroupmembership_edit_object_v1_response_t* ObjectUsergroupmembershipAPI_usergroupmembershipEditObjectV1(apiClient_t *apiClient, int pkiUsergroupmembershipID, usergroupmembership_edit_object_v1_request_t * usergroupmembership_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupmembershipID** | **int \*** |  | 
**usergroupmembership_edit_object_v1_request** | **[usergroupmembership_edit_object_v1_request_t](usergroupmembership_edit_object_v1_request.md) \*** |  | 

### Return type

[usergroupmembership_edit_object_v1_response_t](usergroupmembership_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectUsergroupmembershipAPI_usergroupmembershipGetObjectV2**
```c
// Retrieve an existing Usergroupmembership
//
// 
//
usergroupmembership_get_object_v2_response_t* ObjectUsergroupmembershipAPI_usergroupmembershipGetObjectV2(apiClient_t *apiClient, int pkiUsergroupmembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiUsergroupmembershipID** | **int \*** |  | 

### Return type

[usergroupmembership_get_object_v2_response_t](usergroupmembership_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

