#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectBrandingAPI_brandingGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_brandingGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_brandingGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition__full_brandingGetAutocompleteV1_sSelector_e;

// Enum  for ObjectBrandingAPI_brandingGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_brandingGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_brandingGetAutocompleteV1__*, ezmax_api_definition__full_brandingGetAutocompleteV1__en, ezmax_api_definition__full_brandingGetAutocompleteV1__fr } ezmax_api_definition__full_brandingGetAutocompleteV1_Accept-Language_e;


// Retrieve Brandings and IDs
//
// Get the list of Branding to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectBrandingAPI_brandingGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_brandingGetAutocompleteV1_sSelector_e sSelector , char * sQuery , header_accept_language_e Accept_Language );


