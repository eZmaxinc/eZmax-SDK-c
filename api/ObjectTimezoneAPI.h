#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/timezone_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectTimezoneAPI_timezoneGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_timezoneGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_timezoneGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_timezoneGetAutocompleteV2_SSELECTOR_Active } ezmax_api_definition__full_timezoneGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectTimezoneAPI_timezoneGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_timezoneGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_timezoneGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_timezoneGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_timezoneGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_timezoneGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectTimezoneAPI_timezoneGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_timezoneGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_timezoneGetAutocompleteV2__*, ezmax_api_definition__full_timezoneGetAutocompleteV2__en, ezmax_api_definition__full_timezoneGetAutocompleteV2__fr } ezmax_api_definition__full_timezoneGetAutocompleteV2_Accept-Language_e;


// Retrieve Timezones and IDs
//
// Get the list of Timezone to be used in a dropdown or autocomplete control.
//
timezone_get_autocomplete_v2_response_t*
ObjectTimezoneAPI_timezoneGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_timezoneGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_timezoneGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


