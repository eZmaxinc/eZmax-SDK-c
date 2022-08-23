#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectSecretquestionAPI_secretquestionGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_secretquestionGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_secretquestionGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition__full_secretquestionGetAutocompleteV1_sSelector_e;

// Enum EFILTERACTIVE for ObjectSecretquestionAPI_secretquestionGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_secretquestionGetAutocompleteV1_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_secretquestionGetAutocompleteV1_EFILTERACTIVE_All, ezmax_api_definition__full_secretquestionGetAutocompleteV1_EFILTERACTIVE_Active, ezmax_api_definition__full_secretquestionGetAutocompleteV1_EFILTERACTIVE_Inactive } ezmax_api_definition__full_secretquestionGetAutocompleteV1_eFilterActive_e;

// Enum  for ObjectSecretquestionAPI_secretquestionGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_secretquestionGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_secretquestionGetAutocompleteV1__*, ezmax_api_definition__full_secretquestionGetAutocompleteV1__en, ezmax_api_definition__full_secretquestionGetAutocompleteV1__fr } ezmax_api_definition__full_secretquestionGetAutocompleteV1_Accept-Language_e;


// Retrieve Secretquestions and IDs
//
// Get the list of Secretquestions to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectSecretquestionAPI_secretquestionGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_secretquestionGetAutocompleteV1_sSelector_e sSelector , ezmax_api_definition__full_secretquestionGetAutocompleteV1_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


