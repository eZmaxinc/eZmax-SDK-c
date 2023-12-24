# ObjectApikeyAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectApikeyAPI_apikeyCreateObjectV2**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyCreateObjectV2) | **POST** /2/object/apikey | Create a new Apikey
[**ObjectApikeyAPI_apikeyEditObjectV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyEditObjectV1) | **PUT** /1/object/apikey/{pkiApikeyID} | Edit an existing Apikey
[**ObjectApikeyAPI_apikeyEditPermissionsV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyEditPermissionsV1) | **PUT** /1/object/apikey/{pkiApikeyID}/editPermissions | Edit multiple Permissions
[**ObjectApikeyAPI_apikeyGetCorsV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyGetCorsV1) | **GET** /1/object/apikey/{pkiApikeyID}/getCors | Retrieve an existing Apikey&#39;s cors
[**ObjectApikeyAPI_apikeyGetListV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyGetListV1) | **GET** /1/object/apikey/getList | Retrieve Apikey list
[**ObjectApikeyAPI_apikeyGetObjectV2**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyGetObjectV2) | **GET** /2/object/apikey/{pkiApikeyID} | Retrieve an existing Apikey
[**ObjectApikeyAPI_apikeyGetPermissionsV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyGetPermissionsV1) | **GET** /1/object/apikey/{pkiApikeyID}/getPermissions | Retrieve an existing Apikey&#39;s Permissions
[**ObjectApikeyAPI_apikeyGetSubnetsV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyGetSubnetsV1) | **GET** /1/object/apikey/{pkiApikeyID}/getSubnets | Retrieve an existing Apikey&#39;s subnets
[**ObjectApikeyAPI_apikeyRegenerateV1**](ObjectApikeyAPI.md#ObjectApikeyAPI_apikeyRegenerateV1) | **POST** /1/object/apikey/{pkiApikeyID}/regenerate | Regenerate the Apikey


# **ObjectApikeyAPI_apikeyCreateObjectV2**
```c
// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.
//
apikey_create_object_v2_response_t* ObjectApikeyAPI_apikeyCreateObjectV2(apiClient_t *apiClient, apikey_create_object_v2_request_t * apikey_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**apikey_create_object_v2_request** | **[apikey_create_object_v2_request_t](apikey_create_object_v2_request.md) \*** |  | 

### Return type

[apikey_create_object_v2_response_t](apikey_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyEditObjectV1**
```c
// Edit an existing Apikey
//
// 
//
apikey_edit_object_v1_response_t* ObjectApikeyAPI_apikeyEditObjectV1(apiClient_t *apiClient, int pkiApikeyID, apikey_edit_object_v1_request_t * apikey_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiApikeyID** | **int \*** | The unique ID of the Apikey | 
**apikey_edit_object_v1_request** | **[apikey_edit_object_v1_request_t](apikey_edit_object_v1_request.md) \*** |  | 

### Return type

[apikey_edit_object_v1_response_t](apikey_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyEditPermissionsV1**
```c
// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
apikey_edit_permissions_v1_response_t* ObjectApikeyAPI_apikeyEditPermissionsV1(apiClient_t *apiClient, int pkiApikeyID, apikey_edit_permissions_v1_request_t * apikey_edit_permissions_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiApikeyID** | **int \*** |  | 
**apikey_edit_permissions_v1_request** | **[apikey_edit_permissions_v1_request_t](apikey_edit_permissions_v1_request.md) \*** |  | 

### Return type

[apikey_edit_permissions_v1_response_t](apikey_edit_permissions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyGetCorsV1**
```c
// Retrieve an existing Apikey's cors
//
apikey_get_cors_v1_response_t* ObjectApikeyAPI_apikeyGetCorsV1(apiClient_t *apiClient, int pkiApikeyID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiApikeyID** | **int \*** |  | 

### Return type

[apikey_get_cors_v1_response_t](apikey_get_cors_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyGetListV1**
```c
// Retrieve Apikey list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---|
//
apikey_get_list_v1_response_t* ObjectApikeyAPI_apikeyGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_apikeyGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_apikeyGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[apikey_get_list_v1_response_t](apikey_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyGetObjectV2**
```c
// Retrieve an existing Apikey
//
// 
//
apikey_get_object_v2_response_t* ObjectApikeyAPI_apikeyGetObjectV2(apiClient_t *apiClient, int pkiApikeyID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiApikeyID** | **int \*** | The unique ID of the Apikey | 

### Return type

[apikey_get_object_v2_response_t](apikey_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyGetPermissionsV1**
```c
// Retrieve an existing Apikey's Permissions
//
apikey_get_permissions_v1_response_t* ObjectApikeyAPI_apikeyGetPermissionsV1(apiClient_t *apiClient, int pkiApikeyID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiApikeyID** | **int \*** |  | 

### Return type

[apikey_get_permissions_v1_response_t](apikey_get_permissions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyGetSubnetsV1**
```c
// Retrieve an existing Apikey's subnets
//
apikey_get_subnets_v1_response_t* ObjectApikeyAPI_apikeyGetSubnetsV1(apiClient_t *apiClient, int pkiApikeyID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiApikeyID** | **int \*** |  | 

### Return type

[apikey_get_subnets_v1_response_t](apikey_get_subnets_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectApikeyAPI_apikeyRegenerateV1**
```c
// Regenerate the Apikey
//
// 
//
apikey_regenerate_v1_response_t* ObjectApikeyAPI_apikeyRegenerateV1(apiClient_t *apiClient, int pkiApikeyID, apikey_regenerate_v1_request_t * apikey_regenerate_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiApikeyID** | **int \*** |  | 
**apikey_regenerate_v1_request** | **[apikey_regenerate_v1_request_t](apikey_regenerate_v1_request.md) \*** |  | 

### Return type

[apikey_regenerate_v1_response_t](apikey_regenerate_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

