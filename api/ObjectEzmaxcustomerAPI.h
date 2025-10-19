#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezmaxcustomer_patch_object_v1_request.h"
#include "../model/ezmaxcustomer_patch_object_v1_response.h"


// Patch an existing Ezmaxcustomer
//
// 
//
ezmaxcustomer_patch_object_v1_response_t*
ObjectEzmaxcustomerAPI_ezmaxcustomerPatchObjectV1(apiClient_t *apiClient, int *pkiEzmaxcustomerID, ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request);


