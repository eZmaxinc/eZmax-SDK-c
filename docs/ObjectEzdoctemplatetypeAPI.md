# ObjectEzdoctemplatetypeAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2**](ObjectEzdoctemplatetypeAPI.md#ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2) | **GET** /2/object/ezdoctemplatetype/getAutocomplete/{sSelector} | Retrieve Ezdoctemplatetypes and IDs


# **ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2**
```c
// Retrieve Ezdoctemplatetypes and IDs
//
// Get the list of Ezdoctemplatetype to be used in a dropdown or autocomplete control.
//
ezdoctemplatetype_get_autocomplete_v2_response_t* ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**sSelector** | **ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_sSelector_e** | The type of Ezdoctemplatetypes to return | 
**eFilterActive** | **ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_eFilterActive_e** | Specify which results we want to display. | [optional] [default to &#39;Active&#39;]
**sQuery** | **char \*** | Allow to filter the returned results | [optional] 
**Accept_Language** | **header_accept_language_e** |  | [optional] 

### Return type

[ezdoctemplatetype_get_autocomplete_v2_response_t](ezdoctemplatetype_get_autocomplete_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

