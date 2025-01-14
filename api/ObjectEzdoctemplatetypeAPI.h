#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/ezdoctemplatetype_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2__*, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2__en, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2__fr } ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_Accept-Language_e;


// Retrieve Ezdoctemplatetypes and IDs
//
// Get the list of Ezdoctemplatetype to be used in a dropdown or autocomplete control.
//
ezdoctemplatetype_get_autocomplete_v2_response_t*
ObjectEzdoctemplatetypeAPI_ezdoctemplatetypeGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_ezdoctemplatetypeGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


