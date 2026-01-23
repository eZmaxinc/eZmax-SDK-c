#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/inscriptionchecklist_get_autocomplete_v3_response.h"

// Enum SSELECTOR for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3
typedef enum  { ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_SSELECTOR_NULL = 0, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_SSELECTOR_All } ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e;

// Enum EFILTERACTIVE for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3
typedef enum  { ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_All, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_Active, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_EFILTERACTIVE_Inactive } ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e;

// Enum  for ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3
typedef enum  { ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3__NULL = 0, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3__*, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3__en, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3__fr } ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_Accept-Language_e;


// Retrieve Inscriptionchecklists and IDs
//
// Get the list of Inscriptionchecklist to be used in a dropdown or autocomplete control.
//
inscriptionchecklist_get_autocomplete_v3_response_t*
ObjectInscriptionchecklistAPI_inscriptionchecklistGetAutocompleteV3(apiClient_t *apiClient, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_sSelector_e sSelector, char *fkiBuyercontractID, char *fkiInscriptionID, char *fkiInscriptionnotauthenticatedID, char *fkiInscriptiontempID, char *fkiAgentID, char *fkiBrokerID, char *fkiOtherincomeID, char *fkiRejectedoffertopurchaseID, ezmax_api_definition__full_inscriptionchecklistGetAutocompleteV3_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


