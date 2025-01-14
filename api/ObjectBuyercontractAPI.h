#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/buyercontract_get_communication_count_v1_response.h"
#include "../model/buyercontract_get_communication_list_v1_response.h"
#include "../model/buyercontract_get_communicationrecipients_v1_response.h"
#include "../model/buyercontract_get_communicationsenders_v1_response.h"
#include "../model/common_response_error.h"


// Retrieve Communication count
//
// 
//
buyercontract_get_communication_count_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiBuyercontractID);


// Retrieve Communication list
//
// 
//
buyercontract_get_communication_list_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiBuyercontractID);


// Retrieve Buyercontract's Communicationrecipient
//
// 
//
buyercontract_get_communicationrecipients_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiBuyercontractID);


// Retrieve Buyercontract's Communicationsender
//
// 
//
buyercontract_get_communicationsenders_v1_response_t*
ObjectBuyercontractAPI_buyercontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiBuyercontractID);


