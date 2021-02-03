#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/apikey_create_object_v1_request.h"
#include "../model/apikey_create_object_v1_response.h"


// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
apikey_create_object_v1_response_t*
ObjectApikeyAPI_apikeyCreateObjectV1(apiClient_t *apiClient, list_t * apikey_create_object_v1_request );


