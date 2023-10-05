#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/language_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectLanguageAPI_languageGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_languageGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_languageGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_languageGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectLanguageAPI_languageGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_languageGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_languageGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_languageGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_languageGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_languageGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectLanguageAPI_languageGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_languageGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_languageGetAutocompleteV2__*, ezmax_api_definition__full_languageGetAutocompleteV2__en, ezmax_api_definition__full_languageGetAutocompleteV2__fr } ezmax_api_definition__full_languageGetAutocompleteV2_Accept-Language_e;


// Retrieve Languages and IDs
//
// Get the list of Language to be used in a dropdown or autocomplete control.
//
language_get_autocomplete_v2_response_t*
ObjectLanguageAPI_languageGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_languageGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_languageGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


