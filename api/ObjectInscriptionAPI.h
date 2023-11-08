#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/inscription_get_communication_list_v1_response.h"


// Retrieve Communication list
//
// 
//
inscription_get_communication_list_v1_response_t*
ObjectInscriptionAPI_inscriptionGetCommunicationListV1(apiClient_t *apiClient, int pkiInscriptionID );


