# ObjectBuyercontractAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationCount | Retrieve Communication count
[**ObjectBuyercontractAPI_buyercontractGetCommunicationListV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationListV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationList | Retrieve Communication list
[**ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationrecipients | Retrieve Buyercontract&#39;s Communicationrecipient
[**ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1) | **GET** /1/object/buyercontract/{pkiBuyercontractID}/getCommunicationsenders | Retrieve Buyercontract&#39;s Communicationsender
[**ObjectBuyercontractAPI_buyercontractGetListV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractGetListV1) | **GET** /1/object/buyercontract/getList | Retrieve Buyercontract list
[**ObjectBuyercontractAPI_buyercontractImportIntoEDMV1**](ObjectBuyercontractAPI.md#ObjectBuyercontractAPI_buyercontractImportIntoEDMV1) | **POST** /1/object/buyercontract/{pkiBuyercontractID}/importIntoEDM | Import attachments into the Buyercontract


# **ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
buyercontract_get_communication_count_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communication_count_v1_response_t](buyercontract_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBuyercontractAPI_buyercontractGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
buyercontract_get_communication_list_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communication_list_v1_response_t](buyercontract_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1**
```c
// Retrieve Buyercontract's Communicationrecipient
//
// 
//
buyercontract_get_communicationrecipients_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communicationrecipients_v1_response_t](buyercontract_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1**
```c
// Retrieve Buyercontract's Communicationsender
//
// 
//
buyercontract_get_communicationsenders_v1_response_t* ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiBuyercontractID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 

### Return type

[buyercontract_get_communicationsenders_v1_response_t](buyercontract_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBuyercontractAPI_buyercontractGetListV1**
```c
// Retrieve Buyercontract list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eBuyercontractStep | Imported<br>Active<br>Modified<br>ContractEnded<br>ExpiredContract<br>Bought | | eBuyercontractType | Rent<br>Sale<br>RentOrSale |
//
buyercontract_get_list_v1_response_t* ObjectBuyercontractAPI_buyercontractGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_buyercontractGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_buyercontractGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[buyercontract_get_list_v1_response_t](buyercontract_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBuyercontractAPI_buyercontractImportIntoEDMV1**
```c
// Import attachments into the Buyercontract
//
// 
//
buyercontract_import_into_edm_v1_response_t* ObjectBuyercontractAPI_buyercontractImportIntoEDMV1(apiClient_t *apiClient, int *pkiBuyercontractID, buyercontract_import_into_edm_v1_request_t *buyercontract_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBuyercontractID** | **int \*** |  | 
**buyercontract_import_into_edm_v1_request** | **[buyercontract_import_into_edm_v1_request_t](buyercontract_import_into_edm_v1_request.md) \*** |  | 

### Return type

[buyercontract_import_into_edm_v1_response_t](buyercontract_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

