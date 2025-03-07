#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezmaxcase_patch_object_v1_request.h"
#include "../model/ezmaxcase_patch_object_v1_response.h"


// Patch an existing Ezmaxcase
//
// 
//
ezmaxcase_patch_object_v1_response_t*
ObjectEzmaxcaseAPI_ezmaxcasePatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcaseID, ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request);


