#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/permission_create_object_v1_request.h"
#include "../model/permission_create_object_v1_response.h"
#include "../model/permission_delete_object_v1_response.h"
#include "../model/permission_edit_object_v1_request.h"
#include "../model/permission_edit_object_v1_response.h"
#include "../model/permission_get_object_v2_response.h"


// Create a new Permission
//
// The endpoint allows to create one or many elements at once.
//
permission_create_object_v1_response_t*
ObjectPermissionAPI_permissionCreateObjectV1(apiClient_t *apiClient, permission_create_object_v1_request_t * permission_create_object_v1_request );


// Delete an existing Permission
//
// 
//
permission_delete_object_v1_response_t*
ObjectPermissionAPI_permissionDeleteObjectV1(apiClient_t *apiClient, int pkiPermissionID );


// Edit an existing Permission
//
// 
//
permission_edit_object_v1_response_t*
ObjectPermissionAPI_permissionEditObjectV1(apiClient_t *apiClient, int pkiPermissionID , permission_edit_object_v1_request_t * permission_edit_object_v1_request );


// Retrieve an existing Permission
//
// 
//
permission_get_object_v2_response_t*
ObjectPermissionAPI_permissionGetObjectV2(apiClient_t *apiClient, int pkiPermissionID );


