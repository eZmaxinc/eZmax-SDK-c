#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezmaxcustomeruser_patch_object_v1_request.h"
#include "../model/ezmaxcustomeruser_patch_object_v1_response.h"


// Patch an existing Ezmaxcustomeruser
//
// 
//
ezmaxcustomeruser_patch_object_v1_response_t*
ObjectEzmaxcustomeruserAPI_ezmaxcustomeruserPatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcustomeruserID, ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request);


