#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/inscriptiontemp_get_communication_count_v1_response.h"
#include "../model/inscriptiontemp_get_communication_list_v1_response.h"
#include "../model/inscriptiontemp_get_communicationrecipients_v1_response.h"
#include "../model/inscriptiontemp_get_communicationsenders_v1_response.h"


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


