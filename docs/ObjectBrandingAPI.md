# ObjectBrandingAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBrandingAPI_brandingCreateObjectV2**](ObjectBrandingAPI.md#ObjectBrandingAPI_brandingCreateObjectV2) | **POST** /2/object/branding | Create a new Branding
[**ObjectBrandingAPI_brandingEditObjectV2**](ObjectBrandingAPI.md#ObjectBrandingAPI_brandingEditObjectV2) | **PUT** /2/object/branding/{pkiBrandingID} | Edit an existing Branding
[**ObjectBrandingAPI_brandingGetAutocompleteV2**](ObjectBrandingAPI.md#ObjectBrandingAPI_brandingGetAutocompleteV2) | **GET** /2/object/branding/getAutocomplete/{sSelector} | Retrieve Brandings and IDs
[**ObjectBrandingAPI_brandingGetListV1**](ObjectBrandingAPI.md#ObjectBrandingAPI_brandingGetListV1) | **GET** /1/object/branding/getList | Retrieve Branding list
[**ObjectBrandingAPI_brandingGetObjectV3**](ObjectBrandingAPI.md#ObjectBrandingAPI_brandingGetObjectV3) | **GET** /3/object/branding/{pkiBrandingID} | Retrieve an existing Branding


# **ObjectBrandingAPI_brandingCreateObjectV2**
```c
// Create a new Branding
//
// The endpoint allows to create one or many elements at once.
//
branding_create_object_v2_response_t* ObjectBrandingAPI_brandingCreateObjectV2(apiClient_t *apiClient, branding_create_object_v2_request_t *branding_create_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**branding_create_object_v2_request** | **[branding_create_object_v2_request_t](branding_create_object_v2_request.md) \*** |  | 

### Return type

[branding_create_object_v2_response_t](branding_create_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBrandingAPI_brandingEditObjectV2**
```c
// Edit an existing Branding
//
// 
//
common_response_t* ObjectBrandingAPI_brandingEditObjectV2(apiClient_t *apiClient, int *pkiBrandingID, branding_edit_object_v2_request_t *branding_edit_object_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBrandingID** | **int \*** |  | 
**branding_edit_object_v2_request** | **[branding_edit_object_v2_request_t](branding_edit_object_v2_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBrandingAPI_brandingGetAutocompleteV2**
```c
// Retrieve Brandings and IDs
//
// Get the list of Branding to be used in a dropdown or autocomplete control.
//
branding_get_autocomplete_v2_response_t* ObjectBrandingAPI_brandingGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_brandingGetAutocompleteV2_sSelector_e** | The type of Brandings to return | 
**eFilterActive** | **ezmax_api_definition__full_brandingGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[branding_get_autocomplete_v2_response_t](branding_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBrandingAPI_brandingGetListV1**
```c
// Retrieve Branding list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eBrandingLogo | Default<br>JPEG<br>PNG | | eBrandingLogointerface | Default<br>JPEG<br>PNG |
//
branding_get_list_v1_response_t* ObjectBrandingAPI_brandingGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_brandingGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[branding_get_list_v1_response_t](branding_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBrandingAPI_brandingGetObjectV3**
```c
// Retrieve an existing Branding
//
// 
//
branding_get_object_v3_response_t* ObjectBrandingAPI_brandingGetObjectV3(apiClient_t *apiClient, int *pkiBrandingID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBrandingID** | **int \*** |  | 

### Return type

[branding_get_object_v3_response_t](branding_get_object_v3_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

