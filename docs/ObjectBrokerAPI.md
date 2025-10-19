# ObjectBrokerAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBrokerAPI_brokerGetAutocompleteV2**](ObjectBrokerAPI.md#ObjectBrokerAPI_brokerGetAutocompleteV2) | **GET** /2/object/broker/getAutocomplete/{sSelector} | Retrieve Brokers and IDs
[**ObjectBrokerAPI_brokerGetListV1**](ObjectBrokerAPI.md#ObjectBrokerAPI_brokerGetListV1) | **GET** /1/object/broker/getList | Retrieve Broker list
[**ObjectBrokerAPI_brokerImportIntoEDMV1**](ObjectBrokerAPI.md#ObjectBrokerAPI_brokerImportIntoEDMV1) | **POST** /1/object/broker/{pkiBrokerID}/importIntoEDM | Import attachments into the Broker


# **ObjectBrokerAPI_brokerGetAutocompleteV2**
```c
// Retrieve Brokers and IDs
//
// Get the list of Broker to be used in a dropdown or autocomplete control.
//
broker_get_autocomplete_v2_response_t* ObjectBrokerAPI_brokerGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_brokerGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_brokerGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_brokerGetAutocompleteV2_sSelector_e** | The type of Brokers to return | 
**eFilterActive** | **ezmax_api_definition__full_brokerGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[broker_get_autocomplete_v2_response_t](broker_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBrokerAPI_brokerGetListV1**
```c
// Retrieve Broker list
//
// 
//
broker_get_list_v1_response_t* ObjectBrokerAPI_brokerGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_brokerGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_brokerGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[broker_get_list_v1_response_t](broker_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBrokerAPI_brokerImportIntoEDMV1**
```c
// Import attachments into the Broker
//
// 
//
broker_import_into_edm_v1_response_t* ObjectBrokerAPI_brokerImportIntoEDMV1(apiClient_t *apiClient, int *pkiBrokerID, broker_import_into_edm_v1_request_t *broker_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBrokerID** | **int \*** |  | 
**broker_import_into_edm_v1_request** | **[broker_import_into_edm_v1_request_t](broker_import_into_edm_v1_request.md) \*** |  | 

### Return type

[broker_import_into_edm_v1_response_t](broker_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

