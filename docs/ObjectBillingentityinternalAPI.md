# ObjectBillingentityinternalAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBillingentityinternalAPI_billingentityinternalCreateObjectV1**](ObjectBillingentityinternalAPI.md#ObjectBillingentityinternalAPI_billingentityinternalCreateObjectV1) | **POST** /1/object/billingentityinternal | Create a new Billingentityinternal
[**ObjectBillingentityinternalAPI_billingentityinternalDeleteObjectV1**](ObjectBillingentityinternalAPI.md#ObjectBillingentityinternalAPI_billingentityinternalDeleteObjectV1) | **DELETE** /1/object/billingentityinternal/{pkiBillingentityinternalID} | Delete an existing Billingentityinternal
[**ObjectBillingentityinternalAPI_billingentityinternalEditObjectV1**](ObjectBillingentityinternalAPI.md#ObjectBillingentityinternalAPI_billingentityinternalEditObjectV1) | **PUT** /1/object/billingentityinternal/{pkiBillingentityinternalID} | Edit an existing Billingentityinternal
[**ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2**](ObjectBillingentityinternalAPI.md#ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2) | **GET** /2/object/billingentityinternal/getAutocomplete/{sSelector} | Retrieve Billingentityinternals and IDs
[**ObjectBillingentityinternalAPI_billingentityinternalGetListV1**](ObjectBillingentityinternalAPI.md#ObjectBillingentityinternalAPI_billingentityinternalGetListV1) | **GET** /1/object/billingentityinternal/getList | Retrieve Billingentityinternal list
[**ObjectBillingentityinternalAPI_billingentityinternalGetObjectV2**](ObjectBillingentityinternalAPI.md#ObjectBillingentityinternalAPI_billingentityinternalGetObjectV2) | **GET** /2/object/billingentityinternal/{pkiBillingentityinternalID} | Retrieve an existing Billingentityinternal


# **ObjectBillingentityinternalAPI_billingentityinternalCreateObjectV1**
```c
// Create a new Billingentityinternal
//
// The endpoint allows to create one or many elements at once.
//
billingentityinternal_create_object_v1_response_t* ObjectBillingentityinternalAPI_billingentityinternalCreateObjectV1(apiClient_t *apiClient, billingentityinternal_create_object_v1_request_t * billingentityinternal_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**billingentityinternal_create_object_v1_request** | **[billingentityinternal_create_object_v1_request_t](billingentityinternal_create_object_v1_request.md) \*** |  | 

### Return type

[billingentityinternal_create_object_v1_response_t](billingentityinternal_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBillingentityinternalAPI_billingentityinternalDeleteObjectV1**
```c
// Delete an existing Billingentityinternal
//
// 
//
billingentityinternal_delete_object_v1_response_t* ObjectBillingentityinternalAPI_billingentityinternalDeleteObjectV1(apiClient_t *apiClient, int pkiBillingentityinternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBillingentityinternalID** | **int** | The unique ID of the Billingentityinternal | 

### Return type

[billingentityinternal_delete_object_v1_response_t](billingentityinternal_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBillingentityinternalAPI_billingentityinternalEditObjectV1**
```c
// Edit an existing Billingentityinternal
//
// 
//
billingentityinternal_edit_object_v1_response_t* ObjectBillingentityinternalAPI_billingentityinternalEditObjectV1(apiClient_t *apiClient, int pkiBillingentityinternalID, billingentityinternal_edit_object_v1_request_t * billingentityinternal_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBillingentityinternalID** | **int** | The unique ID of the Billingentityinternal | 
**billingentityinternal_edit_object_v1_request** | **[billingentityinternal_edit_object_v1_request_t](billingentityinternal_edit_object_v1_request.md) \*** |  | 

### Return type

[billingentityinternal_edit_object_v1_response_t](billingentityinternal_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2**
```c
// Retrieve Billingentityinternals and IDs
//
// Get the list of Billingentityinternal to be used in a dropdown or autocomplete control.
//
billingentityinternal_get_autocomplete_v2_response_t* ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_eFilterActive_e eFilterActive, char * sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_sSelector_e** | The type of Billingentityinternals to return | 
**eFilterActive** | **ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[billingentityinternal_get_autocomplete_v2_response_t](billingentityinternal_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBillingentityinternalAPI_billingentityinternalGetListV1**
```c
// Retrieve Billingentityinternal list
//
// 
//
billingentityinternal_get_list_v1_response_t* ObjectBillingentityinternalAPI_billingentityinternalGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_billingentityinternalGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_billingentityinternalGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[billingentityinternal_get_list_v1_response_t](billingentityinternal_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBillingentityinternalAPI_billingentityinternalGetObjectV2**
```c
// Retrieve an existing Billingentityinternal
//
// 
//
billingentityinternal_get_object_v2_response_t* ObjectBillingentityinternalAPI_billingentityinternalGetObjectV2(apiClient_t *apiClient, int pkiBillingentityinternalID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBillingentityinternalID** | **int** | The unique ID of the Billingentityinternal | 

### Return type

[billingentityinternal_get_object_v2_response_t](billingentityinternal_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

