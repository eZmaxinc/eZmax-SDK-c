#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/realestateboard_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectRealestateboardAPI_realestateboardGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_realestateboardGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_realestateboardGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_realestateboardGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectRealestateboardAPI_realestateboardGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_realestateboardGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_realestateboardGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_realestateboardGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_realestateboardGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_realestateboardGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectRealestateboardAPI_realestateboardGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_realestateboardGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_realestateboardGetAutocompleteV2__*, ezmax_api_definition__full_realestateboardGetAutocompleteV2__en, ezmax_api_definition__full_realestateboardGetAutocompleteV2__fr } ezmax_api_definition__full_realestateboardGetAutocompleteV2_Accept-Language_e;


// Retrieve Realestateboards and IDs
//
// Get the list of realestateboard to be used in a dropdown or autocomplete control.
//
realestateboard_get_autocomplete_v2_response_t*
ObjectRealestateboardAPI_realestateboardGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_realestateboardGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_realestateboardGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language, char *fkiProvinceID);


