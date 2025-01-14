# ObjectContacttitleAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectContacttitleAPI_contacttitleGetAutocompleteV2**](ObjectContacttitleAPI.md#ObjectContacttitleAPI_contacttitleGetAutocompleteV2) | **GET** /2/object/contacttitle/getAutocomplete/{sSelector} | Retrieve Contacttitles and IDs


# **ObjectContacttitleAPI_contacttitleGetAutocompleteV2**
```c
// Retrieve Contacttitles and IDs
//
// Get the list of Contacttitle to be used in a dropdown or autocomplete control.
//
contacttitle_get_autocomplete_v2_response_t* ObjectContacttitleAPI_contacttitleGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_contacttitleGetAutocompleteV2_sSelector_e sSelector, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_contacttitleGetAutocompleteV2_sSelector_e** | The type of Contacttitles to return | 
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[contacttitle_get_autocomplete_v2_response_t](contacttitle_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

