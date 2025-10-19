#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/buyercontract_get_communication_count_v1_response.h"
#include "../model/buyercontract_get_communication_list_v1_response.h"
#include "../model/buyercontract_get_communicationrecipients_v1_response.h"
#include "../model/buyercontract_get_communicationsenders_v1_response.h"
#include "../model/buyercontract_get_list_v1_response.h"
#include "../model/buyercontract_import_into_edm_v1_request.h"
#include "../model/buyercontract_import_into_edm_v1_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectBuyercontractAPI_buyercontractGetListV1
typedef enum  { ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_pkiBuyercontractID_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_pkiBuyercontractID_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_fkiInscriptiontypeID_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_fkiInscriptiontypeID_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_sInscriptiontypeNameX_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_sInscriptiontypeNameX_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_eBuyercontractStep_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_eBuyercontractStep_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dBuyercontractMinimumprice_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dBuyercontractMinimumprice_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dBuyercontractMaximumprice_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dBuyercontractMaximumprice_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_eBuyercontractType_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_eBuyercontractType_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dtBuyercontractDate_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dtBuyercontractDate_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dtBuyercontractExpirationdate_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_dtBuyercontractExpirationdate_DESC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_bBuyercontractIsactive_ASC, ezmax_api_definition__full_buyercontractGetListV1_EORDERBY_bBuyercontractIsactive_DESC } ezmax_api_definition__full_buyercontractGetListV1_eOrderBy_e;

// Enum  for ObjectBuyercontractAPI_buyercontractGetListV1
typedef enum  { ezmax_api_definition__full_buyercontractGetListV1__NULL = 0, ezmax_api_definition__full_buyercontractGetListV1__*, ezmax_api_definition__full_buyercontractGetListV1__en, ezmax_api_definition__full_buyercontractGetListV1__fr } ezmax_api_definition__full_buyercontractGetListV1_Accept-Language_e;


// Retrieve Communication count
//
// 
//
buyercontract_get_communication_count_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiBuyercontractID);


// Retrieve Communication list
//
// 
//
buyercontract_get_communication_list_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiBuyercontractID);


// Retrieve Buyercontract's Communicationrecipient
//
// 
//
buyercontract_get_communicationrecipients_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiBuyercontractID);


// Retrieve Buyercontract's Communicationsender
//
// 
//
buyercontract_get_communicationsenders_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiBuyercontractID);


// Retrieve Buyercontract list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eBuyercontractStep | Imported<br>Active<br>Modified<br>ContractEnded<br>ExpiredContract<br>Bought | | eBuyercontractType | Rent<br>Sale<br>RentOrSale |
//
buyercontract_get_list_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_buyercontractGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Import attachments into the Buyercontract
//
// 
//
buyercontract_import_into_edm_v1_response_t*
ObjectBuyercontractAPI_buyercontractImportIntoEDMV1(apiClient_t *apiClient, int *pkiBuyercontractID, buyercontract_import_into_edm_v1_request_t *buyercontract_import_into_edm_v1_request);


