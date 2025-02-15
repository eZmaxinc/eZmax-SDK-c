#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ezmaxproduct_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEzmaxproductAPI_ezmaxproductGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_SSELECTOR_Entitydefault, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_SSELECTOR_Entityother } ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectEzmaxproductAPI_ezmaxproductGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectEzmaxproductAPI_ezmaxproductGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezmaxproductGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2__*, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2__en, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2__fr } ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_Accept-Language_e;


// Retrieve Ezmaxproducts and IDs
//
// Get the list of Ezmaxproduct to be used in a dropdown or autocomplete control.
//
ezmaxproduct_get_autocomplete_v2_response_t*
ObjectEzmaxproductAPI_ezmaxproductGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezmaxproductGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


