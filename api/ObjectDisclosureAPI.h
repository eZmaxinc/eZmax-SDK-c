#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/disclosure_batch_download_v1_request.h"
#include "../model/disclosure_get_attachments_v1_response.h"
#include "../model/disclosure_import_into_edm_v1_request.h"
#include "../model/disclosure_import_into_edm_v1_response.h"


// Download multiples attachments from a Disclosure
//
binary_t*
ObjectDisclosureAPI_disclosureBatchDownloadV1(apiClient_t *apiClient, int *pkiDisclosureID, disclosure_batch_download_v1_request_t *disclosure_batch_download_v1_request);


// Retrieve Disclosure's attachments
//
disclosure_get_attachments_v1_response_t*
ObjectDisclosureAPI_disclosureGetAttachmentsV1(apiClient_t *apiClient, int *pkiDisclosureID);


// Import attachments into the Disclosure
//
disclosure_import_into_edm_v1_response_t*
ObjectDisclosureAPI_disclosureImportIntoEDMV1(apiClient_t *apiClient, int *pkiDisclosureID, disclosure_import_into_edm_v1_request_t *disclosure_import_into_edm_v1_request);


