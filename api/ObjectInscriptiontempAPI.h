#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/inscriptiontemp_batch_download_v1_request.h"
#include "../model/inscriptiontemp_get_attachments_v1_response.h"
#include "../model/inscriptiontemp_get_communication_count_v1_response.h"
#include "../model/inscriptiontemp_get_communication_list_v1_response.h"
#include "../model/inscriptiontemp_get_communicationrecipients_v1_response.h"
#include "../model/inscriptiontemp_get_communicationsenders_v1_response.h"
#include "../model/inscriptiontemp_get_list_v1_response.h"
#include "../model/inscriptiontemp_import_into_edm_v1_request.h"
#include "../model/inscriptiontemp_import_into_edm_v1_response.h"

// Enum EORDERBY for ObjectInscriptiontempAPI_inscriptiontempGetListV1
typedef enum  { ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_pkiInscriptiontempID_ASC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_pkiInscriptiontempID_DESC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_eInscriptiontempStatus_ASC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_eInscriptiontempStatus_DESC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_sInscriptiontempMLS_ASC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_sInscriptiontempMLS_DESC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_sInscriptiontempDescription_ASC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_sInscriptiontempDescription_DESC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_bInscriptiontempIsactive_ASC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_bInscriptiontempIsactive_DESC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_dtCreatedDate_ASC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_dtCreatedDate_DESC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_dtModifiedDate_ASC, ezmax_api_definition__full_inscriptiontempGetListV1_EORDERBY_dtModifiedDate_DESC } ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e;

// Enum  for ObjectInscriptiontempAPI_inscriptiontempGetListV1
typedef enum  { ezmax_api_definition__full_inscriptiontempGetListV1__NULL = 0, ezmax_api_definition__full_inscriptiontempGetListV1__*, ezmax_api_definition__full_inscriptiontempGetListV1__en, ezmax_api_definition__full_inscriptiontempGetListV1__fr } ezmax_api_definition__full_inscriptiontempGetListV1_Accept-Language_e;


// Download multiples attachments from a Inscriptiontemp
//
binary_t*
ObjectInscriptiontempAPI_inscriptiontempBatchDownloadV1(apiClient_t *apiClient, int *pkiInscriptiontempID, inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request);


// Retrieve Inscriptiontemp's attachments
//
inscriptiontemp_get_attachments_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetAttachmentsV1(apiClient_t *apiClient, int *pkiInscriptiontempID);


// Retrieve Communication count
//
// 
//
inscriptiontemp_get_communication_count_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptiontempID);


// Retrieve Communication list
//
// 
//
inscriptiontemp_get_communication_list_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptiontempID);


// Retrieve Inscriptiontemp's Communicationrecipient
//
// 
//
inscriptiontemp_get_communicationrecipients_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptiontempID);


// Retrieve Inscriptiontemp's Communicationsender
//
// 
//
inscriptiontemp_get_communicationsenders_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptiontempID);


// Retrieve Inscriptiontemp list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eInscriptiontempStatus | Imported<br>Processed<br>Modified |
//
inscriptiontemp_get_list_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_inscriptiontempGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Import attachments into the Inscriptiontemp
//
// 
//
inscriptiontemp_import_into_edm_v1_response_t*
ObjectInscriptiontempAPI_inscriptiontempImportIntoEDMV1(apiClient_t *apiClient, int *pkiInscriptiontempID, inscriptiontemp_import_into_edm_v1_request_t *inscriptiontemp_import_into_edm_v1_request);


