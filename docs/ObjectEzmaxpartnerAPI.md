# ObjectEzmaxpartnerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzmaxpartnerAPI_ezmaxpartnerGetCustomDeveloppersV1**](ObjectEzmaxpartnerAPI.md#ObjectEzmaxpartnerAPI_ezmaxpartnerGetCustomDeveloppersV1) | **GET** /1/object/ezmaxpartner/getCustomDeveloppers | Retrieve Ezmaxpartner custom developpers list
[**ObjectEzmaxpartnerAPI_ezmaxpartnerGetObjectV2**](ObjectEzmaxpartnerAPI.md#ObjectEzmaxpartnerAPI_ezmaxpartnerGetObjectV2) | **GET** /2/object/ezmaxpartner/{pkiEzmaxpartnerID} | Retrieve an existing Ezmaxpartner


# **ObjectEzmaxpartnerAPI_ezmaxpartnerGetCustomDeveloppersV1**
```c
// Retrieve Ezmaxpartner custom developpers list
//
ezmaxpartner_get_custom_developpers_v1_response_t* ObjectEzmaxpartnerAPI_ezmaxpartnerGetCustomDeveloppersV1(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxpartnerGetCustomDeveloppersV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_ezmaxpartnerGetCustomDeveloppersV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[ezmaxpartner_get_custom_developpers_v1_response_t](ezmaxpartner_get_custom_developpers_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzmaxpartnerAPI_ezmaxpartnerGetObjectV2**
```c
// Retrieve an existing Ezmaxpartner
//
// 
//
ezmaxpartner_get_object_v2_response_t* ObjectEzmaxpartnerAPI_ezmaxpartnerGetObjectV2(apiClient_t *apiClient, int *pkiEzmaxpartnerID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzmaxpartnerID** | **int \*** | The unique ID of the Ezmaxpartner | 

### Return type

[ezmaxpartner_get_object_v2_response_t](ezmaxpartner_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

