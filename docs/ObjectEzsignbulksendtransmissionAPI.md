# ObjectEzsignbulksendtransmissionAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1**](ObjectEzsignbulksendtransmissionAPI.md#ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1) | **GET** /1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getCsvErrors | Retrieve an existing Ezsignbulksendtransmission&#39;s Csv containing errors
[**ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1**](ObjectEzsignbulksendtransmissionAPI.md#ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1) | **GET** /1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getEzsignsignaturesAutomatic | Retrieve an existing Ezsignbulksendtransmission&#39;s automatic Ezsignsignatures
[**ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1**](ObjectEzsignbulksendtransmissionAPI.md#ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1) | **GET** /1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getFormsData | Retrieve an existing Ezsignbulksendtransmission&#39;s forms data
[**ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV2**](ObjectEzsignbulksendtransmissionAPI.md#ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV2) | **GET** /2/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID} | Retrieve an existing Ezsignbulksendtransmission


# **ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1**
```c
// Retrieve an existing Ezsignbulksendtransmission's Csv containing errors
//
// 
//
char* ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetCsvErrorsV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendtransmissionID** | **int \*** |  | 

### Return type

char*



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/csv, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1**
```c
// Retrieve an existing Ezsignbulksendtransmission's automatic Ezsignsignatures
//
// Return the Ezsignsignatures that can be signed by the current user at the current step in the process
//
ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t* ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendtransmissionID** | **int \*** |  | 

### Return type

[ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response_t](ezsignbulksendtransmission_get_ezsignsignatures_automatic_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1**
```c
// Retrieve an existing Ezsignbulksendtransmission's forms data
//
// 
//
ezsignbulksendtransmission_get_forms_data_v1_response_t* ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetFormsDataV1(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendtransmissionID** | **int \*** |  | 

### Return type

[ezsignbulksendtransmission_get_forms_data_v1_response_t](ezsignbulksendtransmission_get_forms_data_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/zip

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV2**
```c
// Retrieve an existing Ezsignbulksendtransmission
//
// 
//
ezsignbulksendtransmission_get_object_v2_response_t* ObjectEzsignbulksendtransmissionAPI_ezsignbulksendtransmissionGetObjectV2(apiClient_t *apiClient, int *pkiEzsignbulksendtransmissionID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsignbulksendtransmissionID** | **int \*** |  | 

### Return type

[ezsignbulksendtransmission_get_object_v2_response_t](ezsignbulksendtransmission_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

