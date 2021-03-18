# ObjectApikeyAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectApikeyAPI_apikeyCreateObjectV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyCreateObjectV1) | **POST** /1/object/apikey | Create a new Apikey


# **ObjectApikeyAPI_apikeyCreateObjectV1**
```c
// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
apikey_create_object_v1_response_t* ObjectApikeyAPI_apikeyCreateObjectV1(apiClient_t *apiClient, list_t * apikey_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**apikey_create_object_v1_request** | **[list_t](apikey_create_object_v1_request.md) \*** |  | 

### Return type

[apikey_create_object_v1_response_t](apikey_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

