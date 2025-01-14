# ObjectEzsigntemplatedocumentpagerecognitionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionCreateObjectV1**](ObjectEzsigntemplatedocumentpagerecognitionAPI.md#ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionCreateObjectV1) | **POST** /1/object/ezsigntemplatedocumentpagerecognition | Create a new Ezsigntemplatedocumentpagerecognition
[**ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionDeleteObjectV1**](ObjectEzsigntemplatedocumentpagerecognitionAPI.md#ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID} | Delete an existing Ezsigntemplatedocumentpagerecognition
[**ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionEditObjectV1**](ObjectEzsigntemplatedocumentpagerecognitionAPI.md#ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionEditObjectV1) | **PUT** /1/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID} | Edit an existing Ezsigntemplatedocumentpagerecognition
[**ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionGetObjectV2**](ObjectEzsigntemplatedocumentpagerecognitionAPI.md#ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionGetObjectV2) | **GET** /2/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID} | Retrieve an existing Ezsigntemplatedocumentpagerecognition


# **ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionCreateObjectV1**
```c
// Create a new Ezsigntemplatedocumentpagerecognition
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatedocumentpagerecognition_create_object_v1_response_t* ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionCreateObjectV1(apiClient_t *apiClient, ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatedocumentpagerecognition_create_object_v1_request** | **[ezsigntemplatedocumentpagerecognition_create_object_v1_request_t](ezsigntemplatedocumentpagerecognition_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocumentpagerecognition_create_object_v1_response_t](ezsigntemplatedocumentpagerecognition_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t* ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentpagerecognitionID** | **int \*** | The unique ID of the Ezsigntemplatedocumentpagerecognition | 

### Return type

[ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t](ezsigntemplatedocumentpagerecognition_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionEditObjectV1**
```c
// Edit an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_edit_object_v1_response_t* ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID, ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentpagerecognitionID** | **int \*** | The unique ID of the Ezsigntemplatedocumentpagerecognition | 
**ezsigntemplatedocumentpagerecognition_edit_object_v1_request** | **[ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t](ezsigntemplatedocumentpagerecognition_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatedocumentpagerecognition_edit_object_v1_response_t](ezsigntemplatedocumentpagerecognition_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionGetObjectV2**
```c
// Retrieve an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_get_object_v2_response_t* ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatedocumentpagerecognitionID** | **int \*** | The unique ID of the Ezsigntemplatedocumentpagerecognition | 

### Return type

[ezsigntemplatedocumentpagerecognition_get_object_v2_response_t](ezsigntemplatedocumentpagerecognition_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

