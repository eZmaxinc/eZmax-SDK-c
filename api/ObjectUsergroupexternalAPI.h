#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/usergroupexternal_create_object_v1_request.h"
#include "../model/usergroupexternal_create_object_v1_response.h"
#include "../model/usergroupexternal_edit_object_v1_request.h"
#include "../model/usergroupexternal_get_autocomplete_v2_response.h"
#include "../model/usergroupexternal_get_list_v1_response.h"
#include "../model/usergroupexternal_get_object_v2_response.h"
#include "../model/usergroupexternal_get_usergroupexternalmemberships_v1_response.h"
#include "../model/usergroupexternal_get_usergroups_v1_response.h"

// Enum SSELECTOR for ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupexternalGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2__*, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2__en, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2__fr } ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectUsergroupexternalAPI_usergroupexternalGetListV1
typedef enum  { ezmax_api_definition__full_usergroupexternalGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_usergroupexternalGetListV1_EORDERBY_pkiUsergroupexternalID_ASC, ezmax_api_definition__full_usergroupexternalGetListV1_EORDERBY_pkiUsergroupexternalID_DESC, ezmax_api_definition__full_usergroupexternalGetListV1_EORDERBY_sUsergroupexternalName_ASC, ezmax_api_definition__full_usergroupexternalGetListV1_EORDERBY_sUsergroupexternalName_DESC, ezmax_api_definition__full_usergroupexternalGetListV1_EORDERBY_sUsergroupexternalID_ASC, ezmax_api_definition__full_usergroupexternalGetListV1_EORDERBY_sUsergroupexternalID_DESC } ezmax_api_definition__full_usergroupexternalGetListV1_eOrderBy_e;

// Enum  for ObjectUsergroupexternalAPI_usergroupexternalGetListV1
typedef enum  { ezmax_api_definition__full_usergroupexternalGetListV1__NULL = 0, ezmax_api_definition__full_usergroupexternalGetListV1__*, ezmax_api_definition__full_usergroupexternalGetListV1__en, ezmax_api_definition__full_usergroupexternalGetListV1__fr } ezmax_api_definition__full_usergroupexternalGetListV1_Accept-Language_e;


// Create a new Usergroupexternal
//
// The endpoint allows to create one or many elements at once.
//
usergroupexternal_create_object_v1_response_t*
ObjectUsergroupexternalAPI_usergroupexternalCreateObjectV1(apiClient_t *apiClient, usergroupexternal_create_object_v1_request_t *usergroupexternal_create_object_v1_request);


// Delete an existing Usergroupexternal
//
// 
//
common_response_t*
ObjectUsergroupexternalAPI_usergroupexternalDeleteObjectV1(apiClient_t *apiClient, int *pkiUsergroupexternalID);


// Edit an existing Usergroupexternal
//
// 
//
common_response_t*
ObjectUsergroupexternalAPI_usergroupexternalEditObjectV1(apiClient_t *apiClient, int *pkiUsergroupexternalID, usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request);


// Retrieve Usergroupexternals and IDs
//
// Get the list of Usergroupexternal to be used in a dropdown or autocomplete control.
//
usergroupexternal_get_autocomplete_v2_response_t*
ObjectUsergroupexternalAPI_usergroupexternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_usergroupexternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Usergroupexternal list
//
// 
//
usergroupexternal_get_list_v1_response_t*
ObjectUsergroupexternalAPI_usergroupexternalGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_usergroupexternalGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Usergroupexternal
//
// 
//
usergroupexternal_get_object_v2_response_t*
ObjectUsergroupexternalAPI_usergroupexternalGetObjectV2(apiClient_t *apiClient, int *pkiUsergroupexternalID);


// Retrieve an existing Usergroupexternal's Usergroupexternalmemberships
//
usergroupexternal_get_usergroupexternalmemberships_v1_response_t*
ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupexternalmembershipsV1(apiClient_t *apiClient, int *pkiUsergroupexternalID);


// Get Usergroupexternal's Usergroups
//
usergroupexternal_get_usergroups_v1_response_t*
ObjectUsergroupexternalAPI_usergroupexternalGetUsergroupsV1(apiClient_t *apiClient, int *pkiUsergroupexternalID);


