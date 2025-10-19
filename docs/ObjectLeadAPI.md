# ObjectLeadAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectLeadAPI_leadGetListV1**](ObjectLeadAPI.md#ObjectLeadAPI_leadGetListV1) | **GET** /1/object/lead/getList | Retrieve Lead list
[**ObjectLeadAPI_leadImportIntoEDMV1**](ObjectLeadAPI.md#ObjectLeadAPI_leadImportIntoEDMV1) | **POST** /1/object/lead/{pkiLeadID}/importIntoEDM | Import attachments into the Lead


# **ObjectLeadAPI_leadGetListV1**
```c
// Retrieve Lead list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eLeadStatus | New<br>Dispatching<br>Assigned<br>Lost<br>Won |
//
lead_get_list_v1_response_t* ObjectLeadAPI_leadGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_leadGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_leadGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[lead_get_list_v1_response_t](lead_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectLeadAPI_leadImportIntoEDMV1**
```c
// Import attachments into the Lead
//
// 
//
lead_import_into_edm_v1_response_t* ObjectLeadAPI_leadImportIntoEDMV1(apiClient_t *apiClient, int *pkiLeadID, lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiLeadID** | **int \*** |  | 
**lead_import_into_edm_v1_request** | **[lead_import_into_edm_v1_request_t](lead_import_into_edm_v1_request.md) \*** |  | 

### Return type

[lead_import_into_edm_v1_response_t](lead_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

