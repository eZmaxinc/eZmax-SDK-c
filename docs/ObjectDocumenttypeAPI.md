# ObjectDocumenttypeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDocumenttypeAPI_documenttypeCreateObjectV1**](ObjectDocumenttypeAPI.md#ObjectDocumenttypeAPI_documenttypeCreateObjectV1) | **POST** /1/object/documenttype | Create a new Documenttype
[**ObjectDocumenttypeAPI_documenttypeDeleteObjectV1**](ObjectDocumenttypeAPI.md#ObjectDocumenttypeAPI_documenttypeDeleteObjectV1) | **DELETE** /1/object/documenttype/{pkiDocumenttypeID} | Delete an existing Documenttype
[**ObjectDocumenttypeAPI_documenttypeEditObjectV1**](ObjectDocumenttypeAPI.md#ObjectDocumenttypeAPI_documenttypeEditObjectV1) | **PUT** /1/object/documenttype/{pkiDocumenttypeID} | Edit an existing Documenttype
[**ObjectDocumenttypeAPI_documenttypeGetAutocompleteV2**](ObjectDocumenttypeAPI.md#ObjectDocumenttypeAPI_documenttypeGetAutocompleteV2) | **GET** /2/object/documenttype/getAutocomplete/{sSelector} | Retrieve Documenttypes and IDs
[**ObjectDocumenttypeAPI_documenttypeGetListV1**](ObjectDocumenttypeAPI.md#ObjectDocumenttypeAPI_documenttypeGetListV1) | **GET** /1/object/documenttype/getList | Retrieve Documenttype list
[**ObjectDocumenttypeAPI_documenttypeGetObjectV2**](ObjectDocumenttypeAPI.md#ObjectDocumenttypeAPI_documenttypeGetObjectV2) | **GET** /2/object/documenttype/{pkiDocumenttypeID} | Retrieve an existing Documenttype


# **ObjectDocumenttypeAPI_documenttypeCreateObjectV1**
```c
// Create a new Documenttype
//
// The endpoint allows to create one or many elements at once.
//
documenttype_create_object_v1_response_t* ObjectDocumenttypeAPI_documenttypeCreateObjectV1(apiClient_t *apiClient, documenttype_create_object_v1_request_t *documenttype_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**documenttype_create_object_v1_request** | **[documenttype_create_object_v1_request_t](documenttype_create_object_v1_request.md) \*** |  | 

### Return type

[documenttype_create_object_v1_response_t](documenttype_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypeAPI_documenttypeDeleteObjectV1**
```c
// Delete an existing Documenttype
//
// 
//
documenttype_delete_object_v1_response_t* ObjectDocumenttypeAPI_documenttypeDeleteObjectV1(apiClient_t *apiClient, int *pkiDocumenttypeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDocumenttypeID** | **int \*** | The unique ID of the Documenttype | 

### Return type

[documenttype_delete_object_v1_response_t](documenttype_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypeAPI_documenttypeEditObjectV1**
```c
// Edit an existing Documenttype
//
// 
//
documenttype_edit_object_v1_response_t* ObjectDocumenttypeAPI_documenttypeEditObjectV1(apiClient_t *apiClient, int *pkiDocumenttypeID, documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDocumenttypeID** | **int \*** | The unique ID of the Documenttype | 
**documenttype_edit_object_v1_request** | **[documenttype_edit_object_v1_request_t](documenttype_edit_object_v1_request.md) \*** |  | 

### Return type

[documenttype_edit_object_v1_response_t](documenttype_edit_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypeAPI_documenttypeGetAutocompleteV2**
```c
// Retrieve Documenttypes and IDs
//
// Get the list of Documenttype to be used in a dropdown or autocomplete control.
//
documenttype_get_autocomplete_v2_response_t* ObjectDocumenttypeAPI_documenttypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_documenttypeGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_documenttypeGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_documenttypeGetAutocompleteV2_sSelector_e** | The type of Documenttypes to return | 
**eFilterActive** | **ezmax_api_definition__full_documenttypeGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[documenttype_get_autocomplete_v2_response_t](documenttype_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypeAPI_documenttypeGetListV1**
```c
// Retrieve Documenttype list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---|  | Agentbroker<br>Buyercontract<br>Inscription<br>NotAuthenticated<br>Otherincome<br>RejectedOfferToPurchase | | eDocumenttypeEzcom | PromiseToPurchase<br>Annex<br>Modification<br>CounterOffer<br>Conditions<br>BankApproval<br>Other | | eDocumenttypePrivacydefault | Administration<br>Administrator<br>All<br>Creator<br>Inscriptor<br>Myself<br>Seller | | eDocumenttypeStatusdefault | Not required<br>Required | | eDocumenttypeSalebyowner | All<br>Yes<br>No | | eDocumenttypeSaledisplaybyrole | InscriptorSeller<br>Inscriptor<br>Seller | | eDocumenttypeTransactiontype | All<br>Inscriptor<br>InscriptorOnly<br>Seller<br>SellerOnly<br>InscriptorSeller | | eDocumenttypeRepossession | All<br>No<br>Yes |
//
documenttype_get_list_v1_response_t* ObjectDocumenttypeAPI_documenttypeGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_documenttypeGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_documenttypeGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[documenttype_get_list_v1_response_t](documenttype_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDocumenttypeAPI_documenttypeGetObjectV2**
```c
// Retrieve an existing Documenttype
//
// 
//
documenttype_get_object_v2_response_t* ObjectDocumenttypeAPI_documenttypeGetObjectV2(apiClient_t *apiClient, int *pkiDocumenttypeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDocumenttypeID** | **int \*** | The unique ID of the Documenttype | 

### Return type

[documenttype_get_object_v2_response_t](documenttype_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

