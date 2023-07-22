# ObjectSubnetAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectSubnetAPI_subnetCreateObjectV1**](ObjectSubnetAPI.md#ObjectSubnetAPI_subnetCreateObjectV1) | **POST** /1/object/subnet | Create a new Subnet
[**ObjectSubnetAPI_subnetDeleteObjectV1**](ObjectSubnetAPI.md#ObjectSubnetAPI_subnetDeleteObjectV1) | **DELETE** /1/object/subnet/{pkiSubnetID} | Delete an existing Subnet
[**ObjectSubnetAPI_subnetEditObjectV1**](ObjectSubnetAPI.md#ObjectSubnetAPI_subnetEditObjectV1) | **PUT** /1/object/subnet/{pkiSubnetID} | Edit an existing Subnet
[**ObjectSubnetAPI_subnetGetObjectV2**](ObjectSubnetAPI.md#ObjectSubnetAPI_subnetGetObjectV2) | **GET** /2/object/subnet/{pkiSubnetID} | Retrieve an existing Subnet


# **ObjectSubnetAPI_subnetCreateObjectV1**
```c
// Create a new Subnet
//
// The endpoint allows to create one or many elements at once.
//
subnet_create_object_v1_response_t* ObjectSubnetAPI_subnetCreateObjectV1(apiClient_t *apiClient, subnet_create_object_v1_request_t * subnet_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subnet_create_object_v1_request** | **[subnet_create_object_v1_request_t](subnet_create_object_v1_request.md) \*** |  | 

### Return type

[subnet_create_object_v1_response_t](subnet_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSubnetAPI_subnetDeleteObjectV1**
```c
// Delete an existing Subnet
//
// 
//
subnet_delete_object_v1_response_t* ObjectSubnetAPI_subnetDeleteObjectV1(apiClient_t *apiClient, int pkiSubnetID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSubnetID** | **int** | The unique ID of the Subnet | 

### Return type

[subnet_delete_object_v1_response_t](subnet_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSubnetAPI_subnetEditObjectV1**
```c
// Edit an existing Subnet
//
// 
//
subnet_edit_object_v1_response_t* ObjectSubnetAPI_subnetEditObjectV1(apiClient_t *apiClient, int pkiSubnetID, subnet_edit_object_v1_request_t * subnet_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSubnetID** | **int** | The unique ID of the Subnet | 
**subnet_edit_object_v1_request** | **[subnet_edit_object_v1_request_t](subnet_edit_object_v1_request.md) \*** |  | 

### Return type

[subnet_edit_object_v1_response_t](subnet_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSubnetAPI_subnetGetObjectV2**
```c
// Retrieve an existing Subnet
//
// 
//
subnet_get_object_v2_response_t* ObjectSubnetAPI_subnetGetObjectV2(apiClient_t *apiClient, int pkiSubnetID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSubnetID** | **int** | The unique ID of the Subnet | 

### Return type

[subnet_get_object_v2_response_t](subnet_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

