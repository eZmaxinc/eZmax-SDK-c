#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/emailtype_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEmailtypeAPI_emailtypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_emailtypeGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_emailtypeGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_emailtypeGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectEmailtypeAPI_emailtypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_emailtypeGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_emailtypeGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_emailtypeGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_emailtypeGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_emailtypeGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectEmailtypeAPI_emailtypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_emailtypeGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_emailtypeGetAutocompleteV2__*, ezmax_api_definition__full_emailtypeGetAutocompleteV2__en, ezmax_api_definition__full_emailtypeGetAutocompleteV2__fr } ezmax_api_definition__full_emailtypeGetAutocompleteV2_Accept-Language_e;


// Retrieve Emailtypes and IDs
//
// Get the list of Emailtype to be used in a dropdown or autocomplete control.
//
emailtype_get_autocomplete_v2_response_t*
ObjectEmailtypeAPI_emailtypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_emailtypeGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_emailtypeGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


