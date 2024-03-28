#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/header_accept_language.h"
#include "../model/province_get_autocomplete_v2_response.h"

// Enum SSELECTOR for ObjectProvinceAPI_provinceGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_provinceGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_provinceGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_provinceGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectProvinceAPI_provinceGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_provinceGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_provinceGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_provinceGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_provinceGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_provinceGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectProvinceAPI_provinceGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_provinceGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_provinceGetAutocompleteV2__*, ezmax_api_definition__full_provinceGetAutocompleteV2__en, ezmax_api_definition__full_provinceGetAutocompleteV2__fr } ezmax_api_definition__full_provinceGetAutocompleteV2_Accept-Language_e;


// Retrieve Provinces and IDs
//
// Get the list of Province to be used in a dropdown or autocomplete control.
//
province_get_autocomplete_v2_response_t*
ObjectProvinceAPI_provinceGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_provinceGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_provinceGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


