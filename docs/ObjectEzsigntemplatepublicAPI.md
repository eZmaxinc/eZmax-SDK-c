# ObjectEzsigntemplatepublicAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateEzsignfolderV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateEzsignfolderV1) | **POST** /1/object/ezsigntemplatepublic/createEzsignfolder | Create an Ezsignfolder
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateObjectV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateObjectV1) | **POST** /1/object/ezsigntemplatepublic | Create a new Ezsigntemplatepublic
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicEditObjectV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicEditObjectV1) | **PUT** /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID} | Edit an existing Ezsigntemplatepublic
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1) | **POST** /1/object/ezsigntemplatepublic/getEzsigntemplatepublicDetails | Retrieve the Ezsigntemplatepublic details
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetFormsDataV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetFormsDataV1) | **GET** /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/getFormsData | Retrieve an existing Ezsigntemplatepublic&#39;s forms data
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetListV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetListV1) | **GET** /1/object/ezsigntemplatepublic/getList | Retrieve Ezsigntemplatepublic list
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetObjectV2**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetObjectV2) | **GET** /2/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID} | Retrieve an existing Ezsigntemplatepublic
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetLimitExceededCounterV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetLimitExceededCounterV1) | **POST** /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/resetLimitExceededCounter | Reset the limit exceeded counter
[**ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetUrlV1**](ObjectEzsigntemplatepublicAPI.md#ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetUrlV1) | **POST** /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/resetUrl | Reset the Ezsigntemplatepublic url


# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateEzsignfolderV1**
```c
// Create an Ezsignfolder
//
// Create an Ezsignfolder
//
ezsigntemplatepublic_create_ezsignfolder_v1_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateEzsignfolderV1(apiClient_t *apiClient, ezsigntemplatepublic_create_ezsignfolder_v1_request_t *ezsigntemplatepublic_create_ezsignfolder_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatepublic_create_ezsignfolder_v1_request** | **[ezsigntemplatepublic_create_ezsignfolder_v1_request_t](ezsigntemplatepublic_create_ezsignfolder_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepublic_create_ezsignfolder_v1_response_t](ezsigntemplatepublic_create_ezsignfolder_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateObjectV1**
```c
// Create a new Ezsigntemplatepublic
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepublic_create_object_v1_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatepublic_create_object_v1_request** | **[ezsigntemplatepublic_create_object_v1_request_t](ezsigntemplatepublic_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepublic_create_object_v1_response_t](ezsigntemplatepublic_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicEditObjectV1**
```c
// Edit an existing Ezsigntemplatepublic
//
// 
//
common_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID, ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepublicID** | **int \*** | The unique ID of the Ezsigntemplatepublic | 
**ezsigntemplatepublic_edit_object_v1_request** | **[ezsigntemplatepublic_edit_object_v1_request_t](ezsigntemplatepublic_edit_object_v1_request.md) \*** |  | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1**
```c
// Retrieve the Ezsigntemplatepublic details
//
// Retrieve the Ezsigntemplatepublic details
//
ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetEzsigntemplatepublicDetailsV1(apiClient_t *apiClient, ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request** | **[ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request_t](ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_request.md) \*** |  | 

### Return type

[ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_t](ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetFormsDataV1**
```c
// Retrieve an existing Ezsigntemplatepublic's forms data
//
// 
//
ezsigntemplatepublic_get_forms_data_v1_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetFormsDataV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepublicID** | **int \*** |  | 

### Return type

[ezsigntemplatepublic_get_forms_data_v1_response_t](ezsigntemplatepublic_get_forms_data_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/zip

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetListV1**
```c
// Retrieve Ezsigntemplatepublic list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsigntemplatepublicLimittype | Hour<br>Day<br>Month<br>Total |
//
ezsigntemplatepublic_get_list_v1_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezsigntemplatepublicGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezsigntemplatepublic_get_list_v1_response_t](ezsigntemplatepublic_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetObjectV2**
```c
// Retrieve an existing Ezsigntemplatepublic
//
// 
//
ezsigntemplatepublic_get_object_v2_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepublicID** | **int \*** | The unique ID of the Ezsigntemplatepublic | 

### Return type

[ezsigntemplatepublic_get_object_v2_response_t](ezsigntemplatepublic_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetLimitExceededCounterV1**
```c
// Reset the limit exceeded counter
//
// 
//
ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetLimitExceededCounterV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepublicID** | **int \*** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_t](ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetUrlV1**
```c
// Reset the Ezsigntemplatepublic url
//
// 
//
ezsigntemplatepublic_reset_url_v1_response_t* ObjectEzsigntemplatepublicAPI_ezsigntemplatepublicResetUrlV1(apiClient_t *apiClient, int *pkiEzsigntemplatepublicID, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigntemplatepublicID** | **int \*** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[ezsigntemplatepublic_reset_url_v1_response_t](ezsigntemplatepublic_reset_url_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

