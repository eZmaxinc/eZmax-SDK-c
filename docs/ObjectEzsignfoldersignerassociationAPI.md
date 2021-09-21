# ObjectEzsignfoldersignerassociationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1) | **POST** /1/object/ezsignfoldersignerassociation | Create a new Ezsignfoldersignerassociation
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1) | **DELETE** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Delete an existing Ezsignfoldersignerassociation
[**ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetChildrenV1**](ObjectEzsignfoldersignerassociationAPI.md#ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetChildrenV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getChildren | Retrieve an existing Ezsignfoldersignerassociation&#39;s children IDs
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

# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1**
```c
// Delete an existing Ezsignfoldersignerassociation
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

# **ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetChildrenV1**
```c
// Retrieve an existing Ezsignfoldersignerassociation's children IDs
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
void ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetChildrenV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfoldersignerassociationID** | **int** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
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
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
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

