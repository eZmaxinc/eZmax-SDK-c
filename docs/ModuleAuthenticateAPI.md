# ModuleAuthenticateAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ModuleAuthenticateAPI_authenticateAuthenticateV2**](ModuleAuthenticateAPI.md#ModuleAuthenticateAPI_authenticateAuthenticateV2) | **POST** /2/module/authenticate/authenticate/{eSessionType} | Authenticate a user


# **ModuleAuthenticateAPI_authenticateAuthenticateV2**
```c
// Authenticate a user
//
// This endpoint authenticates a user.
//
authenticate_authenticate_v2_response_t* ModuleAuthenticateAPI_authenticateAuthenticateV2(apiClient_t *apiClient, ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e eSessionType, authenticate_authenticate_v2_request_t * authenticate_authenticate_v2_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eSessionType** | **ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e** |  | 
**authenticate_authenticate_v2_request** | **[authenticate_authenticate_v2_request_t](authenticate_authenticate_v2_request.md) \*** |  | 

### Return type

[authenticate_authenticate_v2_response_t](authenticate_authenticate_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

