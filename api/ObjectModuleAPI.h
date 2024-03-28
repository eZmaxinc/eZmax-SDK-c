#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/module_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectModuleAPI_moduleGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_moduleGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_moduleGetAutocompleteV2_SSELECTOR_Forms } ezmax_api_definition__full_moduleGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectModuleAPI_moduleGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_moduleGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_moduleGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_moduleGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_moduleGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_moduleGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectModuleAPI_moduleGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_moduleGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_moduleGetAutocompleteV2__*, ezmax_api_definition__full_moduleGetAutocompleteV2__en, ezmax_api_definition__full_moduleGetAutocompleteV2__fr } ezmax_api_definition__full_moduleGetAutocompleteV2_Accept-Language_e;


// Retrieve Modules and IDs
//
// Get the list of Module to be used in a dropdown or autocomplete control.
//
module_get_autocomplete_v2_response_t*
ObjectModuleAPI_moduleGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_moduleGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_moduleGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


