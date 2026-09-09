#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/officetaxreport_batch_download_v1_request.h"
#include "../model/officetaxreport_get_attachments_v1_response.h"
#include "../model/officetaxreport_import_into_edm_v1_request.h"
#include "../model/officetaxreport_import_into_edm_v1_response.h"


// Download multiples attachments from an Officetaxreport
//
binary_t*
ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request);


// Retrieve Officetaxreport's attachments
//
officetaxreport_get_attachments_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);


// Import attachments into the Officetaxreport
//
officetaxreport_import_into_edm_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request);


