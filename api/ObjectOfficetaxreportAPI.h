#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/officetaxreport_batch_download_v1_request.h"
#include "../model/officetaxreport_get_attachments_v1_response.h"
#include "../model/officetaxreport_get_communication_count_v1_response.h"
#include "../model/officetaxreport_get_communication_list_v1_response.h"
#include "../model/officetaxreport_get_communicationrecipients_v1_response.h"
#include "../model/officetaxreport_get_communicationsenders_v1_response.h"
#include "../model/officetaxreport_get_list_v1_response.h"
#include "../model/officetaxreport_import_into_edm_v1_request.h"
#include "../model/officetaxreport_import_into_edm_v1_response.h"

// Enum EORDERBY for ObjectOfficetaxreportAPI_officetaxreportGetListV1
typedef enum  { ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_pkiOfficetaxreportID_ASC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_pkiOfficetaxreportID_DESC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_fkiPeriodID_ASC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_fkiPeriodID_DESC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_sPeriodYYYYMM_ASC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_sPeriodYYYYMM_DESC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_sUserLoginname_ASC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_sUserLoginname_DESC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_dtCreatedDate_ASC, ezmax_api_definition__full_officetaxreportGetListV1_EORDERBY_dtCreatedDate_DESC } ezmax_api_definition__full_officetaxreportGetListV1_eOrderBy_e;

// Enum  for ObjectOfficetaxreportAPI_officetaxreportGetListV1
typedef enum  { ezmax_api_definition__full_officetaxreportGetListV1__NULL = 0, ezmax_api_definition__full_officetaxreportGetListV1__*, ezmax_api_definition__full_officetaxreportGetListV1__en, ezmax_api_definition__full_officetaxreportGetListV1__fr } ezmax_api_definition__full_officetaxreportGetListV1_Accept-Language_e;


// Download multiples attachments from an Officetaxreport
//
binary_t*
ObjectOfficetaxreportAPI_officetaxreportBatchDownloadV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request);


// Retrieve Officetaxreport's attachments
//
officetaxreport_get_attachments_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportGetAttachmentsV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);


// Retrieve Communication count
//
officetaxreport_get_communication_count_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportGetCommunicationCountV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);


// Retrieve Communication list
//
officetaxreport_get_communication_list_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportGetCommunicationListV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);


// Retrieve Communication recipients
//
officetaxreport_get_communicationrecipients_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);


// Retrieve Communication senders
//
officetaxreport_get_communicationsenders_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiOfficetaxreportID);


// Retrieve Officetaxreport list
//
// 
//
officetaxreport_get_list_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_officetaxreportGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Import attachments into the Officetaxreport
//
officetaxreport_import_into_edm_v1_response_t*
ObjectOfficetaxreportAPI_officetaxreportImportIntoEDMV1(apiClient_t *apiClient, int *pkiOfficetaxreportID, officetaxreport_import_into_edm_v1_request_t *officetaxreport_import_into_edm_v1_request);


