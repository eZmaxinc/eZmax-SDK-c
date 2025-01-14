#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/communication_send_v1_request.h"
#include "../model/communication_send_v1_response.h"


// Retrieve the communication body.
//
// This endpoint returns the communication body.
//
void
ObjectCommunicationAPI_communicationGetCommunicationBodyV1(apiClient_t *apiClient, int *pkiCommunicationID);


// Send a new Communication
//
// The endpoint allows to send one or many elements at once.
//
communication_send_v1_response_t*
ObjectCommunicationAPI_communicationSendV1(apiClient_t *apiClient, communication_send_v1_request_t *communication_send_v1_request);


