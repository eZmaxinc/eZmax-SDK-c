#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/deposit_batch_download_v1_request.h"
#include "../model/deposit_get_attachments_v1_response.h"
#include "../model/deposit_get_communication_count_v1_response.h"
#include "../model/deposit_get_communication_list_v1_response.h"
#include "../model/deposit_get_communicationrecipients_v1_response.h"
#include "../model/deposit_get_communicationsenders_v1_response.h"
#include "../model/deposit_import_into_edm_v1_request.h"
#include "../model/deposit_import_into_edm_v1_response.h"


// Download multiples attachments from a Deposit
//
binary_t*
ObjectDepositAPI_depositBatchDownloadV1(apiClient_t *apiClient, int *pkiDepositID, deposit_batch_download_v1_request_t *deposit_batch_download_v1_request);


// Retrieve Deposit's attachments
//
deposit_get_attachments_v1_response_t*
ObjectDepositAPI_depositGetAttachmentsV1(apiClient_t *apiClient, int *pkiDepositID);


// Retrieve Communication count
//
deposit_get_communication_count_v1_response_t*
ObjectDepositAPI_depositGetCommunicationCountV1(apiClient_t *apiClient, int *pkiDepositID);


// Retrieve Communication list
//
deposit_get_communication_list_v1_response_t*
ObjectDepositAPI_depositGetCommunicationListV1(apiClient_t *apiClient, int *pkiDepositID);


// Retrieve Communication recipients
//
deposit_get_communicationrecipients_v1_response_t*
ObjectDepositAPI_depositGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiDepositID);


// Retrieve Communication senders
//
deposit_get_communicationsenders_v1_response_t*
ObjectDepositAPI_depositGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiDepositID);


// Import attachments into the Deposit
//
deposit_import_into_edm_v1_response_t*
ObjectDepositAPI_depositImportIntoEDMV1(apiClient_t *apiClient, int *pkiDepositID, deposit_import_into_edm_v1_request_t *deposit_import_into_edm_v1_request);


