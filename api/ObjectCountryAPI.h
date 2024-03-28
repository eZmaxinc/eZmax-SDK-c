#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/country_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectCountryAPI_countryGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_countryGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_countryGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_countryGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectCountryAPI_countryGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_countryGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_countryGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_countryGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_countryGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_countryGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectCountryAPI_countryGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_countryGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_countryGetAutocompleteV2__*, ezmax_api_definition__full_countryGetAutocompleteV2__en, ezmax_api_definition__full_countryGetAutocompleteV2__fr } ezmax_api_definition__full_countryGetAutocompleteV2_Accept-Language_e;


// Retrieve Countries and IDs
//
// Get the list of Country to be used in a dropdown or autocomplete control.
//
country_get_autocomplete_v2_response_t*
ObjectCountryAPI_countryGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_countryGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_countryGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


