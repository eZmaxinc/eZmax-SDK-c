# ModuleEzsignAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleEzsignAPI_ezsignSuggestSignersV1**](ModuleEzsignAPI.md#ModuleEzsignAPI_ezsignSuggestSignersV1) | **GET** /1/module/ezsign/suggestSigners | Suggest signers
[**ModuleEzsignAPI_ezsignSuggestTemplatesV1**](ModuleEzsignAPI.md#ModuleEzsignAPI_ezsignSuggestTemplatesV1) | **GET** /1/module/ezsign/suggestTemplates | Suggest templates


# **ModuleEzsignAPI_ezsignSuggestSignersV1**
```c
// Suggest signers
//
// Retrieve previously used Ezsignsigners and all users from the system
//
ezsign_suggest_signers_v1_response_t* ModuleEzsignAPI_ezsignSuggestSignersV1(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[ezsign_suggest_signers_v1_response_t](ezsign_suggest_signers_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ModuleEzsignAPI_ezsignSuggestTemplatesV1**
```c
// Suggest templates
//
// Retrieve Ezsigntemplates and Ezsigntemplatepackages that can be imported in a Ezsignfolder
//
ezsign_suggest_templates_v1_response_t* ModuleEzsignAPI_ezsignSuggestTemplatesV1(apiClient_t *apiClient, int fkiEzsignfoldertypeID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**fkiEzsignfoldertypeID** | **int \*** |  | [optional] 

### Return type

[ezsign_suggest_templates_v1_response_t](ezsign_suggest_templates_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

