#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/creditcardclient_create_object_v1_request.h"
#include "../model/creditcardclient_create_object_v1_response.h"
#include "../model/creditcardclient_delete_object_v1_response.h"
#include "../model/creditcardclient_edit_object_v1_request.h"
#include "../model/creditcardclient_edit_object_v1_response.h"
#include "../model/creditcardclient_get_autocomplete_v2_response.h"
#include "../model/creditcardclient_get_list_v1_response.h"
#include "../model/creditcardclient_get_object_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_creditcardclientGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_creditcardclientGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_creditcardclientGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_creditcardclientGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_creditcardclientGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_creditcardclientGetAutocompleteV2__*, ezmax_api_definition__full_creditcardclientGetAutocompleteV2__en, ezmax_api_definition__full_creditcardclientGetAutocompleteV2__fr } ezmax_api_definition__full_creditcardclientGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectCreditcardclientAPI_creditcardclientGetListV1
typedef enum  { ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_pkiCreditcardclientID_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_pkiCreditcardclientID_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_fkiCreditcarddetailID_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_fkiCreditcarddetailID_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientrelationIsdefault_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientrelationIsdefault_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_sCreditcardclientDescription_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_sCreditcardclientDescription_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientIsactive_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientIsactive_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientAllowedagencypayment_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientAllowedagencypayment_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientAllowedroyallepageprotection_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientAllowedroyallepageprotection_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientAllowedtranquillit_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_bCreditcardclientAllowedtranquillit_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_iCreditcarddetailExpirationmonth_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_iCreditcarddetailExpirationmonth_DESC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_iCreditcarddetailExpirationyear_ASC, ezmax_api_definition__full_creditcardclientGetListV1_EORDERBY_iCreditcarddetailExpirationyear_DESC } ezmax_api_definition__full_creditcardclientGetListV1_eOrderBy_e;

// Enum  for ObjectCreditcardclientAPI_creditcardclientGetListV1
typedef enum  { ezmax_api_definition__full_creditcardclientGetListV1__NULL = 0, ezmax_api_definition__full_creditcardclientGetListV1__*, ezmax_api_definition__full_creditcardclientGetListV1__en, ezmax_api_definition__full_creditcardclientGetListV1__fr } ezmax_api_definition__full_creditcardclientGetListV1_Accept-Language_e;


// Create a new Creditcardclient
//
// The endpoint allows to create one or many elements at once.
//
creditcardclient_create_object_v1_response_t*
ObjectCreditcardclientAPI_creditcardclientCreateObjectV1(apiClient_t *apiClient, creditcardclient_create_object_v1_request_t *creditcardclient_create_object_v1_request);


// Delete an existing Creditcardclient
//
// 
//
creditcardclient_delete_object_v1_response_t*
ObjectCreditcardclientAPI_creditcardclientDeleteObjectV1(apiClient_t *apiClient, int *pkiCreditcardclientID);


// Edit an existing Creditcardclient
//
// 
//
creditcardclient_edit_object_v1_response_t*
ObjectCreditcardclientAPI_creditcardclientEditObjectV1(apiClient_t *apiClient, int *pkiCreditcardclientID, creditcardclient_edit_object_v1_request_t *creditcardclient_edit_object_v1_request);


// Retrieve Creditcardclients and IDs
//
// Get the list of Creditcardclient to be used in a dropdown or autocomplete control.
//
creditcardclient_get_autocomplete_v2_response_t*
ObjectCreditcardclientAPI_creditcardclientGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_creditcardclientGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Creditcardclient list
//
// 
//
creditcardclient_get_list_v1_response_t*
ObjectCreditcardclientAPI_creditcardclientGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_creditcardclientGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Creditcardclient
//
// 
//
creditcardclient_get_object_v2_response_t*
ObjectCreditcardclientAPI_creditcardclientGetObjectV2(apiClient_t *apiClient, int *pkiCreditcardclientID);


