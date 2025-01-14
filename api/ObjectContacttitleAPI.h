#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/contacttitle_get_autocomplete_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectContacttitleAPI_contacttitleGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_contacttitleGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_contacttitleGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_contacttitleGetAutocompleteV2_sSelector_e;

// Enum  for ObjectContacttitleAPI_contacttitleGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_contacttitleGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_contacttitleGetAutocompleteV2__*, ezmax_api_definition__full_contacttitleGetAutocompleteV2__en, ezmax_api_definition__full_contacttitleGetAutocompleteV2__fr } ezmax_api_definition__full_contacttitleGetAutocompleteV2_Accept-Language_e;


// Retrieve Contacttitles and IDs
//
// Get the list of Contacttitle to be used in a dropdown or autocomplete control.
//
contacttitle_get_autocomplete_v2_response_t*
ObjectContacttitleAPI_contacttitleGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_contacttitleGetAutocompleteV2_sSelector_e sSelector, char *sQuery, header_accept_language_e Accept_Language);


