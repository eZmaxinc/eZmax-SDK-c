#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/communication_get_count_v1_response.h"
#include "../model/communication_get_list_v1_response.h"

// Enum ECOMMUNICATIONMODULE for ModuleCommunicationAPI_communicationGetCommunicationCountV1
typedef enum  { ezmax_api_definition__full_communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_NULL = 0, ezmax_api_definition__full_communicationGetCommunicationCountV1_ECOMMUNICATIONMODULE_Ezsignfolder } ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e;

// Enum ECOMMUNICATIONMODULE for ModuleCommunicationAPI_communicationGetCommunicationListV1
typedef enum  { ezmax_api_definition__full_communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_NULL = 0, ezmax_api_definition__full_communicationGetCommunicationListV1_ECOMMUNICATIONMODULE_Ezsignfolder } ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e;


// Get the number of communication
//
// Get the number of communication in specified module
//
communication_get_count_v1_response_t*
ModuleCommunicationAPI_communicationGetCommunicationCountV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationCountV1_eCommunicationModule_e eCommunicationModule , int pkiEzsignfolderID );


// Retrieve communication list
//
// Retrieve communication list
//
communication_get_list_v1_response_t*
ModuleCommunicationAPI_communicationGetCommunicationListV1(apiClient_t *apiClient, ezmax_api_definition__full_communicationGetCommunicationListV1_eCommunicationModule_e eCommunicationModule , int pkiEzsignfolderID );


