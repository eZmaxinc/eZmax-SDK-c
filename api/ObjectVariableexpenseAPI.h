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
#include "../model/variableexpense_create_object_v1_request.h"
#include "../model/variableexpense_create_object_v1_response.h"
#include "../model/variableexpense_edit_object_v1_request.h"
#include "../model/variableexpense_get_autocomplete_v2_response.h"
#include "../model/variableexpense_get_list_v1_response.h"
#include "../model/variableexpense_get_object_v2_response.h"

// Enum SSELECTOR for ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_variableexpenseGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_variableexpenseGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_variableexpenseGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_variableexpenseGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_variableexpenseGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_variableexpenseGetAutocompleteV2__*, ezmax_api_definition__full_variableexpenseGetAutocompleteV2__en, ezmax_api_definition__full_variableexpenseGetAutocompleteV2__fr } ezmax_api_definition__full_variableexpenseGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectVariableexpenseAPI_variableexpenseGetListV1
typedef enum  { ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_pkiVariableexpenseID_ASC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_pkiVariableexpenseID_DESC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_sVariableexpenseCode_ASC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_sVariableexpenseCode_DESC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_sVariableexpenseDescriptionX_ASC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_sVariableexpenseDescriptionX_DESC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_eVariableexpenseTaxable_ASC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_eVariableexpenseTaxable_DESC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_bVariableexpenseIsactive_ASC, ezmax_api_definition__full_variableexpenseGetListV1_EORDERBY_bVariableexpenseIsactive_DESC } ezmax_api_definition__full_variableexpenseGetListV1_eOrderBy_e;

// Enum  for ObjectVariableexpenseAPI_variableexpenseGetListV1
typedef enum  { ezmax_api_definition__full_variableexpenseGetListV1__NULL = 0, ezmax_api_definition__full_variableexpenseGetListV1__*, ezmax_api_definition__full_variableexpenseGetListV1__en, ezmax_api_definition__full_variableexpenseGetListV1__fr } ezmax_api_definition__full_variableexpenseGetListV1_Accept-Language_e;


// Create a new Variableexpense
//
// The endpoint allows to create one or many elements at once.
//
variableexpense_create_object_v1_response_t*
ObjectVariableexpenseAPI_variableexpenseCreateObjectV1(apiClient_t *apiClient, variableexpense_create_object_v1_request_t *variableexpense_create_object_v1_request);


// Edit an existing Variableexpense
//
// 
//
common_response_t*
ObjectVariableexpenseAPI_variableexpenseEditObjectV1(apiClient_t *apiClient, int *pkiVariableexpenseID, variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request);


// Retrieve Variableexpenses and IDs
//
// Get the list of Variableexpense to be used in a dropdown or autocomplete control.
//
variableexpense_get_autocomplete_v2_response_t*
ObjectVariableexpenseAPI_variableexpenseGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_variableexpenseGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Variableexpense list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eVariableexpenseTaxable | Yes<br>No<br>Included |
//
variableexpense_get_list_v1_response_t*
ObjectVariableexpenseAPI_variableexpenseGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_variableexpenseGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Variableexpense
//
// 
//
variableexpense_get_object_v2_response_t*
ObjectVariableexpenseAPI_variableexpenseGetObjectV2(apiClient_t *apiClient, int *pkiVariableexpenseID);


