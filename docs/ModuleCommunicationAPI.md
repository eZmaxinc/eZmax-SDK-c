# ModuleCommunicationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleCommunicationAPI_communicationGetCommunicationCountV1**](ModuleCommunicationAPI.md#ModuleCommunicationAPI_communicationGetCommunicationCountV1) | **GET** /1/module/communication/getCommunicationCount | Get the number of communication
[**ModuleCommunicationAPI_communicationGetCommunicationListV1**](ModuleCommunicationAPI.md#ModuleCommunicationAPI_communicationGetCommunicationListV1) | **GET** /1/module/communication/getCommunicationList | Retrieve communication list


# **ModuleCommunicationAPI_communicationGetCommunicationCountV1**
```c
// Get the number of communication
//
// Get the number of communication in specified module
//
communication_get_count_v1_response_t* ModuleCommunicationAPI_communicationGetCommunicationCountV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e eCommunicationModule, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eCommunicationModule** | **ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e** | Specify the requested module | 
**pkiEzsignfolderID** | **int** | The unique ID of the Ezsignfolder | [optional] 

### Return type

[communication_get_count_v1_response_t](communication_get_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModuleCommunicationAPI_communicationGetCommunicationListV1**
```c
// Retrieve communication list
//
// Retrieve communication list
//
communication_get_list_v1_response_t* ModuleCommunicationAPI_communicationGetCommunicationListV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e eCommunicationModule, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eCommunicationModule** | **ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e** | Specify the requested module | 
**pkiEzsignfolderID** | **int** | The unique ID of the Ezsignfolder | [optional] 

### Return type

[communication_get_list_v1_response_t](communication_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

