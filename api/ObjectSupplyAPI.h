#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/supply_create_object_v1_request.h"
#include "../model/supply_create_object_v1_response.h"
#include "../model/supply_edit_object_v1_request.h"
#include "../model/supply_get_autocomplete_v2_response.h"
#include "../model/supply_get_list_v1_response.h"
#include "../model/supply_get_object_v2_response.h"

// Enum SSELECTOR for ObjectSupplyAPI_supplyGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_supplyGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_supplyGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_supplyGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectSupplyAPI_supplyGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_supplyGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_supplyGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_supplyGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_supplyGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_supplyGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectSupplyAPI_supplyGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_supplyGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_supplyGetAutocompleteV2__*, ezmax_api_definition__full_supplyGetAutocompleteV2__en, ezmax_api_definition__full_supplyGetAutocompleteV2__fr } ezmax_api_definition__full_supplyGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectSupplyAPI_supplyGetListV1
typedef enum  { ezmax_api_definition__full_supplyGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_supplyGetListV1_EORDERBY_pkiSupplyID_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_pkiSupplyID_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_fkiGlaccountID_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_fkiGlaccountID_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_fkiGlaccountcontainerID_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_fkiGlaccountcontainerID_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_fkiVariableexpenseID_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_fkiVariableexpenseID_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_sSupplyCode_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_sSupplyCode_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_sSupplyDescriptionX_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_sSupplyDescriptionX_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_dSupplyUnitprice_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_dSupplyUnitprice_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_bSupplyIsactive_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_bSupplyIsactive_DESC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_bSupplyVariableprice_ASC, ezmax_api_definition__full_supplyGetListV1_EORDERBY_bSupplyVariableprice_DESC } ezmax_api_definition__full_supplyGetListV1_eOrderBy_e;

// Enum  for ObjectSupplyAPI_supplyGetListV1
typedef enum  { ezmax_api_definition__full_supplyGetListV1__NULL = 0, ezmax_api_definition__full_supplyGetListV1__*, ezmax_api_definition__full_supplyGetListV1__en, ezmax_api_definition__full_supplyGetListV1__fr } ezmax_api_definition__full_supplyGetListV1_Accept-Language_e;


// Create a new Supply
//
// The endpoint allows to create one or many elements at once.
//
supply_create_object_v1_response_t*
ObjectSupplyAPI_supplyCreateObjectV1(apiClient_t *apiClient, supply_create_object_v1_request_t *supply_create_object_v1_request);


// Delete an existing Supply
//
// 
//
common_response_t*
ObjectSupplyAPI_supplyDeleteObjectV1(apiClient_t *apiClient, int *pkiSupplyID);


// Edit an existing Supply
//
// 
//
common_response_t*
ObjectSupplyAPI_supplyEditObjectV1(apiClient_t *apiClient, int *pkiSupplyID, supply_edit_object_v1_request_t *supply_edit_object_v1_request);


// Retrieve Supplys and IDs
//
// Get the list of Supply to be used in a dropdown or autocomplete control.
//
supply_get_autocomplete_v2_response_t*
ObjectSupplyAPI_supplyGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_supplyGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_supplyGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Supply list
//
// 
//
supply_get_list_v1_response_t*
ObjectSupplyAPI_supplyGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_supplyGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Supply
//
// 
//
supply_get_object_v2_response_t*
ObjectSupplyAPI_supplyGetObjectV2(apiClient_t *apiClient, int *pkiSupplyID);


