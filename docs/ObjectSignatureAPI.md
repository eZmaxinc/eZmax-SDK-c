# ObjectSignatureAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectSignatureAPI_signatureCreateObjectV1**](ObjectSignatureAPI.md#ObjectSignatureAPI_signatureCreateObjectV1) | **POST** /1/object/signature | Create a new Signature
[**ObjectSignatureAPI_signatureDeleteObjectV1**](ObjectSignatureAPI.md#ObjectSignatureAPI_signatureDeleteObjectV1) | **DELETE** /1/object/signature/{pkiSignatureID} | Delete an existing Signature
[**ObjectSignatureAPI_signatureEditObjectV1**](ObjectSignatureAPI.md#ObjectSignatureAPI_signatureEditObjectV1) | **PUT** /1/object/signature/{pkiSignatureID} | Edit an existing Signature
[**ObjectSignatureAPI_signatureGetObjectV2**](ObjectSignatureAPI.md#ObjectSignatureAPI_signatureGetObjectV2) | **GET** /2/object/signature/{pkiSignatureID} | Retrieve an existing Signature


# **ObjectSignatureAPI_signatureCreateObjectV1**
```c
// Create a new Signature
//
// The endpoint allows to create one or many elements at once.
//
signature_create_object_v1_response_t* ObjectSignatureAPI_signatureCreateObjectV1(apiClient_t *apiClient, signature_create_object_v1_request_t * signature_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**signature_create_object_v1_request** | **[signature_create_object_v1_request_t](signature_create_object_v1_request.md) \*** |  | 

### Return type

[signature_create_object_v1_response_t](signature_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSignatureAPI_signatureDeleteObjectV1**
```c
// Delete an existing Signature
//
// 
//
signature_delete_object_v1_response_t* ObjectSignatureAPI_signatureDeleteObjectV1(apiClient_t *apiClient, int pkiSignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSignatureID** | **int \*** | The unique ID of the Signature | 

### Return type

[signature_delete_object_v1_response_t](signature_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSignatureAPI_signatureEditObjectV1**
```c
// Edit an existing Signature
//
// 
//
signature_edit_object_v1_response_t* ObjectSignatureAPI_signatureEditObjectV1(apiClient_t *apiClient, int pkiSignatureID, signature_edit_object_v1_request_t * signature_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSignatureID** | **int \*** | The unique ID of the Signature | 
**signature_edit_object_v1_request** | **[signature_edit_object_v1_request_t](signature_edit_object_v1_request.md) \*** |  | 

### Return type

[signature_edit_object_v1_response_t](signature_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectSignatureAPI_signatureGetObjectV2**
```c
// Retrieve an existing Signature
//
// 
//
signature_get_object_v2_response_t* ObjectSignatureAPI_signatureGetObjectV2(apiClient_t *apiClient, int pkiSignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiSignatureID** | **int \*** | The unique ID of the Signature | 

### Return type

[signature_get_object_v2_response_t](signature_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

