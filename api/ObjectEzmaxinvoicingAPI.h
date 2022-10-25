#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_autocomplete_v1_response.h"
#include "../model/common_response_error.h"
#include "../model/ezmaxinvoicing_get_autocomplete_v2_response.h"
#include "../model/ezmaxinvoicing_get_object_v1_response.h"
#include "../model/ezmaxinvoicing_get_provisional_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_SSELECTOR_All } ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e;

// Enum EFILTERACTIVE for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_All, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_Active, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_EFILTERACTIVE_Inactive } ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e;

// Enum  for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1
typedef enum  { ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1__NULL = 0, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1__*, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1__en, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1__fr } ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_Accept-Language_e;

// Enum SSELECTOR for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2__*, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2__en, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2__fr } ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_Accept-Language_e;


// Retrieve Ezmaxinvoicings and IDs
//
// Get the list of Ezmaxinvoicing to be used in a dropdown or autocomplete control.
//
common_get_autocomplete_v1_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV1(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_sSelector_e sSelector , ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV1_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve Ezmaxinvoicings and IDs
//
// Get the list of Ezmaxinvoicing to be used in a dropdown or autocomplete control.
//
ezmaxinvoicing_get_autocomplete_v2_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_ezmaxinvoicingGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve an existing Ezmaxinvoicing
//
// 
//
ezmaxinvoicing_get_object_v1_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetObjectV1(apiClient_t *apiClient, int pkiEzmaxinvoicingID );


// Retrieve provisional Ezmaxinvoicing
//
// 
//
ezmaxinvoicing_get_provisional_v1_response_t*
ObjectEzmaxinvoicingAPI_ezmaxinvoicingGetProvisionalV1(apiClient_t *apiClient);


