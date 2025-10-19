#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/domain_create_object_v1_request.h"
#include "../model/domain_create_object_v1_response.h"
#include "../model/domain_delete_object_v1_response.h"
#include "../model/domain_get_autocomplete_v2_response.h"
#include "../model/domain_get_list_v1_response.h"
#include "../model/domain_get_object_v2_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectDomainAPI_domainGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_domainGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_domainGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_domainGetAutocompleteV2_SSELECTOR_ValidEmail } ezmax_api_definition__full_domainGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectDomainAPI_domainGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_domainGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_domainGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_domainGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_domainGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_domainGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectDomainAPI_domainGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_domainGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_domainGetAutocompleteV2__*, ezmax_api_definition__full_domainGetAutocompleteV2__en, ezmax_api_definition__full_domainGetAutocompleteV2__fr } ezmax_api_definition__full_domainGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectDomainAPI_domainGetListV1
typedef enum  { ezmax_api_definition__full_domainGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_domainGetListV1_EORDERBY_pkiDomainID_ASC, ezmax_api_definition__full_domainGetListV1_EORDERBY_pkiDomainID_DESC, ezmax_api_definition__full_domainGetListV1_EORDERBY_sDomainName_ASC, ezmax_api_definition__full_domainGetListV1_EORDERBY_sDomainName_DESC } ezmax_api_definition__full_domainGetListV1_eOrderBy_e;

// Enum  for ObjectDomainAPI_domainGetListV1
typedef enum  { ezmax_api_definition__full_domainGetListV1__NULL = 0, ezmax_api_definition__full_domainGetListV1__*, ezmax_api_definition__full_domainGetListV1__en, ezmax_api_definition__full_domainGetListV1__fr } ezmax_api_definition__full_domainGetListV1_Accept-Language_e;


// Create a new Domain
//
// The endpoint allows to create one or many elements at once.
//
domain_create_object_v1_response_t*
ObjectDomainAPI_domainCreateObjectV1(apiClient_t *apiClient, domain_create_object_v1_request_t *domain_create_object_v1_request);


// Delete an existing Domain
//
// 
//
domain_delete_object_v1_response_t*
ObjectDomainAPI_domainDeleteObjectV1(apiClient_t *apiClient, int *pkiDomainID);


// Retrieve Domain and IDs
//
// Get the list of Domains to be used in a dropdown or autocomplete control.
//
domain_get_autocomplete_v2_response_t*
ObjectDomainAPI_domainGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_domainGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_domainGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve Domain list
//
// 
//
domain_get_list_v1_response_t*
ObjectDomainAPI_domainGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_domainGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Domain
//
// 
//
domain_get_object_v2_response_t*
ObjectDomainAPI_domainGetObjectV2(apiClient_t *apiClient, int *pkiDomainID);


