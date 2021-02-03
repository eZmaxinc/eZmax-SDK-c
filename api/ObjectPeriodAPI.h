#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"

// Enum SSELECTOR for ObjectPeriodAPI_periodGetAutocompleteV1
typedef enum  { ezmax_api_definition_periodGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition_periodGetAutocompleteV1_SSELECTOR_ActiveNormal, ezmax_api_definition_periodGetAutocompleteV1_SSELECTOR_ActiveNormalAndEndOfYear, ezmax_api_definition_periodGetAutocompleteV1_SSELECTOR_AllNormal, ezmax_api_definition_periodGetAutocompleteV1_SSELECTOR_AllNormalAndEndOfYear } ezmax_api_definition_periodGetAutocompleteV1_sSelector_e;


// Retrieve Periods and IDs
//
// Get the list of Periods to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectPeriodAPI_periodGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition_periodGetAutocompleteV1_sSelector_e sSelector , char * sQuery );


