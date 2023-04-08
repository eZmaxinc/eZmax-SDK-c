# ObjectEzsigntemplatepackagesignermembershipAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipCreateObjectV1**](ObjectEzsigntemplatepackagesignermembershipAPI.md#ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipCreateObjectV1) | **POST** /1/object/ezsigntemplatepackagesignermembership | Create a new Ezsigntemplatepackagesignermembership
[**ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipDeleteObjectV1**](ObjectEzsigntemplatepackagesignermembershipAPI.md#ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID} | Delete an existing Ezsigntemplatepackagesignermembership
[**ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipGetObjectV2**](ObjectEzsigntemplatepackagesignermembershipAPI.md#ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipGetObjectV2) | **GET** /2/object/ezsigntemplatepackagesignermembership/{pkiEzsigntemplatepackagesignermembershipID} | Retrieve an existing Ezsigntemplatepackagesignermembership


# **ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipCreateObjectV1**
```c
// Create a new Ezsigntemplatepackagesignermembership
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagesignermembership_create_object_v1_response_t* ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagesignermembership_create_object_v1_request_t * ezsigntemplatepackagesignermembership_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatepackagesignermembership_create_object_v1_request** | **[ezsigntemplatepackagesignermembership_create_object_v1_request_t](ezsigntemplatepackagesignermembership_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepackagesignermembership_create_object_v1_response_t](ezsigntemplatepackagesignermembership_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatepackagesignermembership
//
// 
//
ezsigntemplatepackagesignermembership_delete_object_v1_response_t* ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatepackagesignermembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackagesignermembershipID** | **int** |  | 

### Return type

[ezsigntemplatepackagesignermembership_delete_object_v1_response_t](ezsigntemplatepackagesignermembership_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipGetObjectV2**
```c
// Retrieve an existing Ezsigntemplatepackagesignermembership
//
// 
//
ezsigntemplatepackagesignermembership_get_object_v2_response_t* ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplatepackagesignermembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackagesignermembershipID** | **int** |  | 

### Return type

[ezsigntemplatepackagesignermembership_get_object_v2_response_t](ezsigntemplatepackagesignermembership_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

