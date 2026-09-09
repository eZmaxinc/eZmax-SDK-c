#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/commissionadvance_batch_download_v1_request.h"
#include "../model/commissionadvance_get_attachments_v1_response.h"
#include "../model/commissionadvance_import_into_edm_v1_request.h"
#include "../model/commissionadvance_import_into_edm_v1_response.h"
#include "../model/common_response_error.h"


// Download multiples attachments from a Commission advance
//
binary_t*
ObjectCommissionadvanceAPI_commissionadvanceBatchDownloadV1(apiClient_t *apiClient, int *pkiCommissionadvanceID, commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request);


// Retrieve Commissionadvance's attachments
//
commissionadvance_get_attachments_v1_response_t*
ObjectCommissionadvanceAPI_commissionadvanceGetAttachmentsV1(apiClient_t *apiClient, int *pkiCommissionadvanceID);


// Import attachments into the Commissionadvance
//
commissionadvance_import_into_edm_v1_response_t*
ObjectCommissionadvanceAPI_commissionadvanceImportIntoEDMV1(apiClient_t *apiClient, int *pkiCommissionadvanceID, commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request);


