# ObjectCustomerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCustomerAPI_customerCreateObjectV1**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerCreateObjectV1) | **POST** /1/object/customer | Create a new Customer
[**ObjectCustomerAPI_customerGetObjectV2**](ObjectCustomerAPI.md#ObjectCustomerAPI_customerGetObjectV2) | **GET** /2/object/customer/{pkiCustomerID} | Retrieve an existing Customer


# **ObjectCustomerAPI_customerCreateObjectV1**
```c
// Create a new Customer
//
// The endpoint allows to create one or many elements at once.
//
customer_create_object_v1_response_t* ObjectCustomerAPI_customerCreateObjectV1(apiClient_t *apiClient, customer_create_object_v1_request_t *customer_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**customer_create_object_v1_request** | **[customer_create_object_v1_request_t](customer_create_object_v1_request.md) \*** |  | 

### Return type

[customer_create_object_v1_response_t](customer_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCustomerAPI_customerGetObjectV2**
```c
// Retrieve an existing Customer
//
// 
//
customer_get_object_v2_response_t* ObjectCustomerAPI_customerGetObjectV2(apiClient_t *apiClient, int *pkiCustomerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCustomerID** | **int \*** | The unique ID of the Customer | 

### Return type

[customer_get_object_v2_response_t](customer_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

