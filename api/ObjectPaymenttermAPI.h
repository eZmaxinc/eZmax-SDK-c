#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/paymentterm_create_object_v1_request.h"
#include "../model/paymentterm_create_object_v1_response.h"
#include "../model/paymentterm_edit_object_v1_request.h"
#include "../model/paymentterm_edit_object_v1_response.h"
#include "../model/paymentterm_get_autocomplete_v2_response.h"
#include "../model/paymentterm_get_list_v1_response.h"
#include "../model/paymentterm_get_object_v2_response.h"

// Enum SSELECTOR for ObjectPaymenttermAPI_paymenttermGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_paymenttermGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_paymenttermGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_paymenttermGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectPaymenttermAPI_paymenttermGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_paymenttermGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_paymenttermGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_paymenttermGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_paymenttermGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_paymenttermGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectPaymenttermAPI_paymenttermGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_paymenttermGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_paymenttermGetAutocompleteV2__*, ezmax_api_definition__full_paymenttermGetAutocompleteV2__en, ezmax_api_definition__full_paymenttermGetAutocompleteV2__fr } ezmax_api_definition__full_paymenttermGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectPaymenttermAPI_paymenttermGetListV1
typedef enum  { ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_pkiPaymenttermID_ASC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_pkiPaymenttermID_DESC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_sPaymenttermCode_ASC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_sPaymenttermCode_DESC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_ePaymenttermType_ASC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_ePaymenttermType_DESC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_iPaymenttermDay_ASC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_iPaymenttermDay_DESC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_sPaymenttermDescriptionX_ASC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_sPaymenttermDescriptionX_DESC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_bPaymenttermIsactive_ASC, ezmax_api_definition__full_paymenttermGetListV1_EORDERBY_bPaymenttermIsactive_DESC } ezmax_api_definition__full_paymenttermGetListV1_eOrderBy_e;

// Enum  for ObjectPaymenttermAPI_paymenttermGetListV1
typedef enum  { ezmax_api_definition__full_paymenttermGetListV1__NULL = 0, ezmax_api_definition__full_paymenttermGetListV1__*, ezmax_api_definition__full_paymenttermGetListV1__en, ezmax_api_definition__full_paymenttermGetListV1__fr } ezmax_api_definition__full_paymenttermGetListV1_Accept-Language_e;


// Create a new Paymentterm
//
// The endpoint allows to create one or many elements at once.
//
paymentterm_create_object_v1_response_t*
ObjectPaymenttermAPI_paymenttermCreateObjectV1(apiClient_t *apiClient, paymentterm_create_object_v1_request_t * paymentterm_create_object_v1_request );


// Edit an existing Paymentterm
//
// 
//
paymentterm_edit_object_v1_response_t*
ObjectPaymenttermAPI_paymenttermEditObjectV1(apiClient_t *apiClient, int pkiPaymenttermID , paymentterm_edit_object_v1_request_t * paymentterm_edit_object_v1_request );


// Retrieve Paymentterms and IDs
//
// Get the list of Paymentterm to be used in a dropdown or autocomplete control.
//
paymentterm_get_autocomplete_v2_response_t*
ObjectPaymenttermAPI_paymenttermGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_paymenttermGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_paymenttermGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve Paymentterm list
//
paymentterm_get_list_v1_response_t*
ObjectPaymenttermAPI_paymenttermGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_paymenttermGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Paymentterm
//
// 
//
paymentterm_get_object_v2_response_t*
ObjectPaymenttermAPI_paymenttermGetObjectV2(apiClient_t *apiClient, int pkiPaymenttermID );


