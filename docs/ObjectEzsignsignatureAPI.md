# ObjectEzsignsignatureAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1) | **POST** /1/object/ezsignsignature | Create a new Ezsignsignature
[**ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV2**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV2) | **POST** /2/object/ezsignsignature | Create a new Ezsignsignature
[**ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1) | **DELETE** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Delete an existing Ezsignsignature
[**ObjectEzsignsignatureAPI_ezsignsignatureEditObjectV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureEditObjectV1) | **PUT** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Edit an existing Ezsignsignature
[**ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignatureattachmentV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignatureattachmentV1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID}/getEzsignsignatureattachment | Retrieve an existing Ezsignsignature&#39;s Ezsignsignatureattachments
[**ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignaturesAutomaticV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignaturesAutomaticV1) | **GET** /1/object/ezsignsignature/getEzsignsignaturesAutomatic | Retrieve all automatic Ezsignsignatures
[**ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV2**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV2) | **GET** /2/object/ezsignsignature/{pkiEzsignsignatureID} | Retrieve an existing Ezsignsignature
[**ObjectEzsignsignatureAPI_ezsignsignatureSignV1**](ObjectEzsignsignatureAPI.md#ObjectEzsignsignatureAPI_ezsignsignatureSignV1) | **POST** /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign | Sign the Ezsignsignature


# **ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1**
```c
// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignsignature_create_object_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1(apiClient_t *apiClient, list_t * ezsignsignature_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignsignature_create_object_v1_request** | **[list_t](ezsignsignature_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignsignature_create_object_v1_response_t](ezsignsignature_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV2**
```c
// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignature_create_object_v2_response_t* ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV2(apiClient_t *apiClient, ezsignsignature_create_object_v2_request_t * ezsignsignature_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignsignature_create_object_v2_request** | **[ezsignsignature_create_object_v2_request_t](ezsignsignature_create_object_v2_request.md) \*** |  | 

### Return type

[ezsignsignature_create_object_v2_response_t](ezsignsignature_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1**
```c
// Delete an existing Ezsignsignature
//
// 
//
ezsignsignature_delete_object_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignatureID** | **int** |  | 

### Return type

[ezsignsignature_delete_object_v1_response_t](ezsignsignature_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureEditObjectV1**
```c
// Edit an existing Ezsignsignature
//
// 
//
ezsignsignature_edit_object_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureEditObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID, ezsignsignature_edit_object_v1_request_t * ezsignsignature_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignatureID** | **int** |  | 
**ezsignsignature_edit_object_v1_request** | **[ezsignsignature_edit_object_v1_request_t](ezsignsignature_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignsignature_edit_object_v1_response_t](ezsignsignature_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignatureattachmentV1**
```c
// Retrieve an existing Ezsignsignature's Ezsignsignatureattachments
//
ezsignsignature_get_ezsignsignatureattachment_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignatureattachmentV1(apiClient_t *apiClient, int pkiEzsignsignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignatureID** | **int** |  | 

### Return type

[ezsignsignature_get_ezsignsignatureattachment_v1_response_t](ezsignsignature_get_ezsignsignatureattachment_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignaturesAutomaticV1**
```c
// Retrieve all automatic Ezsignsignatures
//
// Return all the Ezsignsignatures that can be signed by the current user
//
ezsignsignature_get_ezsignsignatures_automatic_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ezsignsignature_get_ezsignsignatures_automatic_v1_response_t](ezsignsignature_get_ezsignsignatures_automatic_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV2**
```c
// Retrieve an existing Ezsignsignature
//
// 
//
ezsignsignature_get_object_v2_response_t* ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV2(apiClient_t *apiClient, int pkiEzsignsignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignatureID** | **int** |  | 

### Return type

[ezsignsignature_get_object_v2_response_t](ezsignsignature_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignsignatureAPI_ezsignsignatureSignV1**
```c
// Sign the Ezsignsignature
//
// 
//
ezsignsignature_sign_v1_response_t* ObjectEzsignsignatureAPI_ezsignsignatureSignV1(apiClient_t *apiClient, int pkiEzsignsignatureID, ezsignsignature_sign_v1_request_t * ezsignsignature_sign_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignsignatureID** | **int** |  | 
**ezsignsignature_sign_v1_request** | **[ezsignsignature_sign_v1_request_t](ezsignsignature_sign_v1_request.md) \*** |  | 

### Return type

[ezsignsignature_sign_v1_response_t](ezsignsignature_sign_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

