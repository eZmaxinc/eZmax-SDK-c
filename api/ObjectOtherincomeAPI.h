#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/otherincome_get_communication_count_v1_response.h"
#include "../model/otherincome_get_communication_list_v1_response.h"
#include "../model/otherincome_get_communicationrecipients_v1_response.h"
#include "../model/otherincome_get_communicationsenders_v1_response.h"


// Retrieve Communication count
//
// 
//
otherincome_get_communication_count_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationCountV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Communication list
//
// 
//
otherincome_get_communication_list_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationListV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Otherincome's Communicationrecipient
//
// 
//
otherincome_get_communicationrecipients_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationrecipientsV1(apiClient_t *apiClient, int *pkiOtherincomeID);


// Retrieve Otherincome's Communicationsender
//
// 
//
otherincome_get_communicationsenders_v1_response_t*
ObjectOtherincomeAPI_otherincomeGetCommunicationsendersV1(apiClient_t *apiClient, int *pkiOtherincomeID);


