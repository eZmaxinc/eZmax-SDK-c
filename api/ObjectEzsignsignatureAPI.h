#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignsignature_create_object_v1_request.h"
#include "../model/ezsignsignature_create_object_v1_response.h"
#include "../model/ezsignsignature_create_object_v2_request.h"
#include "../model/ezsignsignature_create_object_v2_response.h"
#include "../model/ezsignsignature_create_object_v3_request.h"
#include "../model/ezsignsignature_create_object_v3_response.h"
#include "../model/ezsignsignature_delete_object_v1_response.h"
#include "../model/ezsignsignature_edit_object_v2_request.h"
#include "../model/ezsignsignature_edit_object_v2_response.h"
#include "../model/ezsignsignature_get_ezsignsignatureattachment_v1_response.h"
#include "../model/ezsignsignature_get_ezsignsignatures_automatic_v1_response.h"
#include "../model/ezsignsignature_get_object_v3_response.h"
#include "../model/ezsignsignature_sign_v1_request.h"
#include "../model/ezsignsignature_sign_v1_response.h"


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignsignature_create_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1(apiClient_t *apiClient, list_t *ezsignsignature_create_object_v1_request);


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignature_create_object_v2_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV2(apiClient_t *apiClient, ezsignsignature_create_object_v2_request_t *ezsignsignature_create_object_v2_request);


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignature_create_object_v3_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV3(apiClient_t *apiClient, ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request);


// Delete an existing Ezsignsignature
//
// 
//
ezsignsignature_delete_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignatureID);


// Edit an existing Ezsignsignature
//
// 
//
ezsignsignature_edit_object_v2_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureEditObjectV2(apiClient_t *apiClient, int *pkiEzsignsignatureID, ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request);


// Retrieve an existing Ezsignsignature's Ezsignsignatureattachments
//
ezsignsignature_get_ezsignsignatureattachment_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignatureattachmentV1(apiClient_t *apiClient, int *pkiEzsignsignatureID);


// Retrieve all automatic Ezsignsignatures
//
// Return all the Ezsignsignatures that can be signed by the current user
//
ezsignsignature_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient);


// Retrieve an existing Ezsignsignature
//
// 
//
ezsignsignature_get_object_v3_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV3(apiClient_t *apiClient, int *pkiEzsignsignatureID);


// Sign the Ezsignsignature
//
// 
//
ezsignsignature_sign_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureSignV1(apiClient_t *apiClient, int *pkiEzsignsignatureID, ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request);


