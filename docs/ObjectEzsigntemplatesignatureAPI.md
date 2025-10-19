# ObjectEzsigntemplatesignatureAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2) | **POST** /2/object/ezsigntemplatesignature | Create a new Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV3**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV3) | **POST** /3/object/ezsigntemplatesignature | Create a new Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1) | **DELETE** /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Delete an existing Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2) | **PUT** /2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Edit an existing Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV3**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV3) | **PUT** /3/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Edit an existing Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3) | **GET** /3/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Retrieve an existing Ezsigntemplatesignature
[**ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV4**](ObjectEzsigntemplatesignatureAPI.md#ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV4) | **GET** /4/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID} | Retrieve an existing Ezsigntemplatesignature


# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2**
```c
// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigntemplatesignature_create_object_v2_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatesignature_create_object_v2_request** | **[ezsigntemplatesignature_create_object_v2_request_t](ezsigntemplatesignature_create_object_v2_request.md) \*** |  | 

### Return type

[ezsigntemplatesignature_create_object_v2_response_t](ezsigntemplatesignature_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV3**
```c
// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesignature_create_object_v3_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV3(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v3_request_t *ezsigntemplatesignature_create_object_v3_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatesignature_create_object_v3_request** | **[ezsigntemplatesignature_create_object_v3_request_t](ezsigntemplatesignature_create_object_v3_request.md) \*** |  | 

### Return type

[ezsigntemplatesignature_create_object_v3_response_t](ezsigntemplatesignature_create_object_v3_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1**
```c
// Delete an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_delete_object_v1_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 

### Return type

[ezsigntemplatesignature_delete_object_v1_response_t](ezsigntemplatesignature_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2**
```c
// Edit an existing Ezsigntemplatesignature
//
// Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigntemplatesignature_edit_object_v2_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID, ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 
**ezsigntemplatesignature_edit_object_v2_request** | **[ezsigntemplatesignature_edit_object_v2_request_t](ezsigntemplatesignature_edit_object_v2_request.md) \*** |  | 

### Return type

[ezsigntemplatesignature_edit_object_v2_response_t](ezsigntemplatesignature_edit_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV3**
```c
// Edit an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_edit_object_v3_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV3(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID, ezsigntemplatesignature_edit_object_v3_request_t *ezsigntemplatesignature_edit_object_v3_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 
**ezsigntemplatesignature_edit_object_v3_request** | **[ezsigntemplatesignature_edit_object_v3_request_t](ezsigntemplatesignature_edit_object_v3_request.md) \*** |  | 

### Return type

[ezsigntemplatesignature_edit_object_v3_response_t](ezsigntemplatesignature_edit_object_v3_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3**
```c
// Retrieve an existing Ezsigntemplatesignature
//
// Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigntemplatesignature_get_object_v3_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 

### Return type

[ezsigntemplatesignature_get_object_v3_response_t](ezsigntemplatesignature_get_object_v3_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV4**
```c
// Retrieve an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_get_object_v4_response_t* ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV4(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatesignatureID** | **int \*** |  | 

### Return type

[ezsigntemplatesignature_get_object_v4_response_t](ezsigntemplatesignature_get_object_v4_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

