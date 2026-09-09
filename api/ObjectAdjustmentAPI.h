#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/adjustment_batch_download_v1_request.h"
#include "../model/adjustment_get_attachments_v1_response.h"
#include "../model/adjustment_get_communication_count_v1_response.h"
#include "../model/adjustment_get_communication_list_v1_response.h"
#include "../model/adjustment_get_communicationrecipients_v1_response.h"
#include "../model/adjustment_get_communicationsenders_v1_response.h"
#include "../model/adjustment_import_into_edm_v1_request.h"
#include "../model/adjustment_import_into_edm_v1_response.h"
#include "../model/common_response_error.h"


// Download multiples attachments from an Adjustment
//
binary_t*
ObjectAdjustmentAPI_adjustmentBatchDownloadV1(apiClient_t *apiClient, int *pkiAdjustmentID, adjustment_batch_download_v1_request_t *adjustment_batch_download_v1_request);


// Retrieve Adjustment's attachments
//
adjustment_get_attachments_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetAttachmentsV1(apiClient_t *apiClient, int *pkiAdjustmentID);


// Retrieve Communication count
//
adjustment_get_communication_count_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationCountV1(apiClient_t *apiClient, int *pkiAdjustmentID);


// Retrieve Communication list
//
adjustment_get_communication_list_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationListV1(apiClient_t *apiClient, int *pkiAdjustmentID);


// Retrieve Communication recipients
//
adjustment_get_communicationrecipients_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiAdjustmentID);


// Retrieve Communication senders
//
adjustment_get_communicationsenders_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiAdjustmentID);


// Import attachments into the Adjustment
//
adjustment_import_into_edm_v1_response_t*
ObjectAdjustmentAPI_adjustmentImportIntoEDMV1(apiClient_t *apiClient, int *pkiAdjustmentID, adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request);


