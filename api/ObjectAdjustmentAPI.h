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
#include "../model/adjustment_get_list_v1_response.h"
#include "../model/adjustment_import_into_edm_v1_request.h"
#include "../model/adjustment_import_into_edm_v1_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectAdjustmentAPI_adjustmentGetListV1
typedef enum  { ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_pkiAdjustmentID_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_pkiAdjustmentID_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_fkiPeriodID_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_fkiPeriodID_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sPeriodYYYYMM_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sPeriodYYYYMM_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_fkiUserIDCreated_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_fkiUserIDCreated_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sUserLoginname_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sUserLoginname_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_dtAdjustmentDate_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_dtAdjustmentDate_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sAdjustmentNumber_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sAdjustmentNumber_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sAdjustmentComment_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_sAdjustmentComment_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_dAdjustmentTotaldebit_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_dAdjustmentTotaldebit_DESC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_dAdjustmentTotalcredit_ASC, ezmax_api_definition__full_adjustmentGetListV1_EORDERBY_dAdjustmentTotalcredit_DESC } ezmax_api_definition__full_adjustmentGetListV1_eOrderBy_e;

// Enum  for ObjectAdjustmentAPI_adjustmentGetListV1
typedef enum  { ezmax_api_definition__full_adjustmentGetListV1__NULL = 0, ezmax_api_definition__full_adjustmentGetListV1__*, ezmax_api_definition__full_adjustmentGetListV1__en, ezmax_api_definition__full_adjustmentGetListV1__fr } ezmax_api_definition__full_adjustmentGetListV1_Accept-Language_e;


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


// Retrieve Adjustment list
//
// 
//
adjustment_get_list_v1_response_t*
ObjectAdjustmentAPI_adjustmentGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_adjustmentGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Import attachments into the Adjustment
//
adjustment_import_into_edm_v1_response_t*
ObjectAdjustmentAPI_adjustmentImportIntoEDMV1(apiClient_t *apiClient, int *pkiAdjustmentID, adjustment_import_into_edm_v1_request_t *adjustment_import_into_edm_v1_request);


