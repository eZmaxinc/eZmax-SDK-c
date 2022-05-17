#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_franchisebrokerGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_franchisebrokerGetAutocompleteV1_SSELECTOR_Active, ezmax_api_definition__full_franchisebrokerGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition__full_franchisebrokerGetAutocompleteV1_sSelector_e;

// Enum  for ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_franchisebrokerGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_franchisebrokerGetAutocompleteV1__*, ezmax_api_definition__full_franchisebrokerGetAutocompleteV1__en, ezmax_api_definition__full_franchisebrokerGetAutocompleteV1__fr } ezmax_api_definition__full_franchisebrokerGetAutocompleteV1_Accept-Language_e;


// Retrieve Franchisebrokers and IDs
//
// Get the list of Franchisebrokers to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectFranchisebrokerAPI_franchisebrokerGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_franchisebrokerGetAutocompleteV1_sSelector_e sSelector , char * sQuery , header_accept_language_e Accept_Language );


