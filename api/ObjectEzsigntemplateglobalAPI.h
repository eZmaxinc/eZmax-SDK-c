#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplateglobal_get_autocomplete_v2_response.h"
#include "../model/ezsigntemplateglobal_get_object_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2__*, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2__en, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2__fr } ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_Accept-Language_e;


// Retrieve Ezsigntemplateglobals and IDs
//
// Get the list of Ezsigntemplateglobal to be used in a dropdown or autocomplete control.
//
ezsigntemplateglobal_get_autocomplete_v2_response_t*
ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezsigntemplateglobalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve an existing Ezsigntemplateglobal
//
// 
//
ezsigntemplateglobal_get_object_v2_response_t*
ObjectEzsigntemplateglobalAPI_ezsigntemplateglobalGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplateglobalID);


