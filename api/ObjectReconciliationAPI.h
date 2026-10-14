#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/reconciliation_batch_download_v1_request.h"
#include "../model/reconciliation_get_attachments_v1_response.h"
#include "../model/reconciliation_get_communication_count_v1_response.h"
#include "../model/reconciliation_get_communication_list_v1_response.h"
#include "../model/reconciliation_get_communicationrecipients_v1_response.h"
#include "../model/reconciliation_get_communicationsenders_v1_response.h"
#include "../model/reconciliation_import_into_edm_v1_request.h"
#include "../model/reconciliation_import_into_edm_v1_response.h"


// Download multiples attachments from a Reconciliation
//
binary_t*
ObjectReconciliationAPI_reconciliationBatchDownloadV1(apiClient_t *apiClient, int *pkiReconciliationID, reconciliation_batch_download_v1_request_t *reconciliation_batch_download_v1_request);


// Retrieve Reconciliation's attachments
//
reconciliation_get_attachments_v1_response_t*
ObjectReconciliationAPI_reconciliationGetAttachmentsV1(apiClient_t *apiClient, int *pkiReconciliationID);


// Retrieve Communication count
//
reconciliation_get_communication_count_v1_response_t*
ObjectReconciliationAPI_reconciliationGetCommunicationCountV1(apiClient_t *apiClient, int *pkiReconciliationID);


// Retrieve Communication list
//
reconciliation_get_communication_list_v1_response_t*
ObjectReconciliationAPI_reconciliationGetCommunicationListV1(apiClient_t *apiClient, int *pkiReconciliationID);


// Retrieve Communication recipients
//
reconciliation_get_communicationrecipients_v1_response_t*
ObjectReconciliationAPI_reconciliationGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiReconciliationID);


// Retrieve Communication senders
//
reconciliation_get_communicationsenders_v1_response_t*
ObjectReconciliationAPI_reconciliationGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiReconciliationID);


// Import attachments into the Reconciliation
//
reconciliation_import_into_edm_v1_response_t*
ObjectReconciliationAPI_reconciliationImportIntoEDMV1(apiClient_t *apiClient, int *pkiReconciliationID, reconciliation_import_into_edm_v1_request_t *reconciliation_import_into_edm_v1_request);


