#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/billingentityexternal_generate_federation_token_v1_request.h"
#include "../model/billingentityexternal_generate_federation_token_v1_response.h"
#include "../model/billingentityexternal_get_autocomplete_v2_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_billingentityexternalGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2__*, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2__en, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2__fr } ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_Accept-Language_e;


// Generate a federation token
//
// 
//
billingentityexternal_generate_federation_token_v1_response_t*
ObjectBillingentityexternalAPI_billingentityexternalGenerateFederationTokenV1(apiClient_t *apiClient, int *pkiBillingentityexternalID, billingentityexternal_generate_federation_token_v1_request_t *billingentityexternal_generate_federation_token_v1_request);


// Retrieve Billingentityexternals and IDs
//
// Get the list of Billingentityexternal to be used in a dropdown or autocomplete control.
//
billingentityexternal_get_autocomplete_v2_response_t*
ObjectBillingentityexternalAPI_billingentityexternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_billingentityexternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


