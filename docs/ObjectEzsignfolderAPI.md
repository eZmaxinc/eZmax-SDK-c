# ObjectEzsignfolderAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1) | **POST** /1/object/ezsignfolder | Create a new Ezsignfolder
[**ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1) | **DELETE** /1/object/ezsignfolder/{pkiEzsignfolderID} | Delete an existing Ezsignfolder
[**ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID}/getChildren | Retrieve an existing Ezsignfolder&#39;s children IDs
[**ObjectEzsignfolderAPI_ezsignfolderGetObjectV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetObjectV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID} | Retrieve an existing Ezsignfolder
[**ObjectEzsignfolderAPI_ezsignfolderSendV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderSendV1) | **POST** /1/object/ezsignfolder/{pkiEzsignfolderID}/send | Send the Ezsignfolder to the signatories for signature


# **ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1**
```c
// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfolder_create_object_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfolder_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**ezsignfolder_create_object_v1_request** | **[list_t](ezsignfolder_create_object_v1_request.md) \*** |  | 

### Return type

[ezsignfolder_create_object_v1_response_t](ezsignfolder_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1**
```c
// Delete an existing Ezsignfolder
//
ezsignfolder_delete_object_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**pkiEzsignfolderID** | **int** | The unique ID of the Ezsignfolder | 

### Return type

[ezsignfolder_delete_object_v1_response_t](ezsignfolder_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1**
```c
// Retrieve an existing Ezsignfolder's children IDs
//
void ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1(apiClient_t *apiClient, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**pkiEzsignfolderID** | **int** | The unique ID of the Ezsignfolder | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderGetObjectV1**
```c
// Retrieve an existing Ezsignfolder
//
ezsignfolder_get_object_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderGetObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**pkiEzsignfolderID** | **int** | The unique ID of the Ezsignfolder | 

### Return type

[ezsignfolder_get_object_v1_response_t](ezsignfolder_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderSendV1**
```c
// Send the Ezsignfolder to the signatories for signature
//
ezsignfolder_send_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderSendV1(apiClient_t *apiClient, int pkiEzsignfolderID, ezsignfolder_send_v1_request_t * ezsignfolder_send_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration | 
**pkiEzsignfolderID** | **int** | The unique ID of the Ezsignfolder | 
**ezsignfolder_send_v1_request** | **[ezsignfolder_send_v1_request_t](ezsignfolder_send_v1_request.md) \*** |  | 

### Return type

[ezsignfolder_send_v1_response_t](ezsignfolder_send_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

