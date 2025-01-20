# ObjectDomainAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDomainAPI_domainCreateObjectV1**](ObjectDomainAPI.md#ObjectDomainAPI_domainCreateObjectV1) | **POST** /1/object/domain | Create a new Domain
[**ObjectDomainAPI_domainDeleteObjectV1**](ObjectDomainAPI.md#ObjectDomainAPI_domainDeleteObjectV1) | **DELETE** /1/object/domain/{pkiDomainID} | Delete an existing Domain
[**ObjectDomainAPI_domainGetListV1**](ObjectDomainAPI.md#ObjectDomainAPI_domainGetListV1) | **GET** /1/object/domain/getList | Retrieve Domain list
[**ObjectDomainAPI_domainGetObjectV2**](ObjectDomainAPI.md#ObjectDomainAPI_domainGetObjectV2) | **GET** /2/object/domain/{pkiDomainID} | Retrieve an existing Domain


# **ObjectDomainAPI_domainCreateObjectV1**
```c
// Create a new Domain
//
// The endpoint allows to create one or many elements at once.
//
domain_create_object_v1_response_t* ObjectDomainAPI_domainCreateObjectV1(apiClient_t *apiClient, domain_create_object_v1_request_t *domain_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**domain_create_object_v1_request** | **[domain_create_object_v1_request_t](domain_create_object_v1_request.md) \*** |  | 

### Return type

[domain_create_object_v1_response_t](domain_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDomainAPI_domainDeleteObjectV1**
```c
// Delete an existing Domain
//
// 
//
common_response_t* ObjectDomainAPI_domainDeleteObjectV1(apiClient_t *apiClient, int *pkiDomainID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDomainID** | **int \*** | The unique ID of the Domain | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDomainAPI_domainGetListV1**
```c
// Retrieve Domain list
//
// 
//
domain_get_list_v1_response_t* ObjectDomainAPI_domainGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_domainGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**eOrderBy** | **ezmax_api_definition__full_domainGetListV1_eOrderBy_e** | Specify how you want the results to be sorted | [optional] 
**iRowMax** | **int \*** |  | [optional] 
**iRowOffset** | **int \*** |  | [optional] [default to 0]
**Accept_Language** | **header_accept_language_e** |  | [optional] 
**sFilter** | **char \*** |  | [optional] 

### Return type

[domain_get_list_v1_response_t](domain_get_list_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/vnd.openxmlformats-officedocument.spreadsheetml.sheet

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDomainAPI_domainGetObjectV2**
```c
// Retrieve an existing Domain
//
// 
//
domain_get_object_v2_response_t* ObjectDomainAPI_domainGetObjectV2(apiClient_t *apiClient, int *pkiDomainID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDomainID** | **int \*** | The unique ID of the Domain | 

### Return type

[domain_get_object_v2_response_t](domain_get_object_v2_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

