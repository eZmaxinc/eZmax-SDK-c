#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/rejectedoffertopurchase_get_communication_count_v1_response.h"
#include "../model/rejectedoffertopurchase_get_communication_list_v1_response.h"
#include "../model/rejectedoffertopurchase_get_communicationrecipients_v1_response.h"
#include "../model/rejectedoffertopurchase_get_communicationsenders_v1_response.h"


// Retrieve Communication count
//
// 
//
rejectedoffertopurchase_get_communication_count_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationCountV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);


// Retrieve Communication list
//
// 
//
rejectedoffertopurchase_get_communication_list_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationListV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);


// Retrieve Rejectedoffertopurchase's Communicationrecipient
//
// 
//
rejectedoffertopurchase_get_communicationrecipients_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);


// Retrieve Rejectedoffertopurchase's Communicationsender
//
// 
//
rejectedoffertopurchase_get_communicationsenders_v1_response_t*
ObjectRejectedoffertopurchaseAPI_rejectedoffertopurchaseGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiRejectedoffertopurchaseID);


