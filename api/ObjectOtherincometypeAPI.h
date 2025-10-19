#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/otherincometype_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectOtherincometypeAPI_otherincometypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_otherincometypeGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_otherincometypeGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_otherincometypeGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectOtherincometypeAPI_otherincometypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_otherincometypeGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_otherincometypeGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_otherincometypeGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_otherincometypeGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_otherincometypeGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectOtherincometypeAPI_otherincometypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_otherincometypeGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_otherincometypeGetAutocompleteV2__*, ezmax_api_definition__full_otherincometypeGetAutocompleteV2__en, ezmax_api_definition__full_otherincometypeGetAutocompleteV2__fr } ezmax_api_definition__full_otherincometypeGetAutocompleteV2_Accept-Language_e;


// Retrieve Otherincometypes and IDs
//
// Get the list of Otherincometype to be used in a dropdown or autocomplete control.
//
otherincometype_get_autocomplete_v2_response_t*
ObjectOtherincometypeAPI_otherincometypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_otherincometypeGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_otherincometypeGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


