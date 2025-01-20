#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authenticationexternal_create_object_v1_request.h"
#include "../model/authenticationexternal_create_object_v1_response.h"
#include "../model/authenticationexternal_edit_object_v1_request.h"
#include "../model/authenticationexternal_get_autocomplete_v2_response.h"
#include "../model/authenticationexternal_get_list_v1_response.h"
#include "../model/authenticationexternal_get_object_v2_response.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/object.h"

// Enum SSELECTOR for ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_authenticationexternalGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2__*, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2__en, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2__fr } ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectAuthenticationexternalAPI_authenticationexternalGetListV1
typedef enum  { ezmax_api_definition__full_authenticationexternalGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_authenticationexternalGetListV1_EORDERBY_pkiAuthenticationexternalID_ASC, ezmax_api_definition__full_authenticationexternalGetListV1_EORDERBY_pkiAuthenticationexternalID_DESC, ezmax_api_definition__full_authenticationexternalGetListV1_EORDERBY_sAuthenticationexternalDescription_ASC, ezmax_api_definition__full_authenticationexternalGetListV1_EORDERBY_sAuthenticationexternalDescription_DESC, ezmax_api_definition__full_authenticationexternalGetListV1_EORDERBY_eAuthenticationexternalType_ASC, ezmax_api_definition__full_authenticationexternalGetListV1_EORDERBY_eAuthenticationexternalType_DESC } ezmax_api_definition__full_authenticationexternalGetListV1_eOrderBy_e;

// Enum  for ObjectAuthenticationexternalAPI_authenticationexternalGetListV1
typedef enum  { ezmax_api_definition__full_authenticationexternalGetListV1__NULL = 0, ezmax_api_definition__full_authenticationexternalGetListV1__*, ezmax_api_definition__full_authenticationexternalGetListV1__en, ezmax_api_definition__full_authenticationexternalGetListV1__fr } ezmax_api_definition__full_authenticationexternalGetListV1_Accept-Language_e;


// Create a new Authenticationexternal
//
// The endpoint allows to create one or many elements at once.
//
authenticationexternal_create_object_v1_response_t*
ObjectAuthenticationexternalAPI_authenticationexternalCreateObjectV1(apiClient_t *apiClient, authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request);


// Delete an existing Authenticationexternal
//
// 
//
common_response_t*
ObjectAuthenticationexternalAPI_authenticationexternalDeleteObjectV1(apiClient_t *apiClient, int *pkiAuthenticationexternalID);


// Edit an existing Authenticationexternal
//
// 
//
common_response_t*
ObjectAuthenticationexternalAPI_authenticationexternalEditObjectV1(apiClient_t *apiClient, int *pkiAuthenticationexternalID, authenticationexternal_edit_object_v1_request_t *authenticationexternal_edit_object_v1_request);


// Retrieve Authenticationexternals and IDs
//
// Get the list of Authenticationexternal to be used in a dropdown or autocomplete control.
//
authenticationexternal_get_autocomplete_v2_response_t*
ObjectAuthenticationexternalAPI_authenticationexternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_authenticationexternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Authenticationexternal list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eAuthenticationexternalType | Salesforce<br>SalesforceSandbox |
//
authenticationexternal_get_list_v1_response_t*
ObjectAuthenticationexternalAPI_authenticationexternalGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_authenticationexternalGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Authenticationexternal
//
// 
//
authenticationexternal_get_object_v2_response_t*
ObjectAuthenticationexternalAPI_authenticationexternalGetObjectV2(apiClient_t *apiClient, int *pkiAuthenticationexternalID);


// Reset the Authenticationexternal authorization
//
// 
//
common_response_t*
ObjectAuthenticationexternalAPI_authenticationexternalResetAuthorizationV1(apiClient_t *apiClient, int *pkiAuthenticationexternalID, object_t *body);


