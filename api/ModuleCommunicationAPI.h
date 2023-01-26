#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/communication_get_count_v1_response.h"

// Enum ECOMMUNICATIONOBJECTTYPE for ModuleCommunicationAPI_communicationGetCommunicationCountV1
typedef enum  { ezmax_api_definition__full_communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_NULL = 0, ezmax_api_definition__full_communicationGetCommunicationCountV1_ECOMMUNICATIONOBJECTTYPE_Ezsignfolder } ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e;


// Retrieve Communication count
//
// 
//
communication_get_count_v1_response_t*
ModuleCommunicationAPI_communicationGetCommunicationCountV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationObjecttype_e eCommunicationObjecttype , int pkiEzsignfolderID );


