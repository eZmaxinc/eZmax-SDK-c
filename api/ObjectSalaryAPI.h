#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/salary_batch_download_v1_request.h"
#include "../model/salary_get_attachments_v1_response.h"
#include "../model/salary_import_into_edm_v1_request.h"
#include "../model/salary_import_into_edm_v1_response.h"


// Download multiples attachments from a Reconciliation
//
binary_t*
ObjectSalaryAPI_salaryBatchDownloadV1(apiClient_t *apiClient, int *pkiSalaryID, salary_batch_download_v1_request_t *salary_batch_download_v1_request);


// Retrieve Salary's attachments
//
salary_get_attachments_v1_response_t*
ObjectSalaryAPI_salaryGetAttachmentsV1(apiClient_t *apiClient, int *pkiSalaryID);


// Import attachments into the Salary
//
salary_import_into_edm_v1_response_t*
ObjectSalaryAPI_salaryImportIntoEDMV1(apiClient_t *apiClient, int *pkiSalaryID, salary_import_into_edm_v1_request_t *salary_import_into_edm_v1_request);


