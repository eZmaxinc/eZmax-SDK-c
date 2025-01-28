# ObjectEzsigntemplatepackagemembershipAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipCreateObjectV1**](ObjectEzsigntemplatepackagemembershipAPI.md#ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipCreateObjectV1) | **POST** /1/object/ezsigntemplatepackagemembership | Create a new Ezsigntemplatepackagemembership
[**ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipDeleteObjectV1**](ObjectEzsigntemplatepackagemembershipAPI.md#ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID} | Delete an existing Ezsigntemplatepackagemembership
[**ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipGetObjectV2**](ObjectEzsigntemplatepackagemembershipAPI.md#ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipGetObjectV2) | **GET** /2/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID} | Retrieve an existing Ezsigntemplatepackagemembership


# **ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipCreateObjectV1**
```c
// Create a new Ezsigntemplatepackagemembership
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagemembership_create_object_v1_response_t* ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatepackagemembership_create_object_v1_request** | **[ezsigntemplatepackagemembership_create_object_v1_request_t](ezsigntemplatepackagemembership_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepackagemembership_create_object_v1_response_t](ezsigntemplatepackagemembership_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatepackagemembership
//
// 
//
ezsigntemplatepackagemembership_delete_object_v1_response_t* ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagemembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackagemembershipID** | **int \*** |  | 

### Return type

[ezsigntemplatepackagemembership_delete_object_v1_response_t](ezsigntemplatepackagemembership_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipGetObjectV2**
```c
// Retrieve an existing Ezsigntemplatepackagemembership
//
// 
//
ezsigntemplatepackagemembership_get_object_v2_response_t* ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepackagemembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepackagemembershipID** | **int \*** |  | 

### Return type

[ezsigntemplatepackagemembership_get_object_v2_response_t](ezsigntemplatepackagemembership_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

