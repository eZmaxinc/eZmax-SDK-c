# ObjectAgentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectAgentAPI_agentGetAutocompleteV2**](ObjectAgentAPI.md#ObjectAgentAPI_agentGetAutocompleteV2) | **GET** /2/object/agent/getAutocomplete/{sSelector} | Retrieve Agents and IDs
[**ObjectAgentAPI_agentGetListV1**](ObjectAgentAPI.md#ObjectAgentAPI_agentGetListV1) | **GET** /1/object/agent/getList | Retrieve Agent list
[**ObjectAgentAPI_agentImportIntoEDMV1**](ObjectAgentAPI.md#ObjectAgentAPI_agentImportIntoEDMV1) | **POST** /1/object/agent/{pkiAgentID}/importIntoEDM | Import attachments into the Agent


# **ObjectAgentAPI_agentGetAutocompleteV2**
```c
// Retrieve Agents and IDs
//
// Get the list of Agent to be used in a dropdown or autocomplete control.
//
agent_get_autocomplete_v2_response_t* ObjectAgentAPI_agentGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_agentGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_agentGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_agentGetAutocompleteV2_sSelector_e** | The type of Agents to return | 
**eFilterActive** | **ezmax_api_definition__full_agentGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[agent_get_autocomplete_v2_response_t](agent_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAgentAPI_agentGetListV1**
```c
// Retrieve Agent list
//
// 
//
agent_get_list_v1_response_t* ObjectAgentAPI_agentGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_agentGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_agentGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[agent_get_list_v1_response_t](agent_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectAgentAPI_agentImportIntoEDMV1**
```c
// Import attachments into the Agent
//
// 
//
agent_import_into_edm_v1_response_t* ObjectAgentAPI_agentImportIntoEDMV1(apiClient_t *apiClient, int *pkiAgentID, agent_import_into_edm_v1_request_t *agent_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiAgentID** | **int \*** |  | 
**agent_import_into_edm_v1_request** | **[agent_import_into_edm_v1_request_t](agent_import_into_edm_v1_request.md) \*** |  | 

### Return type

[agent_import_into_edm_v1_response_t](agent_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

