#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/systemconfiguration_edit_object_v1_request.h"
#include "../model/systemconfiguration_get_object_v2_response.h"


// Edit an existing Systemconfiguration
//
// 
//
common_response_t*
ObjectSystemconfigurationAPI_systemconfigurationEditObjectV1(apiClient_t *apiClient, int *pkiSystemconfigurationID, systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request);


// Retrieve an existing Systemconfiguration
//
// 
//
systemconfiguration_get_object_v2_response_t*
ObjectSystemconfigurationAPI_systemconfigurationGetObjectV2(apiClient_t *apiClient, int *pkiSystemconfigurationID);


