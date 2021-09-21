#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignfolder_create_object_v1_request.h"
#include "../model/ezsignfolder_create_object_v1_response.h"
#include "../model/ezsignfolder_delete_object_v1_response.h"
#include "../model/ezsignfolder_get_object_v1_response.h"
#include "../model/ezsignfolder_send_v1_request.h"
#include "../model/ezsignfolder_send_v1_response.h"


// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfolder_create_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfolder_create_object_v1_request );


// Delete an existing Ezsignfolder
//
ezsignfolder_delete_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder's children IDs
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
void
ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder's forms data
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
binary_t**
ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsignfolder_get_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Send the Ezsignfolder to the signatories for signature
//
ezsignfolder_send_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderSendV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_send_v1_request_t * ezsignfolder_send_v1_request );


