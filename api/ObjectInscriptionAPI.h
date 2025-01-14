#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/inscription_get_attachments_v1_response.h"
#include "../model/inscription_get_communication_count_v1_response.h"
#include "../model/inscription_get_communication_list_v1_response.h"
#include "../model/inscription_get_communicationrecipients_v1_response.h"
#include "../model/inscription_get_communicationsenders_v1_response.h"


// Retrieve Inscription's Attachments
//
// 
//
inscription_get_attachments_v1_response_t*
ObjectInscriptionAPI_inscriptionGetAttachmentsV1(apiClient_t *apiClient, int *pkiInscriptionID);


// Retrieve Communication count
//
// 
//
inscription_get_communication_count_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionID);


// Retrieve Communication list
//
// 
//
inscription_get_communication_list_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionID);


// Retrieve Inscription's Communicationrecipient
//
// 
//
inscription_get_communicationrecipients_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionID);


// Retrieve Inscription's Communicationsender
//
// 
//
inscription_get_communicationsenders_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionID);


