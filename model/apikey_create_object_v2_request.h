/*
 * apikey_create_object_v2_request.h
 *
 * Request for POST /2/object/apikey
 */

#ifndef _apikey_create_object_v2_request_H_
#define _apikey_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_create_object_v2_request_t apikey_create_object_v2_request_t;

#include "apikey_request_compound.h"



typedef struct apikey_create_object_v2_request_t {
    list_t *a_obj_apikey; //nonprimitive container

} apikey_create_object_v2_request_t;

apikey_create_object_v2_request_t *apikey_create_object_v2_request_create(
    list_t *a_obj_apikey
);

void apikey_create_object_v2_request_free(apikey_create_object_v2_request_t *apikey_create_object_v2_request);

apikey_create_object_v2_request_t *apikey_create_object_v2_request_parseFromJSON(cJSON *apikey_create_object_v2_requestJSON);

cJSON *apikey_create_object_v2_request_convertToJSON(apikey_create_object_v2_request_t *apikey_create_object_v2_request);

#endif /* _apikey_create_object_v2_request_H_ */

