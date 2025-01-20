#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/billingentityinternal_create_object_v1_request.h"
#include "../model/billingentityinternal_create_object_v1_response.h"
#include "../model/billingentityinternal_edit_object_v1_request.h"
#include "../model/billingentityinternal_get_autocomplete_v2_response.h"
#include "../model/billingentityinternal_get_list_v1_response.h"
#include "../model/billingentityinternal_get_object_v2_response.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_billingentityinternalGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2__*, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2__en, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2__fr } ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectBillingentityinternalAPI_billingentityinternalGetListV1
typedef enum  { ezmax_api_definition__full_billingentityinternalGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_billingentityinternalGetListV1_EORDERBY_pkiBillingentityinternalID_ASC, ezmax_api_definition__full_billingentityinternalGetListV1_EORDERBY_pkiBillingentityinternalID_DESC, ezmax_api_definition__full_billingentityinternalGetListV1_EORDERBY_sBillingentityinternalDescriptionX_ASC, ezmax_api_definition__full_billingentityinternalGetListV1_EORDERBY_sBillingentityinternalDescriptionX_DESC } ezmax_api_definition__full_billingentityinternalGetListV1_eOrderBy_e;

// Enum  for ObjectBillingentityinternalAPI_billingentityinternalGetListV1
typedef enum  { ezmax_api_definition__full_billingentityinternalGetListV1__NULL = 0, ezmax_api_definition__full_billingentityinternalGetListV1__*, ezmax_api_definition__full_billingentityinternalGetListV1__en, ezmax_api_definition__full_billingentityinternalGetListV1__fr } ezmax_api_definition__full_billingentityinternalGetListV1_Accept-Language_e;


// Create a new Billingentityinternal
//
// The endpoint allows to create one or many elements at once.
//
billingentityinternal_create_object_v1_response_t*
ObjectBillingentityinternalAPI_billingentityinternalCreateObjectV1(apiClient_t *apiClient, billingentityinternal_create_object_v1_request_t *billingentityinternal_create_object_v1_request);


// Edit an existing Billingentityinternal
//
// 
//
common_response_t*
ObjectBillingentityinternalAPI_billingentityinternalEditObjectV1(apiClient_t *apiClient, int *pkiBillingentityinternalID, billingentityinternal_edit_object_v1_request_t *billingentityinternal_edit_object_v1_request);


// Retrieve Billingentityinternals and IDs
//
// Get the list of Billingentityinternal to be used in a dropdown or autocomplete control.
//
billingentityinternal_get_autocomplete_v2_response_t*
ObjectBillingentityinternalAPI_billingentityinternalGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_billingentityinternalGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Billingentityinternal list
//
// 
//
billingentityinternal_get_list_v1_response_t*
ObjectBillingentityinternalAPI_billingentityinternalGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_billingentityinternalGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Billingentityinternal
//
// 
//
billingentityinternal_get_object_v2_response_t*
ObjectBillingentityinternalAPI_billingentityinternalGetObjectV2(apiClient_t *apiClient, int *pkiBillingentityinternalID);


