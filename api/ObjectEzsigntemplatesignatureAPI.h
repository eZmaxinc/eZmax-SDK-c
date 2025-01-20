#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatesignature_create_object_v2_request.h"
#include "../model/ezsigntemplatesignature_create_object_v2_response.h"
#include "../model/ezsigntemplatesignature_edit_object_v2_request.h"
#include "../model/ezsigntemplatesignature_get_object_v3_response.h"


// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesignature_create_object_v2_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request);


// Delete an existing Ezsigntemplatesignature
//
// 
//
common_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);


// Edit an existing Ezsigntemplatesignature
//
// 
//
common_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID, ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request);


// Retrieve an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_get_object_v3_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);


