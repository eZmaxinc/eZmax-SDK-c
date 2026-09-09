#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/deposittransitcheque_batch_download_v1_request.h"
#include "../model/deposittransitcheque_get_attachments_v1_response.h"
#include "../model/deposittransitcheque_import_into_edm_v1_request.h"
#include "../model/deposittransitcheque_import_into_edm_v1_response.h"


// Download multiples attachments from a Deposittransitcheque
//
binary_t*
ObjectDeposittransitchequeAPI_deposittransitchequeBatchDownloadV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID, deposittransitcheque_batch_download_v1_request_t *deposittransitcheque_batch_download_v1_request);


// Retrieve Deposittransitcheque's attachments
//
deposittransitcheque_get_attachments_v1_response_t*
ObjectDeposittransitchequeAPI_deposittransitchequeGetAttachmentsV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID);


// Import attachments into the Deposittransitcheque
//
deposittransitcheque_import_into_edm_v1_response_t*
ObjectDeposittransitchequeAPI_deposittransitchequeImportIntoEDMV1(apiClient_t *apiClient, int *pkiDeposittransitchequeID, deposittransitcheque_import_into_edm_v1_request_t *deposittransitcheque_import_into_edm_v1_request);


