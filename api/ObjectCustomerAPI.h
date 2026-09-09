#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/customer_batch_download_v1_request.h"
#include "../model/customer_get_attachments_v1_response.h"
#include "../model/customer_get_autocomplete_v2_response.h"
#include "../model/customer_get_object_v2_response.h"
#include "../model/customer_import_into_edm_v1_request.h"
#include "../model/customer_import_into_edm_v1_response.h"
#include "../model/header_accept_language.h"

// Enum SSELECTOR for ObjectCustomerAPI_customerGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_customerGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_customerGetAutocompleteV2_SSELECTOR_All } ezmax_api_definition__full_customerGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectCustomerAPI_customerGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_customerGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_customerGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_customerGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_customerGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_customerGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectCustomerAPI_customerGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_customerGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_customerGetAutocompleteV2__*, ezmax_api_definition__full_customerGetAutocompleteV2__en, ezmax_api_definition__full_customerGetAutocompleteV2__fr } ezmax_api_definition__full_customerGetAutocompleteV2_Accept-Language_e;


// Download multiples attachments from a Customer
//
binary_t*
ObjectCustomerAPI_customerBatchDownloadV1(apiClient_t *apiClient, int *pkiCustomerID, customer_batch_download_v1_request_t *customer_batch_download_v1_request);


// Retrieve Customer's attachments
//
customer_get_attachments_v1_response_t*
ObjectCustomerAPI_customerGetAttachmentsV1(apiClient_t *apiClient, int *pkiCustomerID);


// Retrieve Customers and IDs
//
// Get the list of Customer to be used in a dropdown or autocomplete control.
//
customer_get_autocomplete_v2_response_t*
ObjectCustomerAPI_customerGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_customerGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_customerGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve an existing Customer
//
// 
//
customer_get_object_v2_response_t*
ObjectCustomerAPI_customerGetObjectV2(apiClient_t *apiClient, int *pkiCustomerID);


// Import attachments into the Customer
//
// 
//
customer_import_into_edm_v1_response_t*
ObjectCustomerAPI_customerImportIntoEDMV1(apiClient_t *apiClient, int *pkiCustomerID, customer_import_into_edm_v1_request_t *customer_import_into_edm_v1_request);


