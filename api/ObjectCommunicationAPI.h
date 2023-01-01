#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/communication_get_object_v2_response.h"


// Retrieve an existing Communication
//
// 
//
communication_get_object_v2_response_t*
ObjectCommunicationAPI_communicationGetObjectV2(apiClient_t *apiClient, int pkiCommunicationID );


