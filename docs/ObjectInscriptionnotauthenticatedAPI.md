# ObjectInscriptionnotauthenticatedAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedBatchDownloadV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedBatchDownloadV1) | **POST** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/batchDownload | Download multiples attachments from a Inscriptionnotauthenticated
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedFillInscriptionnotauthenticatedconditionV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedFillInscriptionnotauthenticatedconditionV1) | **POST** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/fillInscriptionnotauthenticatedcondition | Fills the Inscriptionnotauthenticatedcondition in the Inscriptionnotauthenticated
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetAttachmentsV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetAttachmentsV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getAttachments | Retrieve Inscriptionnotauthenticated&#39;s attachments
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationCount | Retrieve Communication count
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationList | Retrieve Communication list
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationrecipients | Retrieve Inscriptionnotauthenticated&#39;s Communicationrecipient
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationsenders | Retrieve Inscriptionnotauthenticated&#39;s Communicationsender
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetInscriptionnotauthenticatedconditionsV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetInscriptionnotauthenticatedconditionsV1) | **GET** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getInscriptionnotauthenticatedconditions | Retrieve Inscriptionnotauthenticated conditions
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetListV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetListV1) | **GET** /1/object/inscriptionnotauthenticated/getList | Retrieve Inscriptionnotauthenticated list
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetObjectV2**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetObjectV2) | **GET** /2/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID} | Retrieve an existing Inscriptionnotauthenticated
[**ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedImportIntoEDMV1**](ObjectInscriptionnotauthenticatedAPI.md#ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedImportIntoEDMV1) | **POST** /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/importIntoEDM | Import attachments into the Inscriptionnotauthenticated


# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedBatchDownloadV1**
```c
// Download multiples attachments from a Inscriptionnotauthenticated
//
binary_t** ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedBatchDownloadV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID, inscriptionnotauthenticated_batch_download_v1_request_t *inscriptionnotauthenticated_batch_download_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 
**inscriptionnotauthenticated_batch_download_v1_request** | **[inscriptionnotauthenticated_batch_download_v1_request_t](inscriptionnotauthenticated_batch_download_v1_request.md) \*** |  | 

### Return type

binary_t**



### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/zip, text/xml, application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedFillInscriptionnotauthenticatedconditionV1**
```c
// Fills the Inscriptionnotauthenticatedcondition in the Inscriptionnotauthenticated
//
// 
//
inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedFillInscriptionnotauthenticatedconditionV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID, inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 
**inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request** | **[inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request_t](inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_request.md) \*** |  | 

### Return type

[inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t](inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetAttachmentsV1**
```c
// Retrieve Inscriptionnotauthenticated's attachments
//
inscriptionnotauthenticated_get_attachments_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetAttachmentsV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_attachments_v1_response_t](inscriptionnotauthenticated_get_attachments_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1**
```c
// Retrieve Communication count
//
// 
//
inscriptionnotauthenticated_get_communication_count_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communication_count_v1_response_t](inscriptionnotauthenticated_get_communication_count_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1**
```c
// Retrieve Communication list
//
// 
//
inscriptionnotauthenticated_get_communication_list_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communication_list_v1_response_t](inscriptionnotauthenticated_get_communication_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1**
```c
// Retrieve Inscriptionnotauthenticated's Communicationrecipient
//
// 
//
inscriptionnotauthenticated_get_communicationrecipients_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communicationrecipients_v1_response_t](inscriptionnotauthenticated_get_communicationrecipients_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1**
```c
// Retrieve Inscriptionnotauthenticated's Communicationsender
//
// 
//
inscriptionnotauthenticated_get_communicationsenders_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_communicationsenders_v1_response_t](inscriptionnotauthenticated_get_communicationsenders_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetInscriptionnotauthenticatedconditionsV1**
```c
// Retrieve Inscriptionnotauthenticated conditions
//
// 
//
inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetInscriptionnotauthenticatedconditionsV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 

### Return type

[inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response_t](inscriptionnotauthenticated_get_inscriptionnotauthenticatedconditions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetListV1**
```c
// Retrieve Inscriptionnotauthenticated list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eInscriptionStep | TemporaryNotAuthenticated<br>ImportedInscription<br>Inscription<br>ModifiedInscription<br>ContractEnded<br>ExpiredInscription<br>Out-market<br>ImportedNotauthenticated<br>NotAuthenticated<br>ModifiedNotauthenticated<br>Authenticated |
//
inscriptionnotauthenticated_get_list_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_inscriptionnotauthenticatedGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_inscriptionnotauthenticatedGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[inscriptionnotauthenticated_get_list_v1_response_t](inscriptionnotauthenticated_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetObjectV2**
```c
// Retrieve an existing Inscriptionnotauthenticated
//
// 
//
inscriptionnotauthenticated_get_object_v2_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetObjectV2(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** | The unique ID of the Inscriptionnotauthenticated | 

### Return type

[inscriptionnotauthenticated_get_object_v2_response_t](inscriptionnotauthenticated_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedImportIntoEDMV1**
```c
// Import attachments into the Inscriptionnotauthenticated
//
// 
//
inscriptionnotauthenticated_import_into_edm_v1_response_t* ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedImportIntoEDMV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID, inscriptionnotauthenticated_import_into_edm_v1_request_t *inscriptionnotauthenticated_import_into_edm_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiInscriptionnotauthenticatedID** | **int \*** |  | 
**inscriptionnotauthenticated_import_into_edm_v1_request** | **[inscriptionnotauthenticated_import_into_edm_v1_request_t](inscriptionnotauthenticated_import_into_edm_v1_request.md) \*** |  | 

### Return type

[inscriptionnotauthenticated_import_into_edm_v1_response_t](inscriptionnotauthenticated_import_into_edm_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

