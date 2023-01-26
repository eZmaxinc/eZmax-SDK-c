# ModuleCommunicationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleCommunicationAPI_communicationGetCommunicationCountV1**](ModuleCommunicationAPI.md#ModuleCommunicationAPI_communicationGetCommunicationCountV1) | **GET** /1/module/communication/getCount | Retrieve Communication count


# **ModuleCommunicationAPI_communicationGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
communication_get_count_v1_response_t* ModuleCommunicationAPI_communicationGetCommunicationCountV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e eCommunicationObjecttype, int pkiEzsignfolderID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eCommunicationObjecttype** | **ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e** | The object type for the Communication | 
**pkiEzsignfolderID** | **int** | The unique ID of the Ezsignfolder | [optional] 

### Return type

[communication_get_count_v1_response_t](communication_get_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

