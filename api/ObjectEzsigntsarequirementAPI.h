#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_disabled_v1_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEzsigntsarequirementAPI_ezsigntsarequirementGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1_SSELECTOR_User, ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1_SSELECTOR_Usergroup } ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1_sSelector_e;

// Enum  for ObjectEzsigntsarequirementAPI_ezsigntsarequirementGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1__*, ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1__en, ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1__fr } ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1_Accept-Language_e;


// Retrieve Ezsigntsarequirements and IDs
//
// Get the list of Ezsigntsarequirement to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_disabled_v1_response_t*
ObjectEzsigntsarequirementAPI_ezsigntsarequirementGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsigntsarequirementGetAutocompleteV1_sSelector_e sSelector , int fkiEzsignfoldertypeID , char * sQuery , header_accept_language_e Accept_Language );


