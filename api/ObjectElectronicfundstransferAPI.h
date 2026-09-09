#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/electronicfundstransfer_batch_download_v1_request.h"
#include "../model/electronicfundstransfer_get_attachments_v1_response.h"
#include "../model/electronicfundstransfer_get_communication_count_v1_response.h"
#include "../model/electronicfundstransfer_get_communication_list_v1_response.h"
#include "../model/electronicfundstransfer_get_communicationrecipients_v1_response.h"
#include "../model/electronicfundstransfer_get_communicationsenders_v1_response.h"
#include "../model/electronicfundstransfer_import_into_edm_v1_request.h"
#include "../model/electronicfundstransfer_import_into_edm_v1_response.h"


// Download multiples attachments from an Electronicfundstransfer
//
binary_t*
ObjectElectronicfundstransferAPI_electronicfundstransferBatchDownloadV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID, electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request);


// Retrieve Electronicfundstransfer's attachments
//
electronicfundstransfer_get_attachments_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetAttachmentsV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);


// Retrieve Communication count
//
// 
//
electronicfundstransfer_get_communication_count_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationCountV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);


// Retrieve Communication list
//
// 
//
electronicfundstransfer_get_communication_list_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationListV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);


// Retrieve Electronicfundstransfer's Communicationrecipient
//
// 
//
electronicfundstransfer_get_communicationrecipients_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);


// Retrieve Electronicfundstransfer's Communicationsender
//
// 
//
electronicfundstransfer_get_communicationsenders_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID);


// Import attachments into the Electronicfundstransfer
//
// 
//
electronicfundstransfer_import_into_edm_v1_response_t*
ObjectElectronicfundstransferAPI_electronicfundstransferImportIntoEDMV1(apiClient_t *apiClient, int *pkiElectronicfundstransferID, electronicfundstransfer_import_into_edm_v1_request_t *electronicfundstransfer_import_into_edm_v1_request);


