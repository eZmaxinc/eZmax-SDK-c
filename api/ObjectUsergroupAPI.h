#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/header_accept_language.h"
#include "../model/usergroup_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectUsergroupAPI_usergroupGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition__full_usergroupGetAutocompleteV1_sSelector_e;

// Enum EFILTERACTIVE for ObjectUsergroupAPI_usergroupGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV1_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV1_EFILTERACTIVE_All, ezmax_api_definition__full_usergroupGetAutocompleteV1_EFILTERACTIVE_Active, ezmax_api_definition__full_usergroupGetAutocompleteV1_EFILTERACTIVE_Inactive } ezmax_api_definition__full_usergroupGetAutocompleteV1_eFilterActive_e;

// Enum  for ObjectUsergroupAPI_usergroupGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV1__*, ezmax_api_definition__full_usergroupGetAutocompleteV1__en, ezmax_api_definition__full_usergroupGetAutocompleteV1__fr } ezmax_api_definition__full_usergroupGetAutocompleteV1_Accept-Language_e;

// Enum SSELECTOR for ObjectUsergroupAPI_usergroupGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectUsergroupAPI_usergroupGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectUsergroupAPI_usergroupGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV2__*, ezmax_api_definition__full_usergroupGetAutocompleteV2__en, ezmax_api_definition__full_usergroupGetAutocompleteV2__fr } ezmax_api_definition__full_usergroupGetAutocompleteV2_Accept-Language_e;


// Retrieve Usergroups and IDs
//
// Get the list of Usergroup to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectUsergroupAPI_usergroupGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetAutocompleteV1_sSelector_e sSelector , ezmax_api_definition__full_usergroupGetAutocompleteV1_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve Usergroups and IDs
//
// Get the list of Usergroup to be used in a dropdown or autocomplete control.
//
usergroup_get_autocomplete_v2_response_t*
ObjectUsergroupAPI_usergroupGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


