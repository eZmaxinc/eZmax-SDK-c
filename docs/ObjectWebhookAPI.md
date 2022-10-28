# ObjectWebhookAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectWebhookAPI_webhookCreateObjectV1**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookCreateObjectV1) | **POST** /1/object/webhook | Create a new Webhook
[**ObjectWebhookAPI_webhookDeleteObjectV1**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookDeleteObjectV1) | **DELETE** /1/object/webhook/{pkiWebhookID} | Delete an existing Webhook
[**ObjectWebhookAPI_webhookEditObjectV1**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookEditObjectV1) | **PUT** /1/object/webhook/{pkiWebhookID} | Edit an existing Webhook
[**ObjectWebhookAPI_webhookGetHistoryV1**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookGetHistoryV1) | **GET** /1/object/webhook/{pkiWebhookID}/getHistory | Retrieve the logs for recent Webhook calls
[**ObjectWebhookAPI_webhookGetListV1**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookGetListV1) | **GET** /1/object/webhook/getList | Retrieve Webhook list
[**ObjectWebhookAPI_webhookGetObjectV1**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookGetObjectV1) | **GET** /1/object/webhook/{pkiWebhookID} | Retrieve an existing Webhook
[**ObjectWebhookAPI_webhookGetObjectV2**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookGetObjectV2) | **GET** /2/object/webhook/{pkiWebhookID} | Retrieve an existing Webhook
[**ObjectWebhookAPI_webhookTestV1**](ObjectWebhookAPI.md#ObjectWebhookAPI_webhookTestV1) | **POST** /1/object/webhook/{pkiWebhookID}/test | Test the Webhook by calling the Url


# **ObjectWebhookAPI_webhookCreateObjectV1**
```c
// Create a new Webhook
//
// The endpoint allows to create one or many elements at once.
//
webhook_create_object_v1_response_t* ObjectWebhookAPI_webhookCreateObjectV1(apiClient_t *apiClient, webhook_create_object_v1_request_t * webhook_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**webhook_create_object_v1_request** | **[webhook_create_object_v1_request_t](webhook_create_object_v1_request.md) \*** |  | 

### Return type

[webhook_create_object_v1_response_t](webhook_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectWebhookAPI_webhookDeleteObjectV1**
```c
// Delete an existing Webhook
//
// 
//
webhook_delete_object_v1_response_t* ObjectWebhookAPI_webhookDeleteObjectV1(apiClient_t *apiClient, int pkiWebhookID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiWebhookID** | **int** |  | 

### Return type

[webhook_delete_object_v1_response_t](webhook_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectWebhookAPI_webhookEditObjectV1**
```c
// Edit an existing Webhook
//
// 
//
webhook_edit_object_v1_response_t* ObjectWebhookAPI_webhookEditObjectV1(apiClient_t *apiClient, int pkiWebhookID, webhook_edit_object_v1_request_t * webhook_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiWebhookID** | **int** |  | 
**webhook_edit_object_v1_request** | **[webhook_edit_object_v1_request_t](webhook_edit_object_v1_request.md) \*** |  | 

### Return type

[webhook_edit_object_v1_response_t](webhook_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectWebhookAPI_webhookGetHistoryV1**
```c
// Retrieve the logs for recent Webhook calls
//
// 
//
webhook_get_history_v1_response_t* ObjectWebhookAPI_webhookGetHistoryV1(apiClient_t *apiClient, int pkiWebhookID, ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e eWebhookHistoryinterval);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiWebhookID** | **int** |  | 
**eWebhookHistoryinterval** | **ezmax_api_definition__full_webhookGetHistoryV1_eWebhookHistoryinterval_e** | The number of days to return | 

### Return type

[webhook_get_history_v1_response_t](webhook_get_history_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectWebhookAPI_webhookGetListV1**
```c
// Retrieve Webhook list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eWebhookModule | Ezsign<br>Management | | eWebhookEzsignevent | DocumentCompleted<br>FolderCompleted | | eWebhookManagementevent | UserCreated |
//
webhook_get_list_v1_response_t* ObjectWebhookAPI_webhookGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_webhookGetListV1_eOrderBy_e eOrderBy, int iRowMax, int iRowOffset, header_accept_language_e Accept_Language, char * sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_webhookGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int** |  | [optional] 
**iRowOffset** | **int** |  | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[webhook_get_list_v1_response_t](webhook_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectWebhookAPI_webhookGetObjectV1**
```c
// Retrieve an existing Webhook
//
// 
//
webhook_get_object_v1_response_t* ObjectWebhookAPI_webhookGetObjectV1(apiClient_t *apiClient, int pkiWebhookID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiWebhookID** | **int** |  | 

### Return type

[webhook_get_object_v1_response_t](webhook_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectWebhookAPI_webhookGetObjectV2**
```c
// Retrieve an existing Webhook
//
// 
//
webhook_get_object_v2_response_t* ObjectWebhookAPI_webhookGetObjectV2(apiClient_t *apiClient, int pkiWebhookID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiWebhookID** | **int** |  | 

### Return type

[webhook_get_object_v2_response_t](webhook_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectWebhookAPI_webhookTestV1**
```c
// Test the Webhook by calling the Url
//
// 
//
webhook_test_v1_response_t* ObjectWebhookAPI_webhookTestV1(apiClient_t *apiClient, int pkiWebhookID, object_t * body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiWebhookID** | **int** |  | 
**body** | **[object_t](object.md) \*** |  | 

### Return type

[webhook_test_v1_response_t](webhook_test_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

