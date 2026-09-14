#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/externalbroker_batch_download_v1_request.h"
#include "../model/externalbroker_get_attachments_v1_response.h"
#include "../model/externalbroker_get_communication_count_v1_response.h"
#include "../model/externalbroker_get_communication_list_v1_response.h"
#include "../model/externalbroker_get_communicationrecipients_v1_response.h"
#include "../model/externalbroker_get_communicationsenders_v1_response.h"
#include "../model/externalbroker_import_into_edm_v1_request.h"
#include "../model/externalbroker_import_into_edm_v1_response.h"


// Download multiples attachments from an Externalbroker
//
binary_t*
ObjectExternalbrokerAPI_externalbrokerBatchDownloadV1(apiClient_t *apiClient, int *pkiExternalbrokerID, externalbroker_batch_download_v1_request_t *externalbroker_batch_download_v1_request);


// Retrieve Externalbroker's attachments
//
externalbroker_get_attachments_v1_response_t*
ObjectExternalbrokerAPI_externalbrokerGetAttachmentsV1(apiClient_t *apiClient, int *pkiExternalbrokerID);


// Retrieve Communication count
//
externalbroker_get_communication_count_v1_response_t*
ObjectExternalbrokerAPI_externalbrokerGetCommunicationCountV1(apiClient_t *apiClient, int *pkiExternalbrokerID);


// Retrieve Communication list
//
externalbroker_get_communication_list_v1_response_t*
ObjectExternalbrokerAPI_externalbrokerGetCommunicationListV1(apiClient_t *apiClient, int *pkiExternalbrokerID);


// Retrieve Communication recipients
//
externalbroker_get_communicationrecipients_v1_response_t*
ObjectExternalbrokerAPI_externalbrokerGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiExternalbrokerID);


// Retrieve Communication senders
//
externalbroker_get_communicationsenders_v1_response_t*
ObjectExternalbrokerAPI_externalbrokerGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiExternalbrokerID);


// Import attachments into the Externalbroker
//
// 
//
externalbroker_import_into_edm_v1_response_t*
ObjectExternalbrokerAPI_externalbrokerImportIntoEDMV1(apiClient_t *apiClient, int *pkiExternalbrokerID, externalbroker_import_into_edm_v1_request_t *externalbroker_import_into_edm_v1_request);


