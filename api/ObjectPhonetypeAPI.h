#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/phonetype_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectPhonetypeAPI_phonetypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_phonetypeGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_phonetypeGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_phonetypeGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectPhonetypeAPI_phonetypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_phonetypeGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_phonetypeGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_phonetypeGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_phonetypeGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_phonetypeGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectPhonetypeAPI_phonetypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_phonetypeGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_phonetypeGetAutocompleteV2__*, ezmax_api_definition__full_phonetypeGetAutocompleteV2__en, ezmax_api_definition__full_phonetypeGetAutocompleteV2__fr } ezmax_api_definition__full_phonetypeGetAutocompleteV2_Accept-Language_e;


// Retrieve Phonetypes and IDs
//
// Get the list of Phonetype to be used in a dropdown or autocomplete control.
//
phonetype_get_autocomplete_v2_response_t*
ObjectPhonetypeAPI_phonetypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_phonetypeGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_phonetypeGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


