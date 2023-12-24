#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/versionhistory_get_object_v2_response.h"


// Retrieve an existing Versionhistory
//
// 
//
versionhistory_get_object_v2_response_t*
ObjectVersionhistoryAPI_versionhistoryGetObjectV2(apiClient_t *apiClient, int *pkiVersionhistoryID);


