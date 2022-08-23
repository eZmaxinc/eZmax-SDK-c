#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/common_response_error.h"
#include "../model/ezsignfoldertype_create_object_v1_request.h"
#include "../model/ezsignfoldertype_create_object_v1_response.h"
#include "../model/ezsignfoldertype_edit_object_v1_request.h"
#include "../model/ezsignfoldertype_edit_object_v1_response.h"
#include "../model/ezsignfoldertype_get_list_v1_response.h"
#include "../model/ezsignfoldertype_get_object_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_SSELECTOR_Active, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_sSelector_e;

// Enum EFILTERACTIVE for ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_EFILTERACTIVE_All, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_EFILTERACTIVE_Active, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_EFILTERACTIVE_Inactive } ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_eFilterActive_e;

// Enum  for ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1__*, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1__en, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1__fr } ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_Accept-Language_e;

// Enum EORDERBY for ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1
typedef enum  { ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_pkiEzsignfoldertypeID_ASC, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_pkiEzsignfoldertypeID_DESC, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_eEzsignfoldertypePrivacylevel_ASC, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_eEzsignfoldertypePrivacylevel_DESC, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_sEzsignfoldertypeNameX_ASC, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_sEzsignfoldertypeNameX_DESC, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_bEzsignfoldertypeIsactive_ASC, ezmax_api_definition__full_ezsignfoldertypeGetListV1_EORDERBY_bEzsignfoldertypeIsactive_DESC } ezmax_api_definition__full_ezsignfoldertypeGetListV1_eOrderBy_e;

// Enum  for ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1
typedef enum  { ezmax_api_definition__full_ezsignfoldertypeGetListV1__NULL = 0, ezmax_api_definition__full_ezsignfoldertypeGetListV1__*, ezmax_api_definition__full_ezsignfoldertypeGetListV1__en, ezmax_api_definition__full_ezsignfoldertypeGetListV1__fr } ezmax_api_definition__full_ezsignfoldertypeGetListV1_Accept-Language_e;


// Create a new Ezsignfoldertype
//
// The endpoint allows to create one or many elements at once.
//
ezsignfoldertype_create_object_v1_response_t*
ObjectEzsignfoldertypeAPI_ezsignfoldertypeCreateObjectV1(apiClient_t *apiClient, ezsignfoldertype_create_object_v1_request_t * ezsignfoldertype_create_object_v1_request );


// Edit an existing Ezsignfoldertype
//
// 
//
ezsignfoldertype_edit_object_v1_response_t*
ObjectEzsignfoldertypeAPI_ezsignfoldertypeEditObjectV1(apiClient_t *apiClient, int pkiEzsignfoldertypeID , ezsignfoldertype_edit_object_v1_request_t * ezsignfoldertype_edit_object_v1_request );


// Retrieve Ezsignfoldertypes and IDs
//
// Get the list of Ezsignfoldertypes to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_sSelector_e sSelector , ezmax_api_definition__full_ezsignfoldertypeGetAutocompleteV1_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve Ezsignfoldertype list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignfoldertype_get_list_v1_response_t*
ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignfoldertypeGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Ezsignfoldertype
//
// 
//
ezsignfoldertype_get_object_v1_response_t*
ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetObjectV1(apiClient_t *apiClient, int pkiEzsignfoldertypeID );


