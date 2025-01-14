#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/electronicfundstransfer_get_communication_count_v1_response.h"
#include "../model/electronicfundstransfer_get_communication_list_v1_response.h"
#include "../model/electronicfundstransfer_get_communicationrecipients_v1_response.h"
#include "../model/electronicfundstransfer_get_communicationsenders_v1_response.h"


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


