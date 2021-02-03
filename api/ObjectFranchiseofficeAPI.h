#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"

// Enum SSELECTOR for ObjectFranchiseofficeAPI_franchiseofficeGetAutocompleteV1
typedef enum  { ezmax_api_definition_franchiseofficeGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition_franchiseofficeGetAutocompleteV1_SSELECTOR_Active, ezmax_api_definition_franchiseofficeGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition_franchiseofficeGetAutocompleteV1_sSelector_e;


// Retrieve Franchiseoffices and IDs
//
// Get the list of Franchiseoffices to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectFranchiseofficeAPI_franchiseofficeGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition_franchiseofficeGetAutocompleteV1_sSelector_e sSelector , char * sQuery );


