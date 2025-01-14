#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/invoice_get_attachments_v1_response.h"
#include "../model/invoice_get_communication_count_v1_response.h"
#include "../model/invoice_get_communication_list_v1_response.h"
#include "../model/invoice_get_communicationrecipients_v1_response.h"
#include "../model/invoice_get_communicationsenders_v1_response.h"


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


