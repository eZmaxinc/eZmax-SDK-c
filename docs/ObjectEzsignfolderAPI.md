# ObjectEzsignfolderAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1) | **POST** /1/object/ezsignfolder | Create a new Ezsignfolder
[**ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1) | **DELETE** /1/object/ezsignfolder/{pkiEzsignfolderID} | Delete an existing Ezsignfolder
[**ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID}/getChildren | Retrieve an existing Ezsignfolder&#39;s children IDs
[**ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID}/getFormsData | Retrieve an existing Ezsignfolder&#39;s forms data
[**ObjectEzsignfolderAPI_ezsignfolderGetListV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetListV1) | **GET** /1/object/ezsignfolder/getList | Retrieve Ezsignfolder list
[**ObjectEzsignfolderAPI_ezsignfolderGetObjectV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderGetObjectV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID} | Retrieve an existing Ezsignfolder
[**ObjectEzsignfolderAPI_ezsignfolderSendV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderSendV1) | **POST** /1/object/ezsignfolder/{pkiEzsignfolderID}/send | Send the Ezsignfolder to the signatories for signature
[**ObjectEzsignfolderAPI_ezsignfolderUnsendV1**](ObjectEzsignfolderAPI.md#ObjectEzsignfolderAPI_ezsignfolderUnsendV1) | **POST** /1/object/ezsignfolder/{pkiEzsignfolderID}/unsend | Unsend the Ezsignfolder


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
**pkiEzsignfolderID** | **int** |  | 

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
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
void ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1(apiClient_t *apiClient, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfolderID** | **int** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1**
```c
// Retrieve an existing Ezsignfolder's forms data
//
ezsignfolder_get_forms_data_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfolderID** | **int** |  | 

### Return type

[ezsignfolder_get_forms_data_v1_response_t](ezsignfolder_get_forms_data_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/zip

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderGetListV1**
```c
// Retrieve Ezsignfolder list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfolderStep | Unsent<br>Sent<br>PartiallySigned<br>Expired<br>Completed<br>Archived | | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignfolder_get_list_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderGetListV1(apiClient_t *apiClient, ezmax_api_definition_ezsignfolderGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition_ezsignfolderGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsignfolder_get_list_v1_response_t](ezsignfolder_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderGetObjectV1**
```c
// Retrieve an existing Ezsignfolder
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsignfolder_get_object_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderGetObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfolderID** | **int** |  | 

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
**pkiEzsignfolderID** | **int** |  | 
**ezsignfolder_send_v1_request** | **[ezsignfolder_send_v1_request_t](ezsignfolder_send_v1_request.md) \*** |  | 

### Return type

[ezsignfolder_send_v1_response_t](ezsignfolder_send_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignfolderAPI_ezsignfolderUnsendV1**
```c
// Unsend the Ezsignfolder
//
// Once an Ezsignfolder has been sent to signatories, it cannot be modified.  Using this endpoint, you can unsend the Ezsignfolder and make it modifiable again.  Signatories will receive an email informing them the signature process was aborted and they might receive a new invitation to sign.  ⚠️ Warning: Any signature previously made by signatories on \"Non-completed\" Ezsigndocuments will be lost.
//
ezsignfolder_unsend_v1_response_t* ObjectEzsignfolderAPI_ezsignfolderUnsendV1(apiClient_t *apiClient, int pkiEzsignfolderID, char * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignfolderID** | **int** |  | 
**body** | **char \*** |  | 

### Return type

[ezsignfolder_unsend_v1_response_t](ezsignfolder_unsend_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

