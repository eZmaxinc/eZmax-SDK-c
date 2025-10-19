#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/leadsource_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectLeadsourceAPI_leadsourceGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_leadsourceGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_leadsourceGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_leadsourceGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectLeadsourceAPI_leadsourceGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_leadsourceGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_leadsourceGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_leadsourceGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_leadsourceGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_leadsourceGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectLeadsourceAPI_leadsourceGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_leadsourceGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_leadsourceGetAutocompleteV2__*, ezmax_api_definition__full_leadsourceGetAutocompleteV2__en, ezmax_api_definition__full_leadsourceGetAutocompleteV2__fr } ezmax_api_definition__full_leadsourceGetAutocompleteV2_Accept-Language_e;


// Retrieve Leadsources and IDs
//
// Get the list of Leadsource to be used in a dropdown or autocomplete control.
//
leadsource_get_autocomplete_v2_response_t*
ObjectLeadsourceAPI_leadsourceGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_leadsourceGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_leadsourceGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


