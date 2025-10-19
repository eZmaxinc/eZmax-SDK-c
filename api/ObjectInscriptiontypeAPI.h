#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/inscriptiontype_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectInscriptiontypeAPI_inscriptiontypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2_sSelector_e;

// Enum  for ObjectInscriptiontypeAPI_inscriptiontypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2__*, ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2__en, ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2__fr } ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2_Accept-Language_e;


// Retrieve Inscriptiontypes and IDs
//
// Get the list of Inscriptiontype to be used in a dropdown or autocomplete control.
//
inscriptiontype_get_autocomplete_v2_response_t*
ObjectInscriptiontypeAPI_inscriptiontypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_inscriptiontypeGetAutocompleteV2_sSelector_e sSelector, char *sQuery, header_accept_language_e Accept_Language);


