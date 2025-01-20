#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/ezsignformfieldgroup_create_object_v1_request.h"
#include "../model/ezsignformfieldgroup_create_object_v1_response.h"
#include "../model/ezsignformfieldgroup_edit_object_v1_request.h"
#include "../model/ezsignformfieldgroup_get_object_v2_response.h"


// Create a new Ezsignformfieldgroup
//
// The endpoint allows to create one or many elements at once.
//
ezsignformfieldgroup_create_object_v1_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupCreateObjectV1(apiClient_t *apiClient, ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request);


// Delete an existing Ezsignformfieldgroup
//
// 
//
common_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignformfieldgroupID);


// Edit an existing Ezsignformfieldgroup
//
// 
//
common_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupEditObjectV1(apiClient_t *apiClient, int *pkiEzsignformfieldgroupID, ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request);


// Retrieve an existing Ezsignformfieldgroup
//
// 
//
ezsignformfieldgroup_get_object_v2_response_t*
ObjectEzsignformfieldgroupAPI_ezsignformfieldgroupGetObjectV2(apiClient_t *apiClient, int *pkiEzsignformfieldgroupID);


