#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/currency_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectCurrencyAPI_currencyGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_currencyGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_currencyGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_currencyGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectCurrencyAPI_currencyGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_currencyGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_currencyGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_currencyGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_currencyGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_currencyGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectCurrencyAPI_currencyGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_currencyGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_currencyGetAutocompleteV2__*, ezmax_api_definition__full_currencyGetAutocompleteV2__en, ezmax_api_definition__full_currencyGetAutocompleteV2__fr } ezmax_api_definition__full_currencyGetAutocompleteV2_Accept-Language_e;


// Retrieve Currencies and IDs
//
// Get the list of Currency to be used in a dropdown or autocomplete control.
//
currency_get_autocomplete_v2_response_t*
ObjectCurrencyAPI_currencyGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_currencyGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_currencyGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


