#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/user_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectUserAPI_userGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_AgentBrokerEmployeeEzsignUserNormal, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_AgentBrokerEmployeeNormalBuiltIn, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_ClonableUsers, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_EzsignuserBuiltIn, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_Normal, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_NormalEzsignSigner } ezmax_api_definition__full_userGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectUserAPI_userGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_userGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectUserAPI_userGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_userGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_userGetAutocompleteV2__*, ezmax_api_definition__full_userGetAutocompleteV2__en, ezmax_api_definition__full_userGetAutocompleteV2__fr } ezmax_api_definition__full_userGetAutocompleteV2_Accept-Language_e;


// Retrieve Users and IDs
//
// Get the list of User to be used in a dropdown or autocomplete control.
//
user_get_autocomplete_v2_response_t*
ObjectUserAPI_userGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_userGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_userGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


