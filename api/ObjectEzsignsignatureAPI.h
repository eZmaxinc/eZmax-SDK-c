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
#include "../model/ezsignsignature_delete_object_v1_response.h"
#include "../model/ezsignsignature_get_object_v1_response.h"


// Create a new Ezsignsignature
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignsignature_create_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureCreateObjectV1(apiClient_t *apiClient, list_t * ezsignsignature_create_object_v1_request );


// Delete an existing Ezsignsignature
//
ezsignsignature_delete_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID );


// Retrieve an existing Ezsignsignature's children IDs
//
void
ObjectEzsignsignatureAPI_ezsignsignatureGetChildrenV1(apiClient_t *apiClient, int pkiEzsignsignatureID );


// Retrieve an existing Ezsignsignature
//
ezsignsignature_get_object_v1_response_t*
ObjectEzsignsignatureAPI_ezsignsignatureGetObjectV1(apiClient_t *apiClient, int pkiEzsignsignatureID );


