#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/paymentpreparation_batch_download_v1_request.h"
#include "../model/paymentpreparation_get_attachments_v1_response.h"
#include "../model/paymentpreparation_get_communication_count_v1_response.h"
#include "../model/paymentpreparation_get_communication_list_v1_response.h"
#include "../model/paymentpreparation_get_communicationrecipients_v1_response.h"
#include "../model/paymentpreparation_get_communicationsenders_v1_response.h"
#include "../model/paymentpreparation_import_into_edm_v1_request.h"
#include "../model/paymentpreparation_import_into_edm_v1_response.h"


// Download multiples attachments from an Paymentpreparation
//
binary_t*
ObjectPaymentpreparationAPI_paymentpreparationBatchDownloadV1(apiClient_t *apiClient, int *pkiPaymentpreparationID, paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request);


// Retrieve Paymentpreparation's attachments
//
paymentpreparation_get_attachments_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationGetAttachmentsV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);


// Retrieve Communication count
//
paymentpreparation_get_communication_count_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationCountV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);


// Retrieve Communication list
//
paymentpreparation_get_communication_list_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationListV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);


// Retrieve Communication recipients
//
paymentpreparation_get_communicationrecipients_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);


// Retrieve Communication senders
//
paymentpreparation_get_communicationsenders_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiPaymentpreparationID);


// Import attachments into the Paymentpreparation
//
paymentpreparation_import_into_edm_v1_response_t*
ObjectPaymentpreparationAPI_paymentpreparationImportIntoEDMV1(apiClient_t *apiClient, int *pkiPaymentpreparationID, paymentpreparation_import_into_edm_v1_request_t *paymentpreparation_import_into_edm_v1_request);


