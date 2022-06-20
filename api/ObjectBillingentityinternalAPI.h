#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_sSelector_e;

// Enum  for ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_billingentityinternalGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_billingentityinternalGetAutocompleteV1__*, ezmax_api_definition__full_billingentityinternalGetAutocompleteV1__en, ezmax_api_definition__full_billingentityinternalGetAutocompleteV1__fr } ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_Accept-Language_e;


// Retrieve Billingentityinternals and IDs
//
// Get the list of Billingentityinternal to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_billingentityinternalGetAutocompleteV1_sSelector_e sSelector , char * sQuery , header_accept_language_e Accept_Language );


