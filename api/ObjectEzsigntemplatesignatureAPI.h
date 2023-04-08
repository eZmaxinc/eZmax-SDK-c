#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatesignature_create_object_v1_request.h"
#include "../model/ezsigntemplatesignature_create_object_v1_response.h"
#include "../model/ezsigntemplatesignature_delete_object_v1_response.h"
#include "../model/ezsigntemplatesignature_edit_object_v1_request.h"
#include "../model/ezsigntemplatesignature_edit_object_v1_response.h"
#include "../model/ezsigntemplatesignature_get_object_v2_response.h"


// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesignature_create_object_v1_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV1(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v1_request_t * ezsigntemplatesignature_create_object_v1_request );


// Delete an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_delete_object_v1_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignatureID );


// Edit an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_edit_object_v1_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignatureID , ezsigntemplatesignature_edit_object_v1_request_t * ezsigntemplatesignature_edit_object_v1_request );


// Retrieve an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_get_object_v2_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplatesignatureID );


