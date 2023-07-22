#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/apikey_create_object_v2_request.h"
#include "../model/apikey_create_object_v2_response.h"
#include "../model/apikey_edit_object_v1_request.h"
#include "../model/apikey_edit_object_v1_response.h"
#include "../model/apikey_edit_permissions_v1_request.h"
#include "../model/apikey_edit_permissions_v1_response.h"
#include "../model/apikey_get_object_v2_response.h"
#include "../model/apikey_get_permissions_v1_response.h"
#include "../model/apikey_get_subnets_v1_response.h"
#include "../model/common_response_error.h"


// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.
//
apikey_create_object_v2_response_t*
ObjectApikeyAPI_apikeyCreateObjectV2(apiClient_t *apiClient, apikey_create_object_v2_request_t * apikey_create_object_v2_request );


// Edit an existing Apikey
//
// 
//
apikey_edit_object_v1_response_t*
ObjectApikeyAPI_apikeyEditObjectV1(apiClient_t *apiClient, int pkiApikeyID , apikey_edit_object_v1_request_t * apikey_edit_object_v1_request );


// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
apikey_edit_permissions_v1_response_t*
ObjectApikeyAPI_apikeyEditPermissionsV1(apiClient_t *apiClient, int pkiApikeyID , apikey_edit_permissions_v1_request_t * apikey_edit_permissions_v1_request );


// Retrieve an existing Apikey
//
// 
//
apikey_get_object_v2_response_t*
ObjectApikeyAPI_apikeyGetObjectV2(apiClient_t *apiClient, int pkiApikeyID );


// Retrieve an existing Apikey's Permissions
//
apikey_get_permissions_v1_response_t*
ObjectApikeyAPI_apikeyGetPermissionsV1(apiClient_t *apiClient, int pkiApikeyID );


// Retrieve an existing Apikey's subnets
//
apikey_get_subnets_v1_response_t*
ObjectApikeyAPI_apikeyGetSubnetsV1(apiClient_t *apiClient, int pkiApikeyID );


