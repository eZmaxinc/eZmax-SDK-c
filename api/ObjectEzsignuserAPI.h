#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignuser_edit_object_v1_request.h"
#include "../model/ezsignuser_edit_object_v1_response.h"
#include "../model/ezsignuser_get_object_v2_response.h"


// Edit an existing Ezsignuser
//
// 
//
ezsignuser_edit_object_v1_response_t*
ObjectEzsignuserAPI_ezsignuserEditObjectV1(apiClient_t *apiClient, int *pkiEzsignuserID, ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request);


// Retrieve an existing Ezsignuser
//
// 
//
ezsignuser_get_object_v2_response_t*
ObjectEzsignuserAPI_ezsignuserGetObjectV2(apiClient_t *apiClient, int *pkiEzsignuserID);


