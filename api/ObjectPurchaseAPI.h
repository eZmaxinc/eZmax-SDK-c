#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/purchase_batch_download_v1_request.h"
#include "../model/purchase_get_attachments_v1_response.h"
#include "../model/purchase_import_into_edm_v1_request.h"
#include "../model/purchase_import_into_edm_v1_response.h"


// Download multiples attachments from a Purchase
//
binary_t*
ObjectPurchaseAPI_purchaseBatchDownloadV1(apiClient_t *apiClient, int *pkiPurchaseID, purchase_batch_download_v1_request_t *purchase_batch_download_v1_request);


// Retrieve Purchase's attachments
//
purchase_get_attachments_v1_response_t*
ObjectPurchaseAPI_purchaseGetAttachmentsV1(apiClient_t *apiClient, int *pkiPurchaseID);


// Import attachments into the Purchase
//
purchase_import_into_edm_v1_response_t*
ObjectPurchaseAPI_purchaseImportIntoEDMV1(apiClient_t *apiClient, int *pkiPurchaseID, purchase_import_into_edm_v1_request_t *purchase_import_into_edm_v1_request);


