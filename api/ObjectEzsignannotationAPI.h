#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignannotation_create_object_v1_request.h"
#include "../model/ezsignannotation_create_object_v1_response.h"
#include "../model/ezsignannotation_delete_object_v1_response.h"
#include "../model/ezsignannotation_edit_object_v1_request.h"
#include "../model/ezsignannotation_edit_object_v1_response.h"
#include "../model/ezsignannotation_get_object_v2_response.h"


// Create a new Ezsignannotation
//
// The endpoint allows to create one or many elements at once.
//
ezsignannotation_create_object_v1_response_t*
ObjectEzsignannotationAPI_ezsignannotationCreateObjectV1(apiClient_t *apiClient, ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request);


// Delete an existing Ezsignannotation
//
// 
//
ezsignannotation_delete_object_v1_response_t*
ObjectEzsignannotationAPI_ezsignannotationDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignannotationID);


// Edit an existing Ezsignannotation
//
// 
//
ezsignannotation_edit_object_v1_response_t*
ObjectEzsignannotationAPI_ezsignannotationEditObjectV1(apiClient_t *apiClient, int *pkiEzsignannotationID, ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request);


// Retrieve an existing Ezsignannotation
//
// 
//
ezsignannotation_get_object_v2_response_t*
ObjectEzsignannotationAPI_ezsignannotationGetObjectV2(apiClient_t *apiClient, int *pkiEzsignannotationID);


