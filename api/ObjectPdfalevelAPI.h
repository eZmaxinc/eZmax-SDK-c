#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/pdfalevel_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectPdfalevelAPI_pdfalevelGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_pdfalevelGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_pdfalevelGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_pdfalevelGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectPdfalevelAPI_pdfalevelGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_pdfalevelGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_pdfalevelGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_pdfalevelGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_pdfalevelGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_pdfalevelGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectPdfalevelAPI_pdfalevelGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_pdfalevelGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_pdfalevelGetAutocompleteV2__*, ezmax_api_definition__full_pdfalevelGetAutocompleteV2__en, ezmax_api_definition__full_pdfalevelGetAutocompleteV2__fr } ezmax_api_definition__full_pdfalevelGetAutocompleteV2_Accept-Language_e;


// Retrieve Pdfalevels and IDs
//
// Get the list of Pdfalevel to be used in a dropdown or autocomplete control.
//
pdfalevel_get_autocomplete_v2_response_t*
ObjectPdfalevelAPI_pdfalevelGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_pdfalevelGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_pdfalevelGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


