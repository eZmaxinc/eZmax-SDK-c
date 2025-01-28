# ObjectAuthenticationexternalAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectAuthenticationexternalAPI_authenticationexternalCreateObjectV1**](ObjectAuthenticationexternalAPI.md#ObjectAuthenticationexternalAPI_authenticationexternalCreateObjectV1) | **POST** /1/object/authenticationexternal | Create a new Authenticationexternal
[**ObjectAuthenticationexternalAPI_authenticationexternalDeleteObjectV1**](ObjectAuthenticationexternalAPI.md#ObjectAuthenticationexternalAPI_authenticationexternalDeleteObjectV1) | **DELETE** /1/object/authenticationexternal/{pkiAuthenticationexternalID} | Delete an existing Authenticationexternal
[**ObjectAuthenticationexternalAPI_authenticationexternalEditObjectV1**](ObjectAuthenticationexternalAPI.md#ObjectAuthenticationexternalAPI_authenticationexternalEditObjectV1) | **PUT** /1/object/authenticationexternal/{pkiAuthenticationexternalID} | Edit an existing Authenticationexternal
[**ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2**](ObjectAuthenticationexternalAPI.md#ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2) | **GET** /2/object/authenticationexternal/getAutocomplete/{sSelector} | Retrieve Authenticationexternals and IDs
[**ObjectAuthenticationexternalAPI_authenticationexternalGetListV1**](ObjectAuthenticationexternalAPI.md#ObjectAuthenticationexternalAPI_authenticationexternalGetListV1) | **GET** /1/object/authenticationexternal/getList | Retrieve Authenticationexternal list
[**ObjectAuthenticationexternalAPI_authenticationexternalGetObjectV2**](ObjectAuthenticationexternalAPI.md#ObjectAuthenticationexternalAPI_authenticationexternalGetObjectV2) | **GET** /2/object/authenticationexternal/{pkiAuthenticationexternalID} | Retrieve an existing Authenticationexternal
[**ObjectAuthenticationexternalAPI_authenticationexternalResetAuthorizationV1**](ObjectAuthenticationexternalAPI.md#ObjectAuthenticationexternalAPI_authenticationexternalResetAuthorizationV1) | **POST** /1/object/authenticationexternal/{pkiAuthenticationexternalID}/resetAuthorization | Reset the Authenticationexternal authorization


# **ObjectAuthenticationexternalAPI_authenticationexternalCreateObjectV1**
```c
// Create a new Authenticationexternal
//
// The endpoint allows to create one or many elements at once.
//
authenticationexternal_create_object_v1_response_t* ObjectAuthenticationexternalAPI_authenticationexternalCreateObjectV1(apiClient_t *apiClient, authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**authenticationexternal_create_object_v1_request** | **[authenticationexternal_create_object_v1_request_t](authenticationexternal_create_object_v1_request.md) \*** |  | 

### Return type

[authenticationexternal_create_object_v1_response_t](authenticationexternal_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAuthenticationexternalAPI_authenticationexternalDeleteObjectV1**
```c
// Delete an existing Authenticationexternal
//
// 
//
authenticationexternal_delete_object_v1_response_t* ObjectAuthenticationexternalAPI_authenticationexternalDeleteObjectV1(apiClient_t *apiClient, int *pkiAuthenticationexternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAuthenticationexternalID** | **int \*** | The unique ID of the Authenticationexternal | 

### Return type

[authenticationexternal_delete_object_v1_response_t](authenticationexternal_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAuthenticationexternalAPI_authenticationexternalEditObjectV1**
```c
// Edit an existing Authenticationexternal
//
// 
//
authenticationexternal_edit_object_v1_response_t* ObjectAuthenticationexternalAPI_authenticationexternalEditObjectV1(apiClient_t *apiClient, int *pkiAuthenticationexternalID, authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAuthenticationexternalID** | **int \*** | The unique ID of the Authenticationexternal | 
**authenticationexternal_edit_object_v1_request** | **[authenticationexternal_edit_object_v1_request_t](authenticationexternal_edit_object_v1_request.md) \*** |  | 

### Return type

[authenticationexternal_edit_object_v1_response_t](authenticationexternal_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2**
```c
// Retrieve Authenticationexternals and IDs
//
// Get the list of Authenticationexternal to be used in a dropdown or autocomplete control.
//
authenticationexternal_get_autocomplete_v2_response_t* ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_sSelector_e** | The type of Authenticationexternals to return | 
**eFilterActive** | **ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[authenticationexternal_get_autocomplete_v2_response_t](authenticationexternal_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAuthenticationexternalAPI_authenticationexternalGetListV1**
```c
// Retrieve Authenticationexternal list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eAuthenticationexternalType | Salesforce<br>SalesforceSandbox |
//
authenticationexternal_get_list_v1_response_t* ObjectAuthenticationexternalAPI_authenticationexternalGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_authenticationexternalGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_authenticationexternalGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[authenticationexternal_get_list_v1_response_t](authenticationexternal_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAuthenticationexternalAPI_authenticationexternalGetObjectV2**
```c
// Retrieve an existing Authenticationexternal
//
// 
//
authenticationexternal_get_object_v2_response_t* ObjectAuthenticationexternalAPI_authenticationexternalGetObjectV2(apiClient_t *apiClient, int *pkiAuthenticationexternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAuthenticationexternalID** | **int \*** | The unique ID of the Authenticationexternal | 

### Return type

[authenticationexternal_get_object_v2_response_t](authenticationexternal_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAuthenticationexternalAPI_authenticationexternalResetAuthorizationV1**
```c
// Reset the Authenticationexternal authorization
//
// 
//
authenticationexternal_reset_authorization_v1_response_t* ObjectAuthenticationexternalAPI_authenticationexternalResetAuthorizationV1(apiClient_t *apiClient, int *pkiAuthenticationexternalID, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAuthenticationexternalID** | **int \*** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[authenticationexternal_reset_authorization_v1_response_t](authenticationexternal_reset_authorization_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

