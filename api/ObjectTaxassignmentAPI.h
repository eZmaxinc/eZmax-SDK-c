#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/taxassignment_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectTaxassignmentAPI_taxassignmentGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_taxassignmentGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_taxassignmentGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_taxassignmentGetAutocompleteV2_SSELECTOR_AllButNonrecoverable } ezmax_api_definition__full_taxassignmentGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectTaxassignmentAPI_taxassignmentGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_taxassignmentGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_taxassignmentGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_taxassignmentGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_taxassignmentGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_taxassignmentGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectTaxassignmentAPI_taxassignmentGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_taxassignmentGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_taxassignmentGetAutocompleteV2__*, ezmax_api_definition__full_taxassignmentGetAutocompleteV2__en, ezmax_api_definition__full_taxassignmentGetAutocompleteV2__fr } ezmax_api_definition__full_taxassignmentGetAutocompleteV2_Accept-Language_e;


// Retrieve Taxassignments and IDs
//
// Get the list of Taxassignment to be used in a dropdown or autocomplete control.
//
taxassignment_get_autocomplete_v2_response_t*
ObjectTaxassignmentAPI_taxassignmentGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_taxassignmentGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_taxassignmentGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


