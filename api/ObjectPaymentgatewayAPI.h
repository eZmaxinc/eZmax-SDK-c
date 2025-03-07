#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/paymentgateway_create_object_v1_request.h"
#include "../model/paymentgateway_create_object_v1_response.h"
#include "../model/paymentgateway_edit_object_v1_request.h"
#include "../model/paymentgateway_edit_object_v1_response.h"
#include "../model/paymentgateway_get_autocomplete_v2_response.h"
#include "../model/paymentgateway_get_list_v1_response.h"
#include "../model/paymentgateway_get_object_v2_response.h"

// Enum SSELECTOR for ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_paymentgatewayGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2__*, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2__en, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2__fr } ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectPaymentgatewayAPI_paymentgatewayGetListV1
typedef enum  { ezmax_api_definition__full_paymentgatewayGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_paymentgatewayGetListV1_EORDERBY_pkiPaymentgatewayID_ASC, ezmax_api_definition__full_paymentgatewayGetListV1_EORDERBY_pkiPaymentgatewayID_DESC, ezmax_api_definition__full_paymentgatewayGetListV1_EORDERBY_fkiCreditcardmerchantID_ASC, ezmax_api_definition__full_paymentgatewayGetListV1_EORDERBY_fkiCreditcardmerchantID_DESC, ezmax_api_definition__full_paymentgatewayGetListV1_EORDERBY_ePaymentgatewayProcessor_ASC, ezmax_api_definition__full_paymentgatewayGetListV1_EORDERBY_ePaymentgatewayProcessor_DESC } ezmax_api_definition__full_paymentgatewayGetListV1_eOrderBy_e;

// Enum  for ObjectPaymentgatewayAPI_paymentgatewayGetListV1
typedef enum  { ezmax_api_definition__full_paymentgatewayGetListV1__NULL = 0, ezmax_api_definition__full_paymentgatewayGetListV1__*, ezmax_api_definition__full_paymentgatewayGetListV1__en, ezmax_api_definition__full_paymentgatewayGetListV1__fr } ezmax_api_definition__full_paymentgatewayGetListV1_Accept-Language_e;


// Create a new Paymentgateway
//
// The endpoint allows to create one or many elements at once.
//
paymentgateway_create_object_v1_response_t*
ObjectPaymentgatewayAPI_paymentgatewayCreateObjectV1(apiClient_t *apiClient, paymentgateway_create_object_v1_request_t *paymentgateway_create_object_v1_request);


// Edit an existing Paymentgateway
//
// 
//
paymentgateway_edit_object_v1_response_t*
ObjectPaymentgatewayAPI_paymentgatewayEditObjectV1(apiClient_t *apiClient, int *pkiPaymentgatewayID, paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request);


// Retrieve Paymentgateways and IDs
//
// Get the list of Paymentgateway to be used in a dropdown or autocomplete control.
//
paymentgateway_get_autocomplete_v2_response_t*
ObjectPaymentgatewayAPI_paymentgatewayGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_paymentgatewayGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Paymentgateway list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | ePaymentgatewayProcessor | Moneris |
//
paymentgateway_get_list_v1_response_t*
ObjectPaymentgatewayAPI_paymentgatewayGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_paymentgatewayGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Paymentgateway
//
// 
//
paymentgateway_get_object_v2_response_t*
ObjectPaymentgatewayAPI_paymentgatewayGetObjectV2(apiClient_t *apiClient, int *pkiPaymentgatewayID);


