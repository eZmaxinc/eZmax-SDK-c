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
#include "../model/ezsignsignature_create_object_v4_request.h"
#include "../model/ezsignsignature_create_object_v4_response.h"
#include "../model/ezsignsignature_delete_object_v1_response.h"
#include "../model/ezsignsignature_edit_object_v3_request.h"
#include "../model/ezsignsignature_edit_object_v3_response.h"
#include "../model/ezsignsignature_get_ezsignsignatureattachment_v1_response.h"
#include "../model/ezsignsignature_get_ezsignsignatures_automatic_v1_response.h"
#include "../model/ezsignsignature_get_object_v4_response.h"
#include "../model/ezsignsignature_sign_v1_request.h"
#include "../model/ezsignsignature_sign_v1_response.h"


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsignsignature_create_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1(apiClient_t *apiClient, list_t *ezsignsignature_create_object_v1_request);


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsignsignature_create_object_v2_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV2(apiClient_t *apiClient, ezsignsignature_create_object_v2_request_t *ezsignsignature_create_object_v2_request);


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsignsignature_create_object_v3_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV3(apiClient_t *apiClient, ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request);


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignature_create_object_v4_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV4(apiClient_t *apiClient, ezsignsignature_create_object_v4_request_t *ezsignsignature_create_object_v4_request);


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
ezsignsignature_edit_object_v3_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureEditObjectV3(apiClient_t *apiClient, int *pkiEzsignsignatureID, ezsignsignature_edit_object_v3_request_t *ezsignsignature_edit_object_v3_request);


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
ezsignsignature_get_object_v4_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV4(apiClient_t *apiClient, int *pkiEzsignsignatureID);


// Sign the Ezsignsignature
//
// 
//
ezsignsignature_sign_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureSignV1(apiClient_t *apiClient, int *pkiEzsignsignatureID, ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request);


