#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignfoldersignerassociation_create_object_v1_request.h"
#include "../model/ezsignfoldersignerassociation_create_object_v1_response.h"
#include "../model/ezsignfoldersignerassociation_create_object_v2_request.h"
#include "../model/ezsignfoldersignerassociation_create_object_v2_response.h"
#include "../model/ezsignfoldersignerassociation_delete_object_v1_response.h"
#include "../model/ezsignfoldersignerassociation_edit_object_v1_request.h"
#include "../model/ezsignfoldersignerassociation_edit_object_v1_response.h"
#include "../model/ezsignfoldersignerassociation_force_disconnect_v1_response.h"
#include "../model/ezsignfoldersignerassociation_get_in_person_login_url_v1_response.h"
#include "../model/ezsignfoldersignerassociation_get_object_v1_response.h"
#include "../model/ezsignfoldersignerassociation_get_object_v2_response.h"
#include "../model/object.h"


// Create a new Ezsignfoldersignerassociation
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfoldersignerassociation_create_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfoldersignerassociation_create_object_v1_request );


// Create a new Ezsignfoldersignerassociation
//
// The endpoint allows to create one or many elements at once.
//
ezsignfoldersignerassociation_create_object_v2_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationCreateObjectV2(apiClient_t *apiClient, ezsignfoldersignerassociation_create_object_v2_request_t * ezsignfoldersignerassociation_create_object_v2_request );


// Delete an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_delete_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID );


// Edit an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_edit_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationEditObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID , ezsignfoldersignerassociation_edit_object_v1_request_t * ezsignfoldersignerassociation_edit_object_v1_request );


// Disconnects the Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_force_disconnect_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationForceDisconnectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID , object_t * body );


// Retrieve a Login Url to allow In-Person signing
//
// This endpoint returns a Login Url that can be used in a browser or embedded in an I-Frame to allow in person signing.  The signer Login type must be configured as In-Person.
//
ezsignfoldersignerassociation_get_in_person_login_url_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetInPersonLoginUrlV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID );


// Retrieve an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_get_object_v1_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV1(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID );


// Retrieve an existing Ezsignfoldersignerassociation
//
// 
//
ezsignfoldersignerassociation_get_object_v2_response_t*
ObjectEzsignfoldersignerassociationAPI_ezsignfoldersignerassociationGetObjectV2(apiClient_t *apiClient, int pkiEzsignfoldersignerassociationID );


