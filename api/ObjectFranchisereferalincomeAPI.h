#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/franchisereferalincome_create_object_v1_request.h"
#include "../model/franchisereferalincome_create_object_v1_response.h"
#include "../model/franchisereferalincome_create_object_v2_request.h"
#include "../model/franchisereferalincome_create_object_v2_response.h"


// Create a new Franchisereferalincome
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
franchisereferalincome_create_object_v1_response_t*
ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV1(apiClient_t *apiClient, list_t *franchisereferalincome_create_object_v1_request);


// Create a new Franchisereferalincome
//
// The endpoint allows to create one or many elements at once.
//
franchisereferalincome_create_object_v2_response_t*
ObjectFranchisereferalincomeAPI_franchisereferalincomeCreateObjectV2(apiClient_t *apiClient, franchisereferalincome_create_object_v2_request_t *franchisereferalincome_create_object_v2_request);


