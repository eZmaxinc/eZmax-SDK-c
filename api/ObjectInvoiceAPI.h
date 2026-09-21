#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/invoice_batch_download_v1_request.h"
#include "../model/invoice_get_attachments_v1_response.h"
#include "../model/invoice_get_communication_count_v1_response.h"
#include "../model/invoice_get_communication_list_v1_response.h"
#include "../model/invoice_get_communicationrecipients_v1_response.h"
#include "../model/invoice_get_communicationsenders_v1_response.h"
#include "../model/invoice_get_list_v1_response.h"
#include "../model/invoice_import_into_edm_v1_request.h"
#include "../model/invoice_import_into_edm_v1_response.h"

// Enum EORDERBY for ObjectInvoiceAPI_invoiceGetListV1
typedef enum  { ezmax_api_definition__full_invoiceGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_pkiInvoiceID_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_pkiInvoiceID_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiAgentID_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiAgentID_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiBrokerID_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiBrokerID_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiCustomerID_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiCustomerID_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiPeriodID_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_fkiPeriodID_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_sPeriodYYYYMM_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_sPeriodYYYYMM_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_bInvoiceIspaid_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_bInvoiceIspaid_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dInvoiceTotal_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dInvoiceTotal_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dInvoicePaid_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dInvoicePaid_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dInvoiceBalance_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dInvoiceBalance_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dtInvoiceDate_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_dtInvoiceDate_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_eInvoiceType_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_eInvoiceType_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_sInvoiceNumber_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_sInvoiceNumber_DESC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_sInvoiceRecipient_ASC, ezmax_api_definition__full_invoiceGetListV1_EORDERBY_sInvoiceRecipient_DESC } ezmax_api_definition__full_invoiceGetListV1_eOrderBy_e;

// Enum  for ObjectInvoiceAPI_invoiceGetListV1
typedef enum  { ezmax_api_definition__full_invoiceGetListV1__NULL = 0, ezmax_api_definition__full_invoiceGetListV1__*, ezmax_api_definition__full_invoiceGetListV1__en, ezmax_api_definition__full_invoiceGetListV1__fr } ezmax_api_definition__full_invoiceGetListV1_Accept-Language_e;


// Download multiples attachments from an Invoice
//
binary_t*
ObjectInvoiceAPI_invoiceBatchDownloadV1(apiClient_t *apiClient, int *pkiInvoiceID, invoice_batch_download_v1_request_t *invoice_batch_download_v1_request);


// Retrieve Invoice's Attachments
//
// 
//
invoice_get_attachments_v1_response_t*
ObjectInvoiceAPI_invoiceGetAttachmentsV1(apiClient_t *apiClient, int *pkiInvoiceID);


// Retrieve Communication count
//
// 
//
invoice_get_communication_count_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInvoiceID);


// Retrieve Communication list
//
// 
//
invoice_get_communication_list_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationListV1(apiClient_t *apiClient, int *pkiInvoiceID);


// Retrieve Invoice's Communicationrecipient
//
// 
//
invoice_get_communicationrecipients_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInvoiceID);


// Retrieve Invoice's Communicationsender
//
// 
//
invoice_get_communicationsenders_v1_response_t*
ObjectInvoiceAPI_invoiceGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInvoiceID);


// Retrieve Invoice list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eInvoiceType | Commission<br>CommissionAdvance<br>Financed<br>Manual<br>Monthly |
//
invoice_get_list_v1_response_t*
ObjectInvoiceAPI_invoiceGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_invoiceGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Import attachments into the Invoice
//
// 
//
invoice_import_into_edm_v1_response_t*
ObjectInvoiceAPI_invoiceImportIntoEDMV1(apiClient_t *apiClient, int *pkiInvoiceID, invoice_import_into_edm_v1_request_t *invoice_import_into_edm_v1_request);


