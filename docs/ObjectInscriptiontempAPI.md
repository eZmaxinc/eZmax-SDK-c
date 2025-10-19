# ObjectInscriptiontempAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationCount | Retrieve Communication count
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationList | Retrieve Communication list
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationrecipients | Retrieve Inscriptiontemp&#39;s Communicationrecipient
[**ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1) | **GET** /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationsenders | Retrieve Inscriptiontemp&#39;s Communicationsender
[**ObjectInscriptiontempAPI_inscriptiontempGetListV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempGetListV1) | **GET** /1/object/inscriptiontemp/getList | Retrieve Inscriptiontemp list
[**ObjectInscriptiontempAPI_inscriptiontempImportIntoEDMV1**](ObjectInscriptiontempAPI.md#ObjectInscriptiontempAPI_inscriptiontempImportIntoEDMV1) | **POST** /1/object/inscriptiontemp/{pkiInscriptiontempID}/importIntoEDM | Import attachments into the Inscriptiontemp


# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
inscriptiontemp_get_communication_count_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communication_count_v1_response_t](inscriptiontemp_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
inscriptiontemp_get_communication_list_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communication_list_v1_response_t](inscriptiontemp_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1**
```c
// Retrieve Inscriptiontemp's Communicationrecipient
//
// 
//
inscriptiontemp_get_communicationrecipients_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communicationrecipients_v1_response_t](inscriptiontemp_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1**
```c
// Retrieve Inscriptiontemp's Communicationsender
//
// 
//
inscriptiontemp_get_communicationsenders_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptiontempID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 

### Return type

[inscriptiontemp_get_communicationsenders_v1_response_t](inscriptiontemp_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempGetListV1**
```c
// Retrieve Inscriptiontemp list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eInscriptiontempStatus | Imported<br>Processed<br>Modified |
//
inscriptiontemp_get_list_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[inscriptiontemp_get_list_v1_response_t](inscriptiontemp_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptiontempAPI_inscriptiontempImportIntoEDMV1**
```c
// Import attachments into the Inscriptiontemp
//
// 
//
inscriptiontemp_import_into_edm_v1_response_t* ObjectInscriptiontempAPI_inscriptiontempImportIntoEDMV1(apiClient_t *apiClient, int *pkiInscriptiontempID, inscriptiontemp_import_into_edm_v1_request_t *inscriptiontemp_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptiontempID** | **int \*** |  | 
**inscriptiontemp_import_into_edm_v1_request** | **[inscriptiontemp_import_into_edm_v1_request_t](inscriptiontemp_import_into_edm_v1_request.md) \*** |  | 

### Return type

[inscriptiontemp_import_into_edm_v1_response_t](inscriptiontemp_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

