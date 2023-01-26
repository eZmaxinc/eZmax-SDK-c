# ObjectCommunicationAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectCommunicationAPI_communicationGetListV1**](ObjectCommunicationAPI.md#ObjectCommunicationAPI_communicationGetListV1) | **GET** /1/object/communication/getList | Retrieve Communication list
[**ObjectCommunicationAPI_communicationGetObjectV2**](ObjectCommunicationAPI.md#ObjectCommunicationAPI_communicationGetObjectV2) | **GET** /2/object/communication/{pkiCommunicationID} | Retrieve an existing Communication


# **ObjectCommunicationAPI_communicationGetListV1**
```c
// Retrieve Communication list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eCommunicationImportance | High<br>Normal<br>Low | | eCommunicationType | Email<br>Fax<br>Sms | | eCommunicationDirection | Inbound<br>Outbound |
//
communication_get_list_v1_response_t* ObjectCommunicationAPI_communicationGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_communicationGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[communication_get_list_v1_response_t](communication_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectCommunicationAPI_communicationGetObjectV2**
```c
// Retrieve an existing Communication
//
// 
//
communication_get_object_v2_response_t* ObjectCommunicationAPI_communicationGetObjectV2(apiClient_t *apiClient, int pkiCommunicationID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiCommunicationID** | **int** |  | 

### Return type

[communication_get_object_v2_response_t](communication_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

