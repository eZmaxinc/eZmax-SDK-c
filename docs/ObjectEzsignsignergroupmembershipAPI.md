# ObjectEzsignsignergroupmembershipAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipCreateObjectV1**](ObjectEzsignsignergroupmembershipAPI.md#ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipCreateObjectV1) | **POST** /1/object/ezsignsignergroupmembership | Create a new Ezsignsignergroupmembership
[**ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipDeleteObjectV1**](ObjectEzsignsignergroupmembershipAPI.md#ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipDeleteObjectV1) | **DELETE** /1/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID} | Delete an existing Ezsignsignergroupmembership
[**ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipGetObjectV2**](ObjectEzsignsignergroupmembershipAPI.md#ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipGetObjectV2) | **GET** /2/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID} | Retrieve an existing Ezsignsignergroupmembership


# **ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipCreateObjectV1**
```c
// Create a new Ezsignsignergroupmembership
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignergroupmembership_create_object_v1_response_t* ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipCreateObjectV1(apiClient_t *apiClient, ezsignsignergroupmembership_create_object_v1_request_t * ezsignsignergroupmembership_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignsignergroupmembership_create_object_v1_request** | **[ezsignsignergroupmembership_create_object_v1_request_t](ezsignsignergroupmembership_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignsignergroupmembership_create_object_v1_response_t](ezsignsignergroupmembership_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipDeleteObjectV1**
```c
// Delete an existing Ezsignsignergroupmembership
//
// 
//
ezsignsignergroupmembership_delete_object_v1_response_t* ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignsignergroupmembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignergroupmembershipID** | **int \*** | The unique ID of the Ezsignsignergroupmembership | 

### Return type

[ezsignsignergroupmembership_delete_object_v1_response_t](ezsignsignergroupmembership_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipGetObjectV2**
```c
// Retrieve an existing Ezsignsignergroupmembership
//
// 
//
ezsignsignergroupmembership_get_object_v2_response_t* ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipGetObjectV2(apiClient_t *apiClient, int pkiEzsignsignergroupmembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignergroupmembershipID** | **int \*** | The unique ID of the Ezsignsignergroupmembership | 

### Return type

[ezsignsignergroupmembership_get_object_v2_response_t](ezsignsignergroupmembership_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

