#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectTimezoneAPI_timezoneGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_timezoneGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_timezoneGetAutocompleteV1_SSELECTOR_All, ezmax_api_definition__full_timezoneGetAutocompleteV1_SSELECTOR_Active } ezmax_api_definition__full_timezoneGetAutocompleteV1_sSelector_e;

// Enum EFILTERACTIVE for ObjectTimezoneAPI_timezoneGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_timezoneGetAutocompleteV1_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_timezoneGetAutocompleteV1_EFILTERACTIVE_All, ezmax_api_definition__full_timezoneGetAutocompleteV1_EFILTERACTIVE_Active, ezmax_api_definition__full_timezoneGetAutocompleteV1_EFILTERACTIVE_Inactive } ezmax_api_definition__full_timezoneGetAutocompleteV1_eFilterActive_e;

// Enum  for ObjectTimezoneAPI_timezoneGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_timezoneGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_timezoneGetAutocompleteV1__*, ezmax_api_definition__full_timezoneGetAutocompleteV1__en, ezmax_api_definition__full_timezoneGetAutocompleteV1__fr } ezmax_api_definition__full_timezoneGetAutocompleteV1_Accept-Language_e;


// Retrieve Timezones and IDs
//
// Get the list of Timezone to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectTimezoneAPI_timezoneGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_timezoneGetAutocompleteV1_sSelector_e sSelector , ezmax_api_definition__full_timezoneGetAutocompleteV1_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


