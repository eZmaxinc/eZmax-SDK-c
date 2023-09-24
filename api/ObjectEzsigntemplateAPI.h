#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplate_copy_v1_request.h"
#include "../model/ezsigntemplate_copy_v1_response.h"
#include "../model/ezsigntemplate_create_object_v1_request.h"
#include "../model/ezsigntemplate_create_object_v1_response.h"
#include "../model/ezsigntemplate_delete_object_v1_response.h"
#include "../model/ezsigntemplate_edit_object_v1_request.h"
#include "../model/ezsigntemplate_edit_object_v1_response.h"
#include "../model/ezsigntemplate_get_autocomplete_v2_response.h"
#include "../model/ezsigntemplate_get_list_v1_response.h"
#include "../model/ezsigntemplate_get_object_v1_response.h"
#include "../model/ezsigntemplate_get_object_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2__*, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2__en, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2__fr } ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectEzsigntemplateAPI_ezsigntemplateGetListV1
typedef enum  { ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_pkiEzsigntemplateID_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_pkiEzsigntemplateID_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiTeamID_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiTeamID_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiEzsignfoldertypeID_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiEzsignfoldertypeID_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiUserIDOwner_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiUserIDOwner_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiLanguageID_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_fkiLanguageID_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_eEzsigntemplateType_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_eEzsigntemplateType_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_sEzsigntemplateDescription_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_sEzsigntemplateDescription_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_sEzsigntemplatedocumentDescription_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_sEzsigntemplatedocumentDescription_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_iEzsigntemplatedocumentPagetotal_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_iEzsigntemplatedocumentPagetotal_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_iEzsigntemplateSignaturetotal_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_iEzsigntemplateSignaturetotal_DESC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_sEzsignfoldertypeNameX_ASC, ezmax_api_definition__full_ezsigntemplateGetListV1_EORDERBY_sEzsignfoldertypeNameX_DESC } ezmax_api_definition__full_ezsigntemplateGetListV1_eOrderBy_e;

// Enum  for ObjectEzsigntemplateAPI_ezsigntemplateGetListV1
typedef enum  { ezmax_api_definition__full_ezsigntemplateGetListV1__NULL = 0, ezmax_api_definition__full_ezsigntemplateGetListV1__*, ezmax_api_definition__full_ezsigntemplateGetListV1__en, ezmax_api_definition__full_ezsigntemplateGetListV1__fr } ezmax_api_definition__full_ezsigntemplateGetListV1_Accept-Language_e;


// Copy the Ezsigntemplate
//
// 
//
ezsigntemplate_copy_v1_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateCopyV1(apiClient_t *apiClient, int pkiEzsigntemplateID , ezsigntemplate_copy_v1_request_t * ezsigntemplate_copy_v1_request );


// Create a new Ezsigntemplate
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplate_create_object_v1_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateCreateObjectV1(apiClient_t *apiClient, ezsigntemplate_create_object_v1_request_t * ezsigntemplate_create_object_v1_request );


// Delete an existing Ezsigntemplate
//
// 
//
ezsigntemplate_delete_object_v1_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateID );


// Edit an existing Ezsigntemplate
//
// 
//
ezsigntemplate_edit_object_v1_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateID , ezsigntemplate_edit_object_v1_request_t * ezsigntemplate_edit_object_v1_request );


// Retrieve Ezsigntemplates and IDs
//
// Get the list of Ezsigntemplate to be used in a dropdown or autocomplete control.
//
ezsigntemplate_get_autocomplete_v2_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_ezsigntemplateGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve Ezsigntemplate list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsigntemplateType | Company<br>Team<br>User<br>Usergroup | 
//
ezsigntemplate_get_list_v1_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplateGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Ezsigntemplate
//
// 
//
ezsigntemplate_get_object_v1_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateGetObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateID );


// Retrieve an existing Ezsigntemplate
//
// 
//
ezsigntemplate_get_object_v2_response_t*
ObjectEzsigntemplateAPI_ezsigntemplateGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplateID );


