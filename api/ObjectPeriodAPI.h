#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectPeriodAPI_periodGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_periodGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_periodGetAutocompleteV1_SSELECTOR_ActiveNormal, ezmax_api_definition__full_periodGetAutocompleteV1_SSELECTOR_ActiveNormalAndEndOfYear, ezmax_api_definition__full_periodGetAutocompleteV1_SSELECTOR_AllNormal, ezmax_api_definition__full_periodGetAutocompleteV1_SSELECTOR_AllNormalAndEndOfYear } ezmax_api_definition__full_periodGetAutocompleteV1_sSelector_e;

// Enum  for ObjectPeriodAPI_periodGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_periodGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_periodGetAutocompleteV1__*, ezmax_api_definition__full_periodGetAutocompleteV1__en, ezmax_api_definition__full_periodGetAutocompleteV1__fr } ezmax_api_definition__full_periodGetAutocompleteV1_Accept-Language_e;


// Retrieve Periods and IDs
//
// Get the list of Periods to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectPeriodAPI_periodGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_periodGetAutocompleteV1_sSelector_e sSelector , char * sQuery , header_accept_language_e Accept_Language );


