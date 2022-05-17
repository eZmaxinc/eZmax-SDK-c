# ObjectEzsignfoldersignerassociationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1) | **POST** /1/object/ezsignfoldersignerassociation | Create a new Ezsignfoldersignerassociation
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV2**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV2) | **POST** /2/object/ezsignfoldersignerassociation | Create a new Ezsignfoldersignerassociation
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1) | **DELETE** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Delete an existing Ezsignfoldersignerassociation
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationEditObjectV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationEditObjectV1) | **PUT** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Edit an existing Ezsignfoldersignerassociation
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getInPersonLoginUrl | Retrieve a Login Url to allow In-Person signing
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Retrieve an existing Ezsignfoldersignerassociation


# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1**
```c
// Create a new Ezsignfoldersignerassociation
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfoldersignerassociation_create_object_v1_response_t* ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfoldersignerassociation_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignfoldersignerassociation_create_object_v1_request** | **[list_t](ezsignfoldersignerassociation_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignfoldersignerassociation_create_object_v1_response_t](ezsignfoldersignerassociation_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV2**
```c
// Create a new Ezsignfoldersignerassociation
//
// The endpoint allows to create one or many elements at once.
//
ezsignfoldersignerassociation_create_object_v2_response_t* ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV2(apiClient_t *apiClient, ezsignfoldersignerassociation_create_object_v2_request_t * ezsignfoldersignerassociation_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsignfoldersignerassociation_create_object_v2_request** | **[ezsignfoldersignerassociation_create_object_v2_request_t](ezsignfoldersignerassociation_create_object_v2_request.md) \*** |  | 

### Return type

[ezsignfoldersignerassociation_create_object_v2_response_t](ezsignfoldersignerassociation_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1**
```c
// Delete an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_delete_object_v1_response_t* ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldersignerassociationID** | **int** |  | 

### Return type

[ezsignfoldersignerassociation_delete_object_v1_response_t](ezsignfoldersignerassociation_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationEditObjectV1**
```c
// Edit an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_edit_object_v1_response_t* ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationEditObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID, ezsignfoldersignerassociation_edit_object_v1_request_t * ezsignfoldersignerassociation_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldersignerassociationID** | **int** |  | 
**ezsignfoldersignerassociation_edit_object_v1_request** | **[ezsignfoldersignerassociation_edit_object_v1_request_t](ezsignfoldersignerassociation_edit_object_v1_request.md) \*** |  | 

### Return type

[ezsignfoldersignerassociation_edit_object_v1_response_t](ezsignfoldersignerassociation_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1**
```c
// Retrieve a Login Url to allow In-Person signing
//
// This endpoint returns a Login Url that can be used in a browser or embedded in an I-Frame to allow in person signing.  The signer Login type must be configured as In-Person.
//
ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t* ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldersignerassociationID** | **int** |  | 

### Return type

[ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t](ezsignfoldersignerassociation_get_in_person_login_url_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1**
```c
// Retrieve an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_get_object_v1_response_t* ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldersignerassociationID** | **int** |  | 

### Return type

[ezsignfoldersignerassociation_get_object_v1_response_t](ezsignfoldersignerassociation_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

