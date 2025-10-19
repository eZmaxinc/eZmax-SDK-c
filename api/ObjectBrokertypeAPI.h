#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/brokertype_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectBrokertypeAPI_brokertypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_brokertypeGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_brokertypeGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_brokertypeGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectBrokertypeAPI_brokertypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_brokertypeGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_brokertypeGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_brokertypeGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_brokertypeGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_brokertypeGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectBrokertypeAPI_brokertypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_brokertypeGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_brokertypeGetAutocompleteV2__*, ezmax_api_definition__full_brokertypeGetAutocompleteV2__en, ezmax_api_definition__full_brokertypeGetAutocompleteV2__fr } ezmax_api_definition__full_brokertypeGetAutocompleteV2_Accept-Language_e;


// Retrieve Brokertypes and IDs
//
// Get the list of Brokertype to be used in a dropdown or autocomplete control.
//
brokertype_get_autocomplete_v2_response_t*
ObjectBrokertypeAPI_brokertypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_brokertypeGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_brokertypeGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


