#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/franchisebroker_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_franchisebrokerGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2__*, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2__en, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2__fr } ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_Accept-Language_e;


// Retrieve Franchisebrokers and IDs
//
// Get the list of Franchisebroker to be used in a dropdown or autocomplete control.
//
franchisebroker_get_autocomplete_v2_response_t*
ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_franchisebrokerGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


