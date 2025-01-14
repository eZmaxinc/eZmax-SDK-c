#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/glaccount_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectGlaccountAPI_glaccountGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_glaccountGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_glaccountGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_glaccountGetAutocompleteV2_SSELECTOR_Supply } ezmax_api_definition__full_glaccountGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectGlaccountAPI_glaccountGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_glaccountGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_glaccountGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_glaccountGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_glaccountGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_glaccountGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectGlaccountAPI_glaccountGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_glaccountGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_glaccountGetAutocompleteV2__*, ezmax_api_definition__full_glaccountGetAutocompleteV2__en, ezmax_api_definition__full_glaccountGetAutocompleteV2__fr } ezmax_api_definition__full_glaccountGetAutocompleteV2_Accept-Language_e;


// Retrieve Glaccounts and IDs
//
// Get the list of Glaccount to be used in a dropdown or autocomplete control.
//
glaccount_get_autocomplete_v2_response_t*
ObjectGlaccountAPI_glaccountGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_glaccountGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_glaccountGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


