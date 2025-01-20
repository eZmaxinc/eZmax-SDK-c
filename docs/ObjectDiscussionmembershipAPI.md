# ObjectDiscussionmembershipAPI

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Method | HTTP request | Description
------------- | ------------- | -------------
[**ObjectDiscussionmembershipAPI_discussionmembershipCreateObjectV1**](ObjectDiscussionmembershipAPI.md#ObjectDiscussionmembershipAPI_discussionmembershipCreateObjectV1) | **POST** /1/object/discussionmembership | Create a new Discussionmembership
[**ObjectDiscussionmembershipAPI_discussionmembershipDeleteObjectV1**](ObjectDiscussionmembershipAPI.md#ObjectDiscussionmembershipAPI_discussionmembershipDeleteObjectV1) | **DELETE** /1/object/discussionmembership/{pkiDiscussionmembershipID} | Delete an existing Discussionmembership


# **ObjectDiscussionmembershipAPI_discussionmembershipCreateObjectV1**
```c
// Create a new Discussionmembership
//
// The endpoint allows to create one or many elements at once.
//
discussionmembership_create_object_v1_response_t* ObjectDiscussionmembershipAPI_discussionmembershipCreateObjectV1(apiClient_t *apiClient, discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**discussionmembership_create_object_v1_request** | **[discussionmembership_create_object_v1_request_t](discussionmembership_create_object_v1_request.md) \*** |  | 

### Return type

[discussionmembership_create_object_v1_response_t](discussionmembership_create_object_v1_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **ObjectDiscussionmembershipAPI_discussionmembershipDeleteObjectV1**
```c
// Delete an existing Discussionmembership
//
// 
//
common_response_t* ObjectDiscussionmembershipAPI_discussionmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmembershipID);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**pkiDiscussionmembershipID** | **int \*** | The unique ID of the Discussionmembership | 

### Return type

[common_response_t](common_response.md) *


### Authorization

[Authorization](../README.md#Authorization)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

