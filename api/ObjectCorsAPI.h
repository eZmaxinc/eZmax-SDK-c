#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/cors_create_object_v1_request.h"
#include "../model/cors_create_object_v1_response.h"
#include "../model/cors_delete_object_v1_response.h"
#include "../model/cors_edit_object_v1_request.h"
#include "../model/cors_edit_object_v1_response.h"
#include "../model/cors_get_object_v2_response.h"


// Create a new Cors
//
// The endpoint allows to create one or many elements at once.
//
cors_create_object_v1_response_t*
ObjectCorsAPI_corsCreateObjectV1(apiClient_t *apiClient, cors_create_object_v1_request_t *cors_create_object_v1_request);


// Delete an existing Cors
//
// 
//
cors_delete_object_v1_response_t*
ObjectCorsAPI_corsDeleteObjectV1(apiClient_t *apiClient, int *pkiCorsID);


// Edit an existing Cors
//
// 
//
cors_edit_object_v1_response_t*
ObjectCorsAPI_corsEditObjectV1(apiClient_t *apiClient, int *pkiCorsID, cors_edit_object_v1_request_t *cors_edit_object_v1_request);


// Retrieve an existing Cors
//
// 
//
cors_get_object_v2_response_t*
ObjectCorsAPI_corsGetObjectV2(apiClient_t *apiClient, int *pkiCorsID);


