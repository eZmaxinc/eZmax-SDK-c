#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/inscriptionnotauthenticated_get_communication_count_v1_response.h"
#include "../model/inscriptionnotauthenticated_get_communication_list_v1_response.h"
#include "../model/inscriptionnotauthenticated_get_communicationrecipients_v1_response.h"
#include "../model/inscriptionnotauthenticated_get_communicationsenders_v1_response.h"


// Retrieve Communication count
//
// 
//
inscriptionnotauthenticated_get_communication_count_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationCountV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);


// Retrieve Communication list
//
// 
//
inscriptionnotauthenticated_get_communication_list_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationListV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);


// Retrieve Inscriptionnotauthenticated's Communicationrecipient
//
// 
//
inscriptionnotauthenticated_get_communicationrecipients_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);


// Retrieve Inscriptionnotauthenticated's Communicationsender
//
// 
//
inscriptionnotauthenticated_get_communicationsenders_v1_response_t*
ObjectInscriptionnotauthenticatedAPI_inscriptionnotauthenticatedGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiInscriptionnotauthenticatedID);


