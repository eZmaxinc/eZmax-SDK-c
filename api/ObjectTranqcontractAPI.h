#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/tranqcontract_get_communication_count_v1_response.h"
#include "../model/tranqcontract_get_communication_list_v1_response.h"
#include "../model/tranqcontract_get_communicationrecipients_v1_response.h"
#include "../model/tranqcontract_get_communicationsenders_v1_response.h"


// Retrieve Communication count
//
// 
//
tranqcontract_get_communication_count_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationCountV1(apiClient_t *apiClient, int *pkiTranqcontractID);


// Retrieve Communication list
//
// 
//
tranqcontract_get_communication_list_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationListV1(apiClient_t *apiClient, int *pkiTranqcontractID);


// Retrieve Tranqcontract's Communicationrecipient
//
// 
//
tranqcontract_get_communicationrecipients_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiTranqcontractID);


// Retrieve Tranqcontract's Communicationsender
//
// 
//
tranqcontract_get_communicationsenders_v1_response_t*
ObjectTranqcontractAPI_tranqcontractGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiTranqcontractID);


