#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/period_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectPeriodAPI_periodGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_periodGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_periodGetAutocompleteV2_SSELECTOR_ActiveNormal, ezmax_api_definition__full_periodGetAutocompleteV2_SSELECTOR_ActiveNormalAndEndOfYear, ezmax_api_definition__full_periodGetAutocompleteV2_SSELECTOR_AllNormal, ezmax_api_definition__full_periodGetAutocompleteV2_SSELECTOR_AllNormalAndEndOfYear } ezmax_api_definition__full_periodGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectPeriodAPI_periodGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_periodGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_periodGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_periodGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_periodGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_periodGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectPeriodAPI_periodGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_periodGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_periodGetAutocompleteV2__*, ezmax_api_definition__full_periodGetAutocompleteV2__en, ezmax_api_definition__full_periodGetAutocompleteV2__fr } ezmax_api_definition__full_periodGetAutocompleteV2_Accept-Language_e;


// Retrieve Periods and IDs
//
// Get the list of Period to be used in a dropdown or autocomplete control.
//
period_get_autocomplete_v2_response_t*
ObjectPeriodAPI_periodGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_periodGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_periodGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


