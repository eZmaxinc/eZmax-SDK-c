# ObjectBillingentityexternalAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectBillingentityexternalAPI_billingentityexternalGenerateFederationTokenV1**](ObjectBillingentityexternalAPI.md#ObjectBillingentityexternalAPI_billingentityexternalGenerateFederationTokenV1) | **POST** /1/object/billingentityexternal/{pkiBillingentityexternalID}/generateFederationToken | Generate a federation token
[**ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2**](ObjectBillingentityexternalAPI.md#ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2) | **GET** /2/object/billingentityexternal/getAutocomplete/{sSelector} | Retrieve Billingentityexternals and IDs


# **ObjectBillingentityexternalAPI_billingentityexternalGenerateFederationTokenV1**
```c
// Generate a federation token
//
// 
//
billingentityexternal_generate_federation_token_v1_response_t* ObjectBillingentityexternalAPI_billingentityexternalGenerateFederationTokenV1(apiClient_t *apiClient, int *pkiBillingentityexternalID, billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiBillingentityexternalID** | **int \*** |  | 
**billingentityexternal_generate_federation_token_v1_request** | **[billingentityexternal_generate_federation_token_v1_request_t](billingentityexternal_generate_federation_token_v1_request.md) \*** |  | 

### Return type

[billingentityexternal_generate_federation_token_v1_response_t](billingentityexternal_generate_federation_token_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2**
```c
// Retrieve Billingentityexternals and IDs
//
// Get the list of Billingentityexternal to be used in a dropdown or autocomplete control.
//
billingentityexternal_get_autocomplete_v2_response_t* ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e** | The type of Billingentityexternals to return | 
**eFilterActive** | **ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[billingentityexternal_get_autocomplete_v2_response_t](billingentityexternal_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

