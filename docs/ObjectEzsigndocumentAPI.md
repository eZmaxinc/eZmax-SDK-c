# ObjectEzsigndocumentAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1) | **POST** /1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate | Apply an Ezsign Template to the Ezsigndocument.
[**ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV2**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV2) | **POST** /2/object/ezsigndocument/{pkiEzsigndocumentID}/applyEzsigntemplate | Apply an Ezsign Template to the Ezsigndocument.
[**ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1) | **POST** /1/object/ezsigndocument | Create a new Ezsigndocument
[**ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1) | **DELETE** /1/object/ezsigndocument/{pkiEzsigndocumentID} | Delete an existing Ezsigndocument
[**ObjectEzsigndocumentAPI_ezsigndocumentGetChildrenV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetChildrenV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getChildren | Retrieve an existing Ezsigndocument&#39;s children IDs
[**ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getDownloadUrl/{eDocumentType} | Retrieve a URL to download documents.
[**ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignpagesV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignpagesV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignpages | Retrieve an existing Ezsigndocument&#39;s Ezsignpages
[**ObjectEzsigndocumentAPI_ezsigndocumentGetFormDataV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetFormDataV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getFormData | Retrieve an existing Ezsigndocument&#39;s Form Data
[**ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID} | Retrieve an existing Ezsigndocument
[**ObjectEzsigndocumentAPI_ezsigndocumentGetWordsPositionsV1**](ObjectEzsigndocumentAPI.md#ObjectEzsigndocumentAPI_ezsigndocumentGetWordsPositionsV1) | **POST** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getWordsPositions | Retrieve positions X,Y of given words from a Ezsigndocument


# **ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1**
```c
// Apply an Ezsign Template to the Ezsigndocument.
//
// This function is deprecated. Please use *applyEzsigntemplate* instead which is doing the same thing but with a capital \"E\" to normalize the nomenclature.  This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1(apiClient_t *apiClient, int pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplate_v1_request_t * ezsigndocument_apply_ezsigntemplate_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 
**ezsigndocument_apply_ezsigntemplate_v1_request** | **[ezsigndocument_apply_ezsigntemplate_v1_request_t](ezsigndocument_apply_ezsigntemplate_v1_request.md) \*** |  | 

### Return type

[ezsigndocument_apply_ezsigntemplate_v1_response_t](ezsigndocument_apply_ezsigntemplate_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV2**
```c
// Apply an Ezsign Template to the Ezsigndocument.
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v2_response_t* ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV2(apiClient_t *apiClient, int pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplate_v2_request_t * ezsigndocument_apply_ezsigntemplate_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 
**ezsigndocument_apply_ezsigntemplate_v2_request** | **[ezsigndocument_apply_ezsigntemplate_v2_request_t](ezsigndocument_apply_ezsigntemplate_v2_request.md) \*** |  | 

### Return type

[ezsigndocument_apply_ezsigntemplate_v2_response_t](ezsigndocument_apply_ezsigntemplate_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1**
```c
// Create a new Ezsigndocument
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsigndocument_create_object_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1(apiClient_t *apiClient, list_t * ezsigndocument_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**ezsigndocument_create_object_v1_request** | **[list_t](ezsigndocument_create_object_v1_request.md) \*** |  | 

### Return type

[ezsigndocument_create_object_v1_response_t](ezsigndocument_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1**
```c
// Delete an existing Ezsigndocument
//
ezsigndocument_delete_object_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 

### Return type

[ezsigndocument_delete_object_v1_response_t](ezsigndocument_delete_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentGetChildrenV1**
```c
// Retrieve an existing Ezsigndocument's children IDs
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
void ObjectEzsigndocumentAPI_ezsigndocumentGetChildrenV1(apiClient_t *apiClient, int pkiEzsigndocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 

### Return type

void

### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1**
```c
// Retrieve a URL to download documents.
//
// This endpoint returns URLs to different files that can be downloaded during the signing process.  These links will expire after 5 minutes so the download of the file should be made soon after retrieving the link.
//
ezsigndocument_get_download_url_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1(apiClient_t *apiClient, int pkiEzsigndocumentID, ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e eDocumentType);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 
**eDocumentType** | **ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e** | The type of document to retrieve.  1. **Initial** Is the initial document before any signature were applied. 2. **Signed** Is the final document once all signatures were applied. 3. **Proofdocument** Is the evidence report. 4. **Proof** Is the complete evidence archive including all of the above and more.  | 

### Return type

[ezsigndocument_get_download_url_v1_response_t](ezsigndocument_get_download_url_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignpagesV1**
```c
// Retrieve an existing Ezsigndocument's Ezsignpages
//
ezsigndocument_get_ezsignpages_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignpagesV1(apiClient_t *apiClient, int pkiEzsigndocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 

### Return type

[ezsigndocument_get_ezsignpages_v1_response_t](ezsigndocument_get_ezsignpages_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentGetFormDataV1**
```c
// Retrieve an existing Ezsigndocument's Form Data
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsigndocument_get_form_data_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentGetFormDataV1(apiClient_t *apiClient, int pkiEzsigndocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 

### Return type

[ezsigndocument_get_form_data_v1_response_t](ezsigndocument_get_form_data_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/zip, text/csv

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1**
```c
// Retrieve an existing Ezsigndocument
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsigndocument_get_object_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 

### Return type

[ezsigndocument_get_object_v1_response_t](ezsigndocument_get_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectEzsigndocumentAPI_ezsigndocumentGetWordsPositionsV1**
```c
// Retrieve positions X,Y of given words from a Ezsigndocument
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsigndocument_get_words_positions_v1_response_t* ObjectEzsigndocumentAPI_ezsigndocumentGetWordsPositionsV1(apiClient_t *apiClient, int pkiEzsigndocumentID, ezsigndocument_get_words_positions_v1_request_t * ezsigndocument_get_words_positions_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiEzsigndocumentID** | **int** |  | 
**ezsigndocument_get_words_positions_v1_request** | **[ezsigndocument_get_words_positions_v1_request_t](ezsigndocument_get_words_positions_v1_request.md) \*** |  | 

### Return type

[ezsigndocument_get_words_positions_v1_response_t](ezsigndocument_get_words_positions_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

