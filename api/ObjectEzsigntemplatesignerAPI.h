#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatesigner_create_object_v1_request.h"
#include "../model/ezsigntemplatesigner_create_object_v1_response.h"
#include "../model/ezsigntemplatesigner_delete_object_v1_response.h"
#include "../model/ezsigntemplatesigner_edit_object_v1_request.h"
#include "../model/ezsigntemplatesigner_edit_object_v1_response.h"
#include "../model/ezsigntemplatesigner_get_object_v1_response.h"
#include "../model/ezsigntemplatesigner_get_object_v2_response.h"


// Create a new Ezsigntemplatesigner
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesigner_create_object_v1_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerCreateObjectV1(apiClient_t *apiClient, ezsigntemplatesigner_create_object_v1_request_t * ezsigntemplatesigner_create_object_v1_request );


// Delete an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_delete_object_v1_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignerID );


// Edit an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_edit_object_v1_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignerID , ezsigntemplatesigner_edit_object_v1_request_t * ezsigntemplatesigner_edit_object_v1_request );


// Retrieve an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_get_object_v1_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerGetObjectV1(apiClient_t *apiClient, int pkiEzsigntemplatesignerID );


// Retrieve an existing Ezsigntemplatesigner
//
// 
//
ezsigntemplatesigner_get_object_v2_response_t*
ObjectEzsigntemplatesignerAPI_ezsigntemplatesignerGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplatesignerID );


