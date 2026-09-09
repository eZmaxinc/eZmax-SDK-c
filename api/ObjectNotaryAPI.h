#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/notary_batch_download_v1_request.h"
#include "../model/notary_get_attachments_v1_response.h"
#include "../model/notary_import_into_edm_v1_request.h"
#include "../model/notary_import_into_edm_v1_response.h"


// Download multiples attachments from a Notary
//
binary_t*
ObjectNotaryAPI_notaryBatchDownloadV1(apiClient_t *apiClient, int *pkiNotaryID, notary_batch_download_v1_request_t *notary_batch_download_v1_request);


// Retrieve Notary's attachments
//
notary_get_attachments_v1_response_t*
ObjectNotaryAPI_notaryGetAttachmentsV1(apiClient_t *apiClient, int *pkiNotaryID);


// Import attachments into the Notary
//
notary_import_into_edm_v1_response_t*
ObjectNotaryAPI_notaryImportIntoEDMV1(apiClient_t *apiClient, int *pkiNotaryID, notary_import_into_edm_v1_request_t *notary_import_into_edm_v1_request);


